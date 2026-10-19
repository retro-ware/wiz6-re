"""Image access and recursive-descent disassembly (capstone, 16-bit) for the lifter."""
import json, os, struct
import capstone as cs
from capstone import x86 as X

R = os.path.join(os.path.dirname(__file__), '..')
DSEG = 0xfd80
OVL_BASE = 0x4572
ROOT_GAME_END = 0x36dc
_md = cs.Cs(cs.CS_ARCH_X86, cs.CS_MODE_16)
_md.detail = True
BRANCH = ('loop', 'loope', 'loopne', 'jcxz')
# functions no prologue or direct call reveals (reached through pointers only)
EXTRA_FUNCS = {'WPOPS': (0x51c8,)}


class Image:
    """One image: ROOT or an overlay. code/data are bytes; cbase/dbase their load addresses."""

    def __init__(self, name):
        self.name = name
        self.lib = self._libfns()
        if name == 'ROOT':
            img = open(R + '/orig/wroot.img', 'rb').read()
            self.code, self.cbase = img[:ROOT_GAME_END], 0
            self.data, self.dbase = img[DSEG + 2:DSEG + 0x636], 2
            self.bss = (0x7d2, 0x4fec)
            self.end = ROOT_GAME_END
        else:
            d = open(R + '/gog/x/app/%s.OVR' % name, 'rb').read()
            magic, cbase, csz, dbase, dsz, bsz, entry = struct.unpack_from('<7H', d)
            self.cbase, self.dbase = cbase, dbase
            self.end = entry                       # $ovbgn follows the game code
            self.code = d[14:14 + entry - cbase]
            tail = 0xa + (0x82 if 'atol_' in self.lib.values() else 0)
            self.data = d[14 + csz:14 + csz + dsz - tail]
            self.bss = (dbase + dsz, dbase + dsz + bsz)
            # ovmain_ = target of $ovbgn's call (rel word at $ovbgn+0x27)
            self.ovmain = (entry + 0x29 + struct.unpack_from('<h', d, 14 + entry - cbase + 0x27)[0]) & 0xffff
        fl = json.load(open(R + '/work/fn/funcs.json'))[name]
        self.funcs = sorted(a for a in fl if self.cbase <= a < self.end)
        self._add_call_targets()

    def _add_call_targets(self):
        """Grow the function list with direct call targets until stable (recursive descent)."""
        extra = set()
        if self.name == 'ROOT':
            from blobutil import call_targets, ovl, ovl_names
            for n in ovl_names():
                for a, t in call_targets(ovl(n)[1], OVL_BASE, ops=(0xe8,)):
                    if t < ROOT_GAME_END:
                        extra.add(t)
        fs = set(self.funcs) | extra | {self.cbase} | set(EXTRA_FUNCS.get(self.name, ()))
        if self.name != 'ROOT':
            fs.add(self.ovmain)
        done = set()
        while fs - done:
            for s in sorted(fs - done):
                done.add(s)
                nxt = min([f for f in fs if f > s] + [self.end])
                seen, _ = flow(self, s, nxt)
                for i in seen.values():
                    if i.bytes[0] == 0xe8:
                        t = i.operands[0].imm & 0xffff
                        if self.cbase <= t < self.end and t not in self.lib:
                            fs.add(t)
        self.funcs = sorted(fs)

    def _libfns(self):
        out = {}
        for l in open(R + '/work/symmap.txt'):
            a, k, v, n = l.split()
            v = int(v, 16)
            if k == 'code' and (a == self.name or a == 'ROOT' and v >= ROOT_GAME_END):
                out[v] = n
        return out

    def fname(self, a):
        """C name of the function at a (without the trailing _)."""
        if self.name == 'ROOT' and a == 0x132d:
            return 'main'
        if self.name != 'ROOT' and a == self.ovmain:
            return 'ovmain'
        import symnames
        return symnames.func(self.name, a) or 'f%04x' % a

    def ranges(self):
        f = self.funcs + [self.end]
        return [(f[i], f[i + 1]) for i in range(len(f) - 1)]


def decode(img, a, end):
    b = img.code[a - img.cbase:min(end, a + 8) - img.cbase]
    for i in _md.disasm(b, a):
        return i
    return None


def is_switch_jmp(i):
    return (i.mnemonic == 'jmp' and i.operands[0].type == X.X86_OP_MEM
            and i.operands[0].mem.segment == X.X86_REG_CS)


def switch_count(seen, a):
    """Entry count of the jump table dispatched at a (cmp ax,N; jnb; xchg; shl; jmp)."""
    p = [x for x in sorted(seen) if x < a][-4:]
    if len(p) == 4:
        c = seen[p[0]]
        if c.mnemonic == 'cmp' and c.operands[1].type == X.X86_OP_IMM:
            return c.operands[1].imm & 0xffff
    return None


def flow(img, start, end):
    """Recursive descent over [start, end). Returns ({addr: insn}, {table addr: count})."""
    seen, tables = {}, {}
    todo = [start]
    while True:
        while todo:
            a = todo.pop()
            while start <= a < end and a not in seen:
                i = decode(img, a, end)
                if i is None:
                    break
                seen[a] = i
                m = i.mnemonic
                if i.group(X.X86_GRP_JUMP) or m in BRANCH:
                    op = i.operands[0]
                    if op.type != X.X86_OP_IMM:
                        break
                    todo.append(op.imm & 0xffff)
                    if m == 'jmp':
                        break
                elif m in ('ret', 'retf', 'iret', 'hlt'):
                    break
                a += i.size
        for a, i in seen.items():
            if is_switch_jmp(i):
                tbl = i.operands[0].mem.disp & 0xffff
                if tbl in tables:
                    continue
                n = switch_count(seen, a)
                if n and start <= tbl and tbl + 2 * n <= end:
                    tables[tbl] = n
                    todo += [struct.unpack_from('<H', img.code, tbl - img.cbase + 2 * k)[0] for k in range(n)]
        if not todo:
            return seen, tables
