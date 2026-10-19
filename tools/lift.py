"""Statement-level lifter: one Aztec C 4.2b function -> C source in flat goto style.

Every statement keeps its original address range [s, e). A statement that cannot be lifted,
or that contains an address in `demote` (from a failed compile/compare round), is emitted as
#asm db bytes, so the function always builds. Registers are not carried across labels; a
statement reading a register it did not set goes raw.
"""
import os, sys
sys.path.insert(0, os.path.dirname(__file__))
from capstone import x86 as X
from x86dis import Image, flow, decode, BRANCH, OVL_BASE

R16 = {X.X86_REG_AX: 'ax', X.X86_REG_BX: 'bx', X.X86_REG_CX: 'cx', X.X86_REG_DX: 'dx',
       X.X86_REG_SI: 'si', X.X86_REG_DI: 'di', X.X86_REG_BP: 'bp', X.X86_REG_SP: 'sp',
       X.X86_REG_ES: 'es', X.X86_REG_DS: 'ds', X.X86_REG_SS: 'ss', X.X86_REG_CS: 'cs'}
R8 = {X.X86_REG_AL: ('ax', 0), X.X86_REG_AH: ('ax', 1), X.X86_REG_BL: ('bx', 0), X.X86_REG_BH: ('bx', 1),
      X.X86_REG_CL: ('cx', 0), X.X86_REG_CH: ('cx', 1), X.X86_REG_DL: ('dx', 0), X.X86_REG_DH: ('dx', 1)}
JCC = {'je': '==', 'jne': '!=', 'jl': '<', 'jge': '>=', 'jle': '<=', 'jg': '>',
       'jb': 'u<', 'jae': 'u>=', 'jbe': 'u<=', 'ja': 'u>'}
ALU = {'add': '+', 'sub': '-', 'and': '&', 'or': '|', 'xor': '^'}
NEG = {'==': '!=', '!=': '==', '<': '>=', '>=': '<', '<=': '>', '>': '<=',
       'u<': 'u>=', 'u>=': 'u<', 'u<=': 'u>', 'u>': 'u<='}


def negate(c):
    if c[0] in ('&&', '||'):
        return ('||' if c[0] == '&&' else '&&',) + tuple(negate(x) for x in c[1:])
    return (NEG[c[0]], c[1], c[2])


FP = ('fp',)        # the frame pointer as a value: only as a local array's base


def split_fp(e):
    """idx for e = idx + bp, else None."""
    if e[0] == 'b' and e[1] == '+':
        if e[3] == FP and FP not in sub_exprs(e[2]):
            return e[2]
        if e[2] == FP and FP not in sub_exprs(e[3]):
            return e[3]
    return None


def add_const(e, k):
    """e + k with constants folded (cgen emits +1..+3 as inc's)."""
    if e[0] == 'b' and e[1] in ('+', '-') and e[3][0] == 'c':
        c = e[3][1] - 0x10000 if e[3][1] & 0x8000 else e[3][1]
        k += c if e[1] == '+' else -c
        e = e[2]
    if k == 0:
        return e
    return ('b', '+', e, ('c', k)) if k > 0 else ('b', '-', e, ('c', -k))


def pair(lo, hi):
    """The long whose low word is lo and high word is hi, or None."""
    if lo[0] == 'L0' and hi == ('L1', lo[1]):
        return lo[1]
    if hi == ('sx', lo):
        return ('L', lo)
    if lo[0] == 'c' and hi[0] == 'c':
        return ('cl', lo[1] | hi[1] << 16)
    if lo[0] == hi[0] == 'v' and lo[1] == hi[1] != 'r' and lo[3] == hi[3] == 2 and \
            (hi[2] - lo[2]) & 0xffff == 2:
        return ('v', lo[1], lo[2], 4)
    if lo[0] == hi[0] == 'm' and lo[1] == hi[1] and lo[3] == hi[3] == 2 and (hi[2] - lo[2]) & 0xffff == 2:
        return ('m', lo[1], lo[2], 4)
    if lo[0] == hi[0] == 'la' and lo[3] == hi[3] and lo[2] == hi[2] == 2 and hi[1] - lo[1] == 2:
        return ('la', lo[1], 4, lo[3])
    if hi == ('c', 0) and lo[0] != 'c' and size_of(lo) == 2:
        return ('U', lo)
    return None


LONG_HELPERS = {'$ldv': '/', '$lrm': '%', '$lud': 'u/', '$lum': 'u%'}
STORE_OPS = ('mov', 'add', 'sub', 'and', 'or', 'xor', 'inc', 'dec', 'neg', 'not', 'shl', 'sar', 'shr')


class Unlift(Exception):
    pass


# ---------------------------------------------------------------- expressions
# Expressions are tuples so they compare structurally:
#   ('c', v)                    constant (16-bit)
#   ('v', kind, where, size)    variable: kind p/l (frame offset), g (address), r (si/di)
#   ('m', base, disp, size)     size-byte object at base + disp (base: expression)
#   ('b', op, a, b)             binary; op in + - * & | ^ << >> u>>
#   ('u', op, a)                unary - ~
#   ('call', name, args, uid)   function call
#   ('&', var)                  address of a variable
#   ('lo', a)                   low byte of a word expression
#   ('x', signed, a)            byte expression widened to int
#   ('la', disp, size, idx)     element of the local array at bp+disp, idx = byte offset
#   ('?', cond, a, b)           cond ? a : b
#   ('sx', a)                   dx after cwd (sign of a); feeds idiv, or pairs with a as (long)a
#   ('L', a) / ('U', a)         int / unsigned widened to long
#   ('cl', v)                   long constant
#   ('L0', E) / ('L1', E)       low / high word of the long E (a register pair)
def is_var(e):
    return e[0] == 'v'


def sub_exprs(e):
    if not isinstance(e, tuple):
        return
    yield e
    for x in e[1:]:
        if isinstance(x, tuple):
            yield from sub_exprs(x)
        elif isinstance(x, list):
            for y in x:
                yield from sub_exprs(y)


def has_call(e):
    return any(x[0] == 'call' for x in sub_exprs(e))


def vars_of(e):
    return {x for x in sub_exprs(e) if x[0] == 'v'}


class St:
    """kind: asg lv rv | cas lv op rv | inc lv op | expr e | if cond target | goto target |
    ret rv | raw | switch ... | case"""

    def __init__(self, kind, s, e, **kw):
        self.kind, self.s, self.e = kind, s, e
        self.__dict__.update(kw)

    def __repr__(self):
        return '<%s %04x-%04x %s>' % (self.kind, self.s, self.e,
                                      {k: v for k, v in self.__dict__.items() if k not in ('kind', 's', 'e')})


# ---------------------------------------------------------------- function shape
class Func:
    def __init__(self, img, s, e):
        self.img, self.s, self.e = img, s, e
        self.seen, self.tables = flow(img, s, e)
        self.addrs = sorted(self.seen)
        self._frame()

    def b(self, a):
        return self.img.code[a - self.img.cbase]

    def _frame(self):
        b, a = self.b, self.s
        self.frame, self.locals, self.regs = False, 0, []
        if b(a) == 0x55 and b(a + 1) == 0x8b and b(a + 2) == 0xec:
            self.frame = True
            a += 3
            if b(a) == 0x83 and b(a + 1) == 0xc4:
                self.locals = -((b(a + 2) ^ 0x80) - 0x80)
                a += 3
            elif b(a) == 0x81 and b(a + 1) == 0xc4:
                self.locals = 0x10000 - (b(a + 2) | b(a + 3) << 8)
                a += 4
        if b(a) == 0x57:
            self.regs.append('di')
            a += 1
        if b(a) == 0x56:
            self.regs.append('si')
            a += 1
        self.body = a
        pat = (b'\x5e' if 'si' in self.regs else b'') + (b'\x5f' if 'di' in self.regs else b'') + \
            (b'\x8b\xe5\x5d' if self.frame else b'') + b'\xc3'
        self.epi = None
        for x in self.addrs:
            o = x - self.img.cbase
            if self.img.code[o:o + len(pat)] == pat and x + len(pat) - 1 in self.seen:
                self.epi = x
                break
        self.epi_end = self.epi + len(pat) if self.epi is not None else None
        self.scratch = {r for r in self.regs if self._is_scratch(r)}

    def _is_scratch(self, r):
        """si/di saved by the prologue but used only as cgen's own index temp: every write is
        `mov r, reg16`, read only as a memory index before the next label, write or call."""
        X86 = {'si': X.X86_REG_SI, 'di': X.X86_REG_DI}[r]
        lo, hi = self.body, self.epi if self.epi is not None else self.e
        labels = set()
        for i in self.seen.values():
            if (i.group(X.X86_GRP_JUMP) or i.mnemonic in BRANCH) and i.operands and \
                    i.operands[0].type == X.X86_OP_IMM:
                labels.add(i.operands[0].imm & 0xffff)
        live, writes = False, 0
        for a in self.addrs:
            if not lo <= a < hi:
                continue
            i = self.seen[a]
            if a in labels or i.mnemonic in ('call', 'ret') or i.group(X.X86_GRP_JUMP):
                live = False
            ops = list(i.operands)
            idx = any(o.type == X.X86_OP_MEM and X86 in (o.mem.base, o.mem.index) for o in ops)
            reg = [k for k, o in enumerate(ops) if o.type == X.X86_OP_REG and o.reg == X86]
            if idx:
                if not live or reg:
                    return False
                live = False            # one use per write
            elif reg:
                if i.mnemonic != 'mov' or reg != [0] or ops[1].type != X.X86_OP_REG or ops[1].size != 2:
                    return False
                live, writes = True, writes + 1
            elif i.mnemonic in ('push', 'pop', 'xchg') or i.mnemonic.startswith(('rep', 'movs', 'stos', 'lods', 'cmps', 'scas')):
                if any(o.type == X.X86_OP_REG and o.reg == X86 for o in ops) or i.mnemonic[:4] in ('movs', 'stos', 'lods', 'cmps', 'scas', 'rep ', 'repn', 'repe'):
                    return False
        return writes > 0


# ---------------------------------------------------------------- symbolic execution
class Lifter:
    def __init__(self, img, s, e, names, demote=()):
        self.img, self.names = img, names
        self.f = Func(img, s, e)
        self.demote = set(demote)
        self.sts = []

    # ---- registers and operands
    def reg(self, r):
        if r in self.regvars:
            if r in self.pend:         # first read after an assignment made inside an expression
                return ('=', ('v', 'r', r, 2), self.pend.pop(r))
            return ('v', 'r', r, 2)
        if r == 'bp':
            return FP
        v = self.R.get(r)
        if v is None:
            raise Unlift('unknown ' + r)
        return v

    def memop(self, op):
        m = op.mem
        seg = R16.get(m.segment)
        if seg not in (None, 'ds', 'ss'):
            raise Unlift('segment ' + seg)
        base, index = R16.get(m.base), R16.get(m.index)
        size = op.size
        if size not in (1, 2):
            raise Unlift('mem size %d' % size)
        if base == 'bp':
            v = ('v', 'p' if m.disp > 0 else 'l', m.disp, size)
            if index is None:
                return v
            return ('m', ('b', '+', ('&', v), self.reg(index)), 0, size)
        parts = [self.reg(x) for x in (base, index) if x]
        if not parts:
            return ('v', 'g', m.disp & 0xffff, size)
        e = parts[0] if len(parts) == 1 else ('b', '+', parts[0], parts[1])
        if any(x == FP for x in sub_exprs(e)):
            idx = split_fp(e)
            if idx is None or m.disp >= 0:
                raise Unlift('frame address')
            return ('la', m.disp, size, idx)
        return ('m', e, m.disp, size)

    def val(self, op):
        if op.type == X.X86_OP_IMM:
            return ('c', op.imm & (0xff if op.size == 1 else 0xffff))
        if op.type == X.X86_OP_REG:
            r = op.reg
            if r in R16:
                return self.reg(R16[r])
            if r in R8:
                full, hi = R8[r]
                if hi:
                    raise Unlift('high byte read')
                v = self.reg(full)
                return v if size_of(v) == 1 else ('lo', v)
            raise Unlift('reg')
        return self.memop(op)

    def setreg(self, op, v):
        r = op.reg
        if r in R16:
            n = R16[r]
            if n in ('sp', 'bp', 'es', 'ds', 'ss', 'cs'):
                raise Unlift('write ' + n)
            if n in self.regvars:
                rv = ('v', 'r', n, 2)
                if self.stack:         # pushes pending: si = x happens inside the expression
                    if n in self.pend or any(rv in sub_exprs(x) for x in list(self.R.values()) + self.stack):
                        raise Unlift('regvar in expression')
                    self.pend[n] = v
                else:
                    self.emit('asg', lv=rv, rv=v)
            else:
                self.R[n] = v
        elif r in R8:
            full, hi = R8[r]
            if hi:
                raise Unlift('high byte write')
            self.R[full] = v if size_of(v) == 1 else ('lo', v)
        else:
            raise Unlift('reg write')

    # ---- statements
    def emit(self, kind, **kw):
        a = self.cur
        if self.pend:
            raise Unlift('pending regvar')
        if self.side is not None and self.st_start < a.address:     # a void call nothing consumed
            if self.stack:
                raise Unlift('nested call args')
            self.sts.append(St('expr', self.st_start, a.address, x=self.R.pop(self.side)))
            self.st_start = a.address
            self.side = None
        lv, rv = kw.get('lv'), kw.get('rv')
        p = self.sts[-1] if self.sts else None
        if kind == 'inc' and p is not None and p.e == self.st_start == a.address and getattr(p, 'lv', None) == lv and \
                (p.kind == 'inc' and p.op == kw['op'] or
                 p.kind == 'cas' and p.op == kw['op'] and p.rv[0] == 'c' and getattr(p, 'incs', False)):
            # x += 2 is two incs on the same address, the second without reloading it
            n = 2 if p.kind == 'inc' else p.rv[1] + 1
            p.kind, p.rv, p.incs, p.e = 'cas', ('c', n), True, a.address + a.size
            self.st_start = p.e
            self.side = None
            return p
        if kind == 'asg' and lv and lv[:2] == ('v', 'r') and rv and rv[0] == 'b' and rv[1] in ('+', '-') and \
                rv[2] == lv and lv not in sub_exprs(rv[3]) and p is not None and p.kind == 'asg' and \
                p.lv == lv and p.e == self.st_start and lv not in sub_exprs(p.rv) and \
                getattr(self.f.seen.get(self.st_start), 'mnemonic', None) not in (None, 'mov'):
            # rsi = a + b + c is stored twice by cgen: si = a + b, then ax (still a + b) + c
            p.rv, p.e = ('b', rv[1], p.rv, rv[3]), a.address + a.size
            self.st_start = p.e
            self.invalidate(lv, None)
            self.side = None
            return p
        st = St(kind, self.st_start, a.address + a.size, **kw)
        self.sts.append(st)
        self.st_start = st.e
        if kind in ('asg', 'cas', 'inc'):
            self.invalidate(kw['lv'], kw.get('rv') if kind == 'asg' else None)
        self.side = None
        return st

    def invalidate(self, lv, rv):
        """After lv = rv: registers holding rv now hold lv; values that read lv are stale."""
        mem = lv[0] in ('m', 'la') or lv[0] == 'v' and lv[1] == 'g'
        key = (lv[1], lv[2]) if lv[0] == 'v' else None
        for r, v in list(self.R.items()):
            if rv is not None and v == rv and lv[0] in ('v', 'm'):
                self.R[r] = lv
                continue
            for x in sub_exprs(v):
                if x[0] == 'v' and (x[1], x[2]) == key or \
                        mem and (x[0] in ('m', 'la') or x[0] == 'v' and x[1] == 'g'):
                    del self.R[r]
                    break

    def meet(self, a, fall):
        """Register state at label a: what all incoming edges agree on."""
        ins = self.out.get(a, [])
        if len(ins) != self.tcount.get(a, 0):
            return {}           # a backward jump or one from raw code
        states = ins + ([fall] if fall is not None else [])
        if not states:
            return {}
        r = dict(states[0])
        for s in states[1:]:
            r = {k: v for k, v in r.items() if s.get(k) == v}
        return r

    def run(self):
        f = self.f
        self.regvars = set(f.regs) - f.scratch
        body = [a for a in f.addrs if a >= f.body and not (f.epi is not None and f.epi <= a < f.epi_end)]
        self.targets, self.tcount = set(), {}
        self.skip_to, self.nolabel = 0, set()
        for a in f.addrs:
            i = f.seen[a]
            if (i.group(X.X86_GRP_JUMP) or i.mnemonic in BRANCH) and i.operands[0].type == X.X86_OP_IMM:
                t = i.operands[0].imm & 0xffff
                self.targets.add(t)
                self.tcount[t] = self.tcount.get(t, 0) + 1
        self.R, self.stack, self.flags, self.side, self.pend = {}, [], None, None, {}
        self.carry = None       # (lo reg, op, a, b, next addr) of an add/sub an adc/sbb may extend
        self.out, self.dead = {}, False
        self.raw = False
        self.skip = None
        self.st_start = f.body
        prev_end = f.body
        self.find_switches()
        for a in body:
            i = f.seen[a]
            if prev_end in self.cons and a >= prev_end:
                prev_end = self.close_switch(prev_end)
            if a < prev_end:
                continue
            if a != prev_end:          # gap: unreached bytes or the epilogue
                self.finish(prev_end)
                if f.epi is not None and prev_end == f.epi:
                    self.st_start = f.epi
                    self.cur = f.seen[f.epi + 0] if f.epi in f.seen else i
                    self.sts.append(St('ret', f.epi, f.epi_end, rv=None, epi=True))
                    self.st_start = f.epi_end
                    self.dead = True        # nothing falls through the epilogue
                    if f.epi_end in self.cons:      # a jump table right after the epilogue
                        prev_end = self.close_switch(f.epi_end)
                        if a < prev_end:
                            continue
                    elif a != f.epi_end:
                        self.sts.append(St('raw', f.epi_end, a, why='gap'))
                else:
                    self.sts.append(St('raw', prev_end, a, why='gap'))
                self.st_start = a
            prev_end = a + i.size
            self.cur = i
            if a in self.targets and a not in self.nolabel:
                fall = None if self.dead else dict(self.R)
                n = len(self.sts)
                raw = self.raw
                self.finish(a)
                if raw or any(x.kind == 'raw' for x in self.sts[n:]):
                    fall = {} if fall is not None else None
                self.R = self.meet(a, fall)
            elif self.dead:
                self.R = {}
            self.dead = False
            if self.skip == a or a < self.skip_to:
                continue
            try:
                if self.raw:
                    self.raw_step(i)
                else:
                    self.step(i)
            except Unlift as ex:
                self.raw, self.why = True, str(ex)
                self.raw_step(i)
        if prev_end in self.cons:
            prev_end = self.close_switch(prev_end)
        self.finish(prev_end)
        if f.epi is not None and prev_end == f.epi:
            self.sts.append(St('ret', f.epi, f.epi_end, rv=None, epi=True))
            prev_end = f.epi_end
        if prev_end < f.e:
            x = decode(self.img, prev_end, f.e)
            if x is not None and x.mnemonic == 'jmp' and x.size == f.e - prev_end and \
                    x.operands[0].type == X.X86_OP_IMM and f.body <= (x.operands[0].imm & 0xffff) < prev_end:
                # dead 'jmp' cgen leaves after a switch dispatch: an unreachable goto
                self.sts.append(St('goto', prev_end, f.e, target=x.operands[0].imm & 0xffff))
            else:
                self.sts.append(St('raw', prev_end, f.e, why='tail'))
        return self.post()

    def close_switch(self, a):
        """The dispatch/table region starting at a ends the switch; returns its end."""
        end = self.cons[a]
        self.finish(a)
        if any(x.kind == 'switch' and x.sw['start'] == a for x in self.sts):
            self.sts.append(St('endsw', a, end))
        else:
            self.sts.append(St('raw', a, end, why='switch raw'))
        self.reset(end)
        return end

    def finish(self, a):
        """A label or gap at a: the open statement must be complete."""
        if self.raw or self.stack or self.pend or self.flags is not None and self.flags[0] != 'soft':
            if not self.raw:
                self.why = 'pending pushes' if self.stack else 'pending cmp'
            self.raw_upto(a)
        elif self.side is not None:
            self.sts.append(St('expr', self.st_start, a, x=self.R[self.side]))
        elif a == self.f.epi and self.st_start < a and 'ax' in self.R:
            self.sts.append(St('ret', self.st_start, a, rv=self.R['ax'], fall=True))
        elif self.st_start < a:
            self.raw, self.why = True, 'dangling value'
            self.raw_upto(a)
        self.reset(a)

    def reset(self, a):
        self.R, self.stack, self.flags, self.side, self.pend = {}, [], None, None, {}
        self.raw = False
        self.st_start = a

    def raw_upto(self, a):
        if a > self.st_start:
            self.sts.append(St('raw', self.st_start, a, why=getattr(self, 'why', '?')))
        self.reset(a)

    def raw_step(self, i):
        """Raw mode lasts until a clean point: after a store, branch, or call cleanup."""
        m, ops = i.mnemonic, i.operands
        clean = (i.group(X.X86_GRP_JUMP) or m in BRANCH or m == 'ret' or
                 (m in STORE_OPS and ops and ops[0].type == X.X86_OP_MEM) or
                 (m == 'pop' and ops[0].reg == X.X86_REG_CX) or
                 (m == 'add' and ops[0].type == X.X86_OP_REG and ops[0].reg == X.X86_REG_SP))
        if clean:
            nxt = self.f.seen.get(i.address + i.size)
            if m == 'call' or (nxt is not None and bytes(nxt.bytes) == b'\x59' and m == 'call'):
                return
            self.raw_upto(i.address + i.size)

    # ---- the semantic core
    def step(self, i):
        m, ops, a = i.mnemonic, i.operands, i.address
        if any(x in self.demote for x in range(a, a + i.size)):
            raise Unlift('demoted')
        if self.side is not None:
            rd, wr = i.regs_access()
            reads = {R16.get(r) or (R8[r][0] if r in R8 else None) for r in rd}
            writes = {R16.get(r) or (R8[r][0] if r in R8 else None) for r in wr}
            if self.side in reads or any(self.R.get(x) == ('sx', self.R[self.side]) for x in reads):
                self.side = None
            elif self.side in writes or i.group(X.X86_GRP_JUMP) or m in BRANCH or m == 'call' or \
                    m == 'push' and not self.stack or \
                    any(o.type == X.X86_OP_MEM for o in ops[:1]) and m not in ('cmp', 'test', 'push'):
                if self.stack:
                    raise Unlift('nested call args')
                self.sts.append(St('expr', self.st_start, a, x=self.R[self.side]))
                self.st_start = a
                del self.R[self.side]
                self.side = None
        if m == 'mov':
            d, s = ops
            if d.type == X.X86_OP_REG and d.reg == X.X86_REG_CX and s.type == X.X86_OP_IMM and \
                    self.long_shift(i):
                return
            if d.type == X.X86_OP_REG:
                self.setreg(d, self.val(s))
            else:
                self.store(self.memop(d), self.val(s), s)
        elif m == 'push':
            self.stack.append(self.val(ops[0]))
        elif m == 'pop' and ops[0].type == X.X86_OP_REG and self.stack:
            self.setreg(ops[0], self.stack.pop())
        elif m in ('cwd', 'cdq'):     # capstone names 99 'cdq'
            self.R['dx'] = ('sx', self.reg('ax'))
        elif m in ('idiv', 'div') and ops[0].size == 2:
            dx, ax = self.R.get('dx'), self.reg('ax')
            if m == 'idiv' and dx != ('sx', ax):
                raise Unlift('idiv dx')
            if m == 'div' and dx != ('c', 0):
                raise Unlift('div dx')
            u = '' if m == 'idiv' else 'u'
            d = self.val(ops[0])
            self.R['ax'] = ('b', u + '/', ax, d)
            self.R['dx'] = ('b', u + '%', ax, d)
        elif m == 'call':
            self.call(i)
        elif m in ALU:
            d, s = ops
            if d.type == X.X86_OP_REG and d.reg == X.X86_REG_SP:
                raise Unlift('sp adjust')
            same = s.type == X.X86_OP_REG and d.type == X.X86_OP_REG and s.reg == d.reg
            if same and m in ('or', 'and'):
                self.flags = ('test', self.val(d))
                return
            if same and m in ('sub', 'xor'):
                if d.reg == X.X86_REG_AH:
                    self.zero_ah()
                    return
                self.setreg(d, ('c', 0))
                return
            if d.type == X.X86_OP_REG:
                x, y = self.val(d), self.val(s)
                v = ('b', ALU[m], x, y)
                self.setreg(d, v)
                self.flags = ('soft', v)     # usable by a jcc, but needn't be consumed
                self.carry = (R16.get(d.reg), ALU[m], x, y, a + i.size)
            else:
                self.emit('cas', lv=self.memop(d), op=ALU[m], rv=self.val(s))
                self.carry = (None, ALU[m], None, None, a + i.size)
        elif m in ('adc', 'sbb'):
            self.long_carry(i)
        elif m in ('inc', 'dec'):
            d = ops[0]
            op = '+' if m == 'inc' else '-'
            if d.type == X.X86_OP_REG:
                n = R16.get(d.reg)
                if n in self.regvars:
                    self.emit('inc', lv=('v', 'r', n, 2), op=op)
                else:
                    v = add_const(self.val(d), 1 if op == '+' else -1)
                    self.setreg(d, v)
                    self.flags = ('soft', v)
            else:
                self.emit('inc', lv=self.memop(d), op=op)
        elif m == 'cmp':
            if self.long_cmp(i):
                return
            self.flags = ('cmp', self.val(ops[0]), self.val(ops[1]))
        elif m == 'test':
            a, b = ops
            if a.type == X.X86_OP_REG and b.type == X.X86_OP_REG and a.reg == b.reg:
                self.flags = ('test', self.val(a))
            else:
                self.flags = ('test', ('b', '&', self.val(a), self.val(b)))
        elif m in JCC:
            self.branch(i)
        elif m == 'jmp':
            if ops[0].type != X.X86_OP_IMM:
                raise Unlift('indirect jmp')
            self.jump(ops[0].imm & 0xffff)
        elif m in ('shl', 'sar', 'shr'):
            d, s = ops
            if d.type != X.X86_OP_REG:
                raise Unlift('shift mem')
            if s.type == X.X86_OP_REG:
                n = self.reg('cx')
            else:
                n = ('c', s.imm)
            op = {'shl': '<<', 'sar': '>>', 'shr': 'u>>'}[m]
            v = self.val(d)
            if v[0] == 'b' and v[1] == op and v[3][0] == 'c' and n[0] == 'c':
                v, n = v[2], ('c', v[3][1] + n[1])
            self.setreg(d, ('b', op, v, n))
        elif m == 'imul' and len(ops) == 1 and ops[0].size == 2:
            self.R['ax'] = ('b', '*', self.reg('ax'), self.val(ops[0]))
            self.R.pop('dx', None)
        elif m in ('cbw', 'cwde'):     # capstone names 98 'cwde' in 16-bit mode
            v = self.reg('ax')
            if size_of(v) != 1:
                raise Unlift('cbw on word')
            self.R['ax'] = ('x', True, v)
        elif m in ('neg', 'not') and ops[0].type == X.X86_OP_REG:
            self.setreg(ops[0], ('u', '-' if m == 'neg' else '~', self.val(ops[0])))
        elif m == 'lea':
            v = self.memop(ops[1])
            if not is_var(v):
                raise Unlift('lea complex')
            self.setreg(ops[0], ('&', v))
        elif m == 'xchg' and {o.reg for o in ops if o.type == X.X86_OP_REG} == {X.X86_REG_AL, X.X86_REG_AH}:
            nxt = self.f.seen.get(a + i.size)       # xchg al,ah; sub al,al: x << 8
            if nxt is None or bytes(nxt.bytes) not in (b'\x2a\xc0', b'\x28\xc0', b'\x32\xc0', b'\x30\xc0') or \
                    nxt.address in self.targets:
                raise Unlift('insn xchg')
            self.R['ax'] = ('b', '<<', self.reg('ax'), ('c', 8))
            self.flags = None
            self.cur = nxt
            self.skip = nxt.address
        else:
            raise Unlift('insn ' + m)

    def zero_ah(self):
        v = self.reg('ax')
        if size_of(v) != 1:         # a word cut to its low byte: (unsigned char)(expr)
            v = ('lo', v)
        self.R['ax'] = ('x', False, v)

    def store(self, lv, rv, src=None):
        if lv[0] == 'v' and lv[1] == 'r':
            raise Unlift('regvar mem')
        # mov [X+2],dx; mov [X],ax: one long store
        r = R16.get(src.reg) if src is not None and src.type == X.X86_OP_REG else None
        p = self.sts[-1] if self.sts else None
        if r and p is not None and p.kind == 'asg' and p.e == self.st_start and \
                getattr(p, 'src', None) not in (None, r):
            L, E = pair(lv, p.lv), pair(rv, p.rv)
            if L is not None and E is not None:
                self.sts.pop()
                self.st_start = p.s
                self.emit('asg', lv=L, rv=E)
                for k, v in self.R.items():      # the pair now holds the two stored words
                    if v == ('L0', E) or v == rv and rv[0] != 'c':
                        self.R[k] = lv
                    elif v in (('L1', E), p.lv) or v == p.rv and p.rv[0] != 'c':
                        self.R[k] = p.lv
                return
        self.emit('asg', lv=lv, rv=rv).src = r

    def long_carry(self, i):
        """adc/sbb finishing the long add/sub the previous instruction started."""
        d, s = i.operands
        c = self.carry
        op = '+' if i.mnemonic == 'adc' else '-'
        if c is None or c[4] != i.address or c[1] != op:
            raise Unlift('insn ' + i.mnemonic)
        if d.type == X.X86_OP_REG:
            hi = R16.get(d.reg)
            E1, E2 = pair(c[2], self.val(d)), pair(c[3], self.val(s))
            if None in (c[0], hi, E1, E2) or hi in self.regvars or c[0] in self.regvars:
                raise Unlift('long ' + i.mnemonic)
            E = ('b', op, E1, E2)
            self.R[c[0]], self.R[hi] = ('L0', E), ('L1', E)
            self.flags = None
            return
        p = self.sts[-1] if self.sts else None
        if c[0] is not None or p is None or p.kind != 'cas' or p.e != self.st_start:
            raise Unlift('long ' + i.mnemonic)
        L, E2 = pair(p.lv, self.memop(d)), pair(p.rv, self.val(s))
        if L is None or E2 is None:
            raise Unlift('long ' + i.mnemonic)
        self.sts.pop()
        self.st_start = p.s
        self.emit('cas', lv=L, op=op, rv=E2)

    def long_shift(self, i):
        """mov cx,N; L: shl lo,1; rcl hi,1; loop L (or sar/shr hi,1; rcr lo,1): a long shift."""
        get = self.f.seen.get
        x1 = get(i.address + i.size)
        x2 = x1 and get(x1.address + x1.size)
        x3 = x2 and get(x2.address + x2.size)
        if x3 is None or x3.mnemonic != 'loop' or (x3.operands[0].imm & 0xffff) != x1.address or \
                self.tcount.get(x1.address) != 1:
            return False
        op = {('shl', 'rcl'): '<<', ('sar', 'rcr'): '>>', ('shr', 'rcr'): 'u>>'}.get((x1.mnemonic, x2.mnemonic))
        if op is None or any(len(x.operands) != 2 or x.operands[0].type != X.X86_OP_REG or
                             x.operands[1].type != X.X86_OP_IMM or x.operands[1].imm != 1 for x in (x1, x2)):
            return False
        r1, r2 = R16.get(x1.operands[0].reg), R16.get(x2.operands[0].reg)
        lo, hi = (r1, r2) if op == '<<' else (r2, r1)
        if lo not in self.R or hi not in self.R or lo in self.regvars or hi in self.regvars:
            return False
        E = pair(self.R[lo], self.R[hi])
        if E is None:
            return False
        E = ('b', op, E, ('c', i.operands[1].imm & 0xffff))
        self.R[lo], self.R[hi], self.R['cx'] = ('L0', E), ('L1', E), ('c', 0)
        self.flags = None
        self.cur = x3
        self.skip_to = x3.address + x3.size
        self.nolabel.add(x1.address)
        return True

    def long_cmp(self, i):
        """A long compare chain starting at i: emits its 'if' and returns True.
        ==, !=:  cmp H; jne X; cmp L; X: je/jne T
        <, >..:  cmp H; jS F; jne T; cmp L; jU T; F:"""
        get = self.f.seen.get

        def nx(x):
            return x and get(x.address + x.size)

        def tg(x):
            return x.operands[0].imm & 0xffff
        j1 = nx(i)
        j2 = nx(j1)
        j3 = nx(j2)
        if j3 is None or j1.mnemonic not in JCC:
            return False
        if j1.mnemonic == 'jne' and j2.mnemonic == 'cmp' and j3.mnemonic in ('je', 'jne') and \
                tg(j1) == j3.address and self.tcount.get(j3.address) == 1:
            c, last, t, f, n = j2, j3, tg(j3), j3.address, 1
            op = JCC[j3.mnemonic]
        else:
            j4 = nx(j3)
            if j4 is None or j2.mnemonic != 'jne' or j3.mnemonic != 'cmp' or \
                    j4.mnemonic not in ('ja', 'jae', 'jb', 'jbe'):
                return False
            f, t = j4.address + j4.size, tg(j2)
            if tg(j1) != f or tg(j4) != t or self.tcount.get(f) != 1:
                return False
            up = j4.mnemonic in ('ja', 'jae')        # true when the high word is greater
            if j1.mnemonic == ('jl' if up else 'jg'):
                op = JCC[j4.mnemonic][1:]
            elif j1.mnemonic == ('jb' if up else 'ja'):
                op = JCC[j4.mnemonic]
            else:
                return False
            c, last, n = j3, j4, 2
        a = pair(self.val(c.operands[0]), self.val(i.operands[0]))
        b = pair(self.val(c.operands[1]), self.val(i.operands[1]))
        if a is None or b is None:
            return False
        if self.stack:
            raise Unlift('branch with pushes')
        self.cur = last
        self.flags = None
        jm = get(f) if n == 2 else None
        if jm is not None and jm.mnemonic == 'jmp' and jm.operands[0].type == X.X86_OP_IMM and \
                t == jm.address + jm.size and self.tcount.get(t) == 2:
            # the false path is 'jmp J' and the true one falls past it: if (!c) goto J
            j = tg(jm)
            self.cur = jm
            self.emit('if', cond=negate((op, a, b)), target=j)
            self.out.setdefault(j, []).append(dict(self.R))
            self.nolabel |= {f, t}
            self.skip_to = t
            return True
        self.emit('if', cond=(op, a, b), target=t)
        self.out.setdefault(t, []).extend(dict(self.R) for _ in range(n))
        self.nolabel.add(f)
        self.skip_to = last.address + last.size
        return True

    def call(self, i):
        op = i.operands[0]
        if op.type != X.X86_OP_IMM:
            raise Unlift('indirect call')
        t = op.imm & 0xffff
        fn = self.names(t)
        if fn is None:
            raise Unlift('call target %04x' % t)
        if fn in LONG_HELPERS:        # dx:ax op bx:cx -> dx:ax
            E1, E2 = pair(self.reg('ax'), self.reg('dx')), pair(self.reg('cx'), self.reg('bx'))
            if E1 is None or E2 is None:
                raise Unlift('long helper')
            E = ('b', LONG_HELPERS[fn], E1, E2)
            self.R = {'ax': ('L0', E), 'dx': ('L1', E)}
            return
        nxt = self.f.seen.get(i.address + i.size)
        n = 0
        if nxt is not None:
            b = bytes(nxt.bytes)
            if b == b'\x59':
                n = 1
            elif b[:2] == b'\x83\xc4' and len(b) == 3:
                n = b[2] // 2
            if n:
                self.skip = nxt.address
                self.cur = nxt
        if n > len(self.stack):
            raise Unlift('args')
        args = list(reversed(self.stack[len(self.stack) - n:]))
        k = 0
        while k + 1 < len(args):      # a long argument: push dx; push ax
            E = pair(args[k], args[k + 1])
            if E is not None and (args[k][0] == 'L0' or E[0] == 'L'):
                args[k:k + 2] = [E]
            k += 1
        del self.stack[len(self.stack) - n:]
        # pushes still pending: this call is an argument of a later one (f(a, g(x)))
        self.R = {}
        self.R['ax'] = ('call', fn[:-1] if fn.endswith('_') else fn, args, i.address)
        self.side = 'ax'

    def condition(self, m):
        op = JCC[m]
        fl = self.flags
        if fl is None:
            raise Unlift('no flags')
        if fl[0] == 'cmp':
            return (op, fl[1], fl[2])
        if op[0] == 'u':           # result vs 0 by sign only; carry tests have no C form here
            raise Unlift('signed test')
        return (op, fl[1], ('c', 0))

    def arm(self, a, end, t=None, conds=None):
        """Value of ax after the register-only instructions [a, end), or None; state is kept.
        With conds: jcc to t inside are allowed and their conditions appended."""
        save = (dict(self.R), list(self.stack), self.flags, self.side, len(self.sts), dict(self.pend),
                self.st_start, self.cur, self.skip, self.skip_to, set(self.nolabel), self.carry,
                {k: list(v) for k, v in self.out.items()})
        v = None
        outer, self.absorb = getattr(self, 'absorb', None), {'n': {}, 'nl': set()}
        stk = getattr(self, 'arm_stack', [])
        self.arm_stack = stk + [(t, conds if conds is not None else [])]
        try:
            p = a
            while p < end:
                i = self.f.seen.get(p)
                if i is None or (p != a and p in self.targets):
                    break
                if conds is not None and i.mnemonic in JCC and (i.operands[0].imm & 0xffff) == t:
                    conds.append(self.condition(i.mnemonic))
                    self.armvals.append(self.R.get('ax'))
                    self.flags = None
                    p += i.size
                    continue
                if i.mnemonic in JCC and len(self.arm_stack) < 4:
                    # a nested ternary or boolean chain inside the arm
                    av, tg = self.armvals, i.operands[0].imm & 0xffff
                    c2 = self.condition(i.mnemonic)
                    self.cur = i
                    ok = self.boolchain(i, c2, tg) or self.ternary(i, c2, tg)
                    self.armvals = av
                    if not ok:
                        break
                    p = self.skip_to
                    continue
                if i.group(X.X86_GRP_JUMP) or i.mnemonic in BRANCH or \
                        i.mnemonic in ('call', 'ret', 'push', 'pop'):
                    break
                self.cur = i
                self.step(i)
                p += i.size
            else:
                if p == end and len(self.sts) == save[4] and len(self.stack) == len(save[1]) and \
                        self.pend == save[5] and \
                        self.side is None:
                    v = self.R.get('ax')
        except Unlift:
            v = None
        (R, stack, self.flags, self.side, n, pend, self.st_start, self.cur, self.skip, self.skip_to,
         self.nolabel, self.carry, self.out) = save
        self.R, self.stack, self.pend = R, stack, pend
        del self.sts[n:]
        self.got = self.absorb if v is not None else {'n': {}, 'nl': set()}
        self.absorb, self.arm_stack = outer, stk
        return v

    def note(self, n, nl):
        """Jumps (target -> count) and labels a ternary absorbed; an enclosing arm owns them too."""
        a = getattr(self, 'absorb', None)
        if a is not None:
            for k, x in n.items():
                a['n'][k] = a['n'].get(k, 0) + x
            a['nl'] |= nl

    def pending(self, x):
        """Jumps to x from enclosing arms' conditions, not yet absorbed."""
        return sum(len(c) for tt, c in getattr(self, 'arm_stack', []) if tt == x)

    def ternary(self, i, c, t):
        """ax = c ? A : B, the two shapes cgen uses (c may be a chain of jcc to the same T);
        True if absorbed."""
        nxt = i.address + i.size
        if t <= nxt or self.side is not None:
            return False
        cur = self.cur

        def cond(conds):
            if len(conds) == 1:
                return c
            # all jumps go to T: T is taken when any holds; print it as the && of the negations
            return negate(('||', c) + tuple(conds[1:]))
        # mov ax,A; cmp; jcc T [; cmp; jcc T]...; <ax = B>; T:
        if 'ax' in self.R:
            conds = [c]
            self.armvals = [self.R['ax']]
            b = self.arm(nxt, t, t, conds)
            g = self.got
            if b is not None and self.tcount.get(t) == len(conds) + g['n'].get(t, 0) + self.pending(t):
                # cgen loads the else value first and skips the then value when cond fails;
                # ax reloaded between jumps is a nested ternary in the then arm
                vals, groups = self.armvals, []
                for k, cc in enumerate(conds):
                    if k and vals[k] == vals[k - 1]:
                        groups[-1][1].append(cc)
                    else:
                        groups.append((vals[k], [cc]))
                if any(v is None for v, _ in groups):
                    return False
                for v, cs in reversed(groups):
                    if len(cs) == 1:
                        b = ('?', negate(cs[0]), b, v, 'load')
                    else:
                        b = ('?', negate(('||',) + tuple(cs)), b, v)
                self.R['ax'] = b
                self.flags, self.skip_to = None, t
                n = dict(g['n'])
                n[t] = n.get(t, 0) + len(conds)
                self.nolabel |= g['nl'] | {t}
                self.note(n, g['nl'] | {t})
                return True
        # jcc T [; cmp; jcc T]...; <ax = B>; jmp J; T: <ax = A>; J:
        p = nxt
        while p < t:
            x = self.f.seen.get(p)
            if x is None:
                return False
            if p + x.size == t:
                break
            p += x.size
        else:
            return False
        if x.mnemonic != 'jmp' or x.operands[0].type != X.X86_OP_IMM:
            return False
        j = x.operands[0].imm & 0xffff
        if j <= t:
            return False
        conds = [c]
        self.armvals = [self.R.get('ax')]
        b = self.arm(nxt, p, t, conds)
        gb = self.got
        if b is None:
            return False
        a = self.arm(t, j)
        ga = self.got
        if a is None:
            return False
        n = dict(gb['n'])
        for k, x in ga['n'].items():
            n[k] = n.get(k, 0) + x
        if self.tcount.get(t) != len(conds) + n.get(t, 0) + self.pending(t) or \
                self.tcount.get(j) != 1 + n.get(j, 0) + self.pending(j):
            return False
        n[t] = n.get(t, 0) + len(conds)
        n[j] = n.get(j, 0) + 1
        self.cur = cur
        k = negate(c) if len(conds) == 1 else cond(conds)
        self.R['ax'] = ('?', k, b, a)
        self.flags, self.skip_to = None, j
        nl = gb['nl'] | ga['nl'] | {t, j}
        self.nolabel |= nl
        self.note(n, nl)
        return True

    def boolchain(self, i, c, t):
        """ax = (a || b && ...) ? A : B: a short-circuit chain of tests ending in
        T: mov ax,A; jmp J; F: mov ax,B; J:. True if absorbed."""
        get = self.f.seen.get

        def movax(x):
            return x is not None and x.mnemonic == 'mov' and len(x.operands) == 2 and \
                x.operands[0].type == X.X86_OP_REG and x.operands[0].reg == X.X86_REG_AX and \
                x.operands[1].type == X.X86_OP_IMM
        save = (dict(self.R), self.flags, len(self.sts), dict(self.pend), self.cur,
                list(self.stack), self.side, self.st_start, self.carry, {k: list(v) for k, v in self.out.items()})
        tests = [(c, t, i.address + i.size)]        # (cond, target, start of the next test)
        p, T = i.address + i.size, None
        try:
            for _ in range(40):
                x = get(p)
                if x is None:
                    break
                y = get(p + x.size)
                if movax(x) and y is not None and y.mnemonic == 'jmp' and y.operands[0].type == X.X86_OP_IMM:
                    z = get(y.address + y.size)
                    if movax(z) and (y.operands[0].imm & 0xffff) == z.address + z.size:
                        T = p
                        break
                if x.mnemonic in JCC:
                    tests.append((self.condition(x.mnemonic), x.operands[0].imm & 0xffff, p + x.size))
                    self.flags = None
                elif x.group(X.X86_GRP_JUMP) or x.mnemonic in BRANCH or \
                        x.mnemonic in ('call', 'ret', 'push', 'pop') or p in self.targets and \
                        p not in [s for _, _, s in tests]:
                    break
                else:
                    self.cur = x
                    self.step(x)
                p += x.size
        except Unlift:
            T = None
        ok = T is not None and len(tests) > 1 and len(self.sts) == save[2] and self.pend == save[3]
        self.R, self.flags, _, self.pend, self.cur = dict(save[0]), save[1], None, save[3], save[4]
        self.stack, self.side, self.st_start, self.carry, self.out = save[5:]
        del self.sts[save[2]:]
        if not ok:
            return False
        y = get(T + get(T).size)
        F, J = y.address + y.size, y.operands[0].imm & 0xffff
        starts = {s: k + 1 for k, (_, _, s) in enumerate(tests[:-1])}
        hits = {}
        for _, tg, _ in tests:
            if tg not in starts and tg not in (T, F):
                return False
            hits[tg] = hits.get(tg, 0) + 1
        if any(self.tcount.get(a, 0) != n for a, n in hits.items()) or self.tcount.get(J) != 1 or \
                F not in hits or any(s in self.targets and s not in hits for s in starts):
            return False
        TRUE, FALSE = ('true',), ('false',)

        def j(op, a, b):
            if a == (TRUE if op == '||' else FALSE):
                return a
            if a == (FALSE if op == '||' else TRUE):
                return b
            if b == (FALSE if op == '||' else TRUE):
                return a
            if b == (TRUE if op == '||' else FALSE):
                return None             # x || true: not a value C writes
            return (op,) + (a[1:] if a[0] == op else (a,)) + (b[1:] if b[0] == op else (b,))

        def at(tg):
            return TRUE if tg == T else FALSE if tg == F else E(starts[tg])

        def E(k):
            if k == len(tests):
                return TRUE              # the last test falls into T
            cc, tg, _ = tests[k]
            a, b = at(tg), E(k + 1)
            if None in (a, b):
                return None
            if a == TRUE:
                return j('||', cc, b)
            if a == FALSE:
                return j('&&', negate(cc), b)
            # c ? a : (d || a) -> (!c && d) || a;  c ? a : (d && a) -> (c || d) && a
            if b[0] == '||' and b[-1] == a:
                return j('||', j('&&', negate(cc), b[1] if len(b) == 3 else ('||',) + b[1:-1]), a)
            if b[0] == '&&' and b[-1] == a:
                return j('&&', j('||', cc, b[1] if len(b) == 3 else ('&&',) + b[1:-1]), a)
            return None
        e = E(0)
        if e is None or e in (TRUE, FALSE):
            return False
        A, B = self.val(get(T).operands[1]), self.val(get(y.address + y.size).operands[1])
        self.R = dict(save[0])
        # the tests' register loads (mov ax,x; cmp ax,..) are part of the expression
        self.R['ax'] = ('?', e, A, B)
        self.flags, self.skip_to = None, J
        self.nolabel |= set(starts) | {T, F, J}
        hits[J] = 1
        self.note(hits, set(starts) | {T, F, J})
        return True

    def branch(self, i):
        t = i.operands[0].imm & 0xffff
        c = self.condition(i.mnemonic)
        if self.boolchain(i, c, t):
            return
        if self.ternary(i, c, t):
            return
        if self.stack:
            raise Unlift('branch with pushes')
        self.flags = None
        # inverted long branch: jcc over a near jmp to the real target
        nxt = self.f.seen.get(i.address + i.size)
        if nxt is not None and nxt.bytes[0] == 0xe9 and t == nxt.address + nxt.size and \
                nxt.address not in self.targets:
            from_neg = {'==': '!=', '!=': '==', '<': '>=', '>=': '<', '<=': '>', '>': '<=',
                        'u<': 'u>=', 'u>=': 'u<', 'u<=': 'u>', 'u>': 'u<='}
            self.cur = nxt
            self.skip = nxt.address
            c = (from_neg[c[0]], c[1], c[2])
            t = nxt.operands[0].imm & 0xffff
        self.emit('if', cond=c, target=t)
        if t != (i.operands[0].imm & 0xffff):       # long form: the jcc lands right after the jmp
            self.out.setdefault(i.operands[0].imm & 0xffff, []).append(dict(self.R))
        self.out.setdefault(t, []).append(dict(self.R))

    def jump(self, t):
        if self.stack:
            raise Unlift('jmp with pushes')
        if t in self.switches and 'ax' in self.R and self.st_start < self.cur.address:
            self.emit('switch', x=self.R['ax'], sw=self.switches[t])
        elif self.f.epi is not None and t == self.f.epi:
            rv = self.R.get('ax') if self.st_start < self.cur.address and 'ax' in self.R else None
            self.emit('ret', rv=rv)
        else:
            self.emit('goto', target=t)
        if t not in self.switches:
            self.out.setdefault(t, []).append(dict(self.R))
        self.R, self.dead = {}, True

    def find_switches(self):
        """Switch dispatches: D -> dict(cases=[(value, target)], default, start, end)."""
        f = self.f
        self.switches, self.cons = {}, {}
        for a in f.addrs:
            i = f.seen[a]
            if i.mnemonic == 'jmp' and i.operands[0].type == X.X86_OP_IMM:
                d = i.operands[0].imm & 0xffff
                if d not in self.switches:
                    sw = self.dispatch(d)
                    if sw:
                        self.switches[d] = sw
                        self.cons[sw['start']] = sw['end']

    def dispatch(self, d):
        f = self.f
        get = f.seen.get
        i = get(d)
        if i is None:
            return None
        cases = []
        p = d
        # jump table: [sub ax,K] cmp ax,N; jae X; xchg ax,bx; shl bx,1; jmp cs:[bx+T]
        seq = []
        q = p
        for _ in range(6):
            x = get(q)
            if x is None:
                break
            seq.append(x)
            q += x.size
        k0 = 0
        if seq and seq[0].mnemonic in ('sub', 'add') and seq[0].operands[0].reg == X.X86_REG_AX and \
                seq[0].operands[1].type == X.X86_OP_IMM:
            v = seq[0].operands[1].imm & 0xffff
            k0 = v if seq[0].mnemonic == 'sub' else (-v) & 0xffff
            seq = seq[1:]
        ms = [x.mnemonic for x in seq[:5]]
        if ms == ['cmp', 'jae', 'xchg', 'shl', 'jmp'] and seq[0].operands[0].reg == X.X86_REG_AX:
            n = seq[0].operands[1].imm & 0xffff
            jt = seq[4]
            if jt.operands[0].type != X.X86_OP_MEM:
                return None
            tbl = jt.operands[0].mem.disp & 0xffff
            end = jt.address + jt.size
            xt = seq[1].operands[0].imm & 0xffff
            if xt != end:
                return None
            # a default case is a stub 'jmp DEFAULT' right after the dispatch, back into the bodies
            default = None
            stub = get(end)
            if stub is not None and stub.mnemonic == 'jmp' and stub.operands[0].type == X.X86_OP_IMM and \
                    (stub.operands[0].imm & 0xffff) < tbl:
                default = stub.operands[0].imm & 0xffff
                end += stub.size
            img = self.img
            tg = [img.code[tbl - img.cbase + 2 * k] | img.code[tbl - img.cbase + 2 * k + 1] << 8
                  for k in range(n)]
            skip = (end, default, jt.address + jt.size)
            cases = [((k + k0) & 0xffff, t) for k, t in enumerate(tg) if t not in skip]
            start = tbl if tbl + 2 * n == d else d
            if start != tbl:
                return None
            return dict(cases=cases, default=default, start=start, end=end, kind='table', n=n, k0=k0)
        # compare chain: (cmp ax,K; je L | cmp ax,K; jne +3; jmp L)* [jmp DEFAULT]
        while True:
            c = get(p)
            if c is None or c.mnemonic != 'cmp' or c.operands[0].type != X.X86_OP_REG or \
                    c.operands[0].reg != X.X86_REG_AX or c.operands[1].type != X.X86_OP_IMM:
                break
            j = get(p + c.size)
            if j is None:
                break
            v = c.operands[1].imm & 0xffff
            if j.mnemonic == 'je':
                cases.append((v, j.operands[0].imm & 0xffff))
                p = j.address + j.size
            elif j.mnemonic == 'jne' and (j.operands[0].imm & 0xffff) == j.address + j.size + 3:
                k = get(j.address + j.size)
                if k is None or k.bytes[0] != 0xe9:
                    break
                cases.append((v, k.operands[0].imm & 0xffff))
                p = k.address + k.size
            else:
                break
        if not cases:
            return None
        default = None
        x = get(p)
        if x is not None and x.mnemonic == 'jmp' and x.operands[0].type == X.X86_OP_IMM and \
                (x.operands[0].imm & 0xffff) < d:
            default = x.operands[0].imm & 0xffff
            p += x.size
        return dict(cases=cases, default=default, start=d, end=p, kind='chain')

    # ---- after the walk
    def post(self):
        sts = []
        dead_sw = set()
        for st in self.sts:          # a switch and its end are demoted together
            if st.kind in ('switch', 'endsw') and any(st.s <= d < st.e for d in self.demote):
                dead_sw.add(st.sw['start'] if st.kind == 'switch' else st.s)
        for st in self.sts:
            if st.kind != 'raw' and any(st.s <= d < st.e for d in self.demote):
                st = St('raw', st.s, st.e, why='demoted')
            elif st.kind == 'switch' and st.sw['start'] in dead_sw or st.kind == 'endsw' and st.s in dead_sw:
                st = St('raw', st.s, st.e, why='switch demoted')
            if st.kind == 'raw' and sts and sts[-1].kind == 'raw' and sts[-1].e == st.s and \
                    st.s not in self.targets:
                sts[-1].e = st.e
                continue
            sts.append(st)
        self.sts = sts
        return sts


def size_of(e):
    if e[0] in ('v', 'm'):
        return e[-1]
    if e[0] == 'lo':
        return 1
    if e[0] == 'la':
        return e[2]
    if e[0] in ('L', 'U', 'cl'):
        return 4
    if e[0] == 'b' and 4 in (size_of(e[2]), size_of(e[3])):
        return 4
    return 2
