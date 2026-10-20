"""Compile/compare loop for the lifter.

usage: liftloop.py IMAGE [ADDR...]     (hex addresses; default: every function)
Lifts functions to work/lift/IMAGE/fXXXX.c, compiles them with Aztec cc in DOSBox-X, compares
each object with the original bytes, demotes the statements behind compile errors or byte
mismatches to #asm, and repeats until nothing changes. State: work/lift/IMAGE/state.json
({addr: {status, demote, raw, stmts}}); status ok = matches (raw = #asm statements left),
asm = keep the skeleton.
"""
import difflib, json, os, re, subprocess, sys
sys.path.insert(0, os.path.dirname(__file__))
os.environ['WIZ6_NAMES'] = '0'   # lift with address names; render.py applies names/*.json
import capstone as cs
from x86dis import Image
from lift import Lifter
import structret
from cprint import Printer, st_targets
from aztobj import Obj
import cmpobj
import skel

R = os.path.join(os.path.dirname(__file__), '..')
_md = cs.Cs(cs.CS_ARCH_X86, cs.CS_MODE_16)
_md.skipdata = True       # jump tables mid-function must not end the listing


def keys(code, org):
    out = []
    for i in _md.disasm(bytes(code), org):
        op = i.op_str
        if i.mnemonic.startswith('j') or i.mnemonic in ('call', 'loop'):
            op = re.sub(r'0x[0-9a-f]+', 'T', op)
        out.append((i.address, i.size, i.mnemonic + ' ' + op))
    return out


class Loop:
    def __init__(self, iname):
        self.img = Image(iname)
        self.names = skel.Names(self.img)
        self.dir = R + '/work/lift/' + iname
        os.makedirs(self.dir, exist_ok=True)
        self.sp = self.dir + '/state.json'
        self.state = json.load(open(self.sp)) if os.path.exists(self.sp) else {}
        self.ranges = dict(self.img.ranges())

    def save(self):
        json.dump(self.state, open(self.sp, 'w'), indent=0, sort_keys=True)

    def st(self, s):
        return self.state.setdefault('%04x' % s, {'status': 'new', 'demote': []})

    def lift(self, s):
        """Write the C for s; returns (printer, lifter, line->statement) or None (stays asm)."""
        e = self.ranges[s]
        st = self.st(s)
        head = keys(self.img.code[s - self.img.cbase:min(e, s + 16) - self.img.cbase], s)[:6]
        if any(k[2] in ('push ds', 'push es') for k in head):
            st['status'], st['why'] = 'asm', 'handwritten'
            return None
        b = structret.buffer(self.img, s, e)
        if b is not None:       # returns a struct through the module's own bss: fixed C
            open('%s/f%04x.c' % (self.dir, s), 'wb').write(
                ('\r\n'.join(structret.source(self.img.fname(s))) + '\r\n').encode('latin1'))
            st.update(status='ok', raw=0, stmts=1, structret=b, sretsize=structret.SIZE)
            return None
        for _ in range(50):
            L = Lifter(self.img, s, e, self.names, st['demote'], st.get('noscratch', False), st.get('nomerge', False),
                       st.get('nobool', []))
            try:
                L.run()
                P = Printer(L, self.names)
                src, missing = P.source()
            except Exception as ex:   # printer/lifter limits
                st['status'], st['why'] = 'asm', 'lift: %s' % ex
                return None
            if not missing:
                break
            for x in L.sts:
                if x.kind in ('if', 'goto', 'switch') and (st_targets(x) & missing):
                    st['demote'].append(x.s)
        else:
            st['status'], st['why'] = 'asm', 'labels'
            return None
        real = [x for x in L.sts if x.kind != 'raw' and not getattr(x, 'epi', False)]
        if not real:
            st['status'], st['why'] = 'asm', 'all raw'
            return None
        lines = P.line_map(src)
        open('%s/f%04x.c' % (self.dir, s), 'wb').write(('\r\n'.join(src) + '\r\n').encode('latin1'))
        st['raw'] = sum(1 for x in L.sts if x.kind == 'raw')
        st['stmts'] = len(L.sts)
        return P, L, lines

    def compile(self, addrs):
        """Compile; a hanging cc marks that file 'hang' and the rest is recompiled."""
        out, names = {}, ['f%04x' % a for a in addrs]
        while names:
            with open(self.dir + '/COMP.BAT', 'wb') as f:
                for n in names:
                    f.write(('del %s.o\r\necho @@ %s >> log.txt\r\ncc -n -L500 %s.c >> log.txt\r\n' % (n, n, n)).encode())
                f.write(b'echo @@END >> log.txt\r\n')
            if os.path.exists(self.dir + '/LOG.TXT'):
                os.remove(self.dir + '/LOG.TXT')
            env = dict(os.environ, DOSRUN_TIMEOUT=str(30 + len(names)))
            subprocess.run([R + '/tools/dosrun.sh', self.dir, 'call comp.bat'], stdout=subprocess.DEVNULL, env=env)
            cur, done = None, False
            lp = self.dir + '/LOG.TXT'
            for l in (open(lp, encoding='latin1') if os.path.exists(lp) else []):
                l = l.rstrip()
                if l.startswith('@@END'):
                    done = True
                elif l.startswith('@@ '):
                    cur = l[3:].strip()
                    out[cur] = []
                elif cur and ('ERROR' in l or 'error' in l.lower()) and not l.endswith('errors.'):
                    out[cur].append(l)
            if done:
                break
            if cur is None:
                cur = names[0]
            out[cur] = ['hang']
            names = names[names.index(cur) + 1:]
        return out

    @staticmethod
    def unmerge(st, L, dem):
        """Merged && / || conditions and for loops among dem are split again next round instead of demoted."""
        nb = {getattr(x, 'forhead', x.s) for x in L.sts if x.s in dem and
              (getattr(x, 'merged', False) or getattr(x, 'forhead', None) is not None)}
        st.setdefault('nobool', []).extend(sorted(nb))
        return bool(nb)

    @staticmethod
    def unstruct(st, L):
        """A mismatch no statement explains: print every structured if/else and for loop with gotos."""
        nb = {x.forhead for x in L.sts if getattr(x, 'forhead', None) is not None} - set(st.get('nobool', []))
        st.setdefault('nobool', []).extend(sorted(nb))
        return bool(nb)

    def check(self, s, P, L, lines, errs):
        """Returns True if the function changed (needs another round)."""
        st = self.st(s)
        e = self.ranges[s]
        if errs == ['hang']:
            if not st.get('nomerge'):      # retry without || / && chains
                st['nomerge'], st['demote'] = True, []
                return True
            st['status'], st['why'] = 'asm', 'cc hang'
            return False
        if errs:
            dem = set()
            for l in errs:
                m = re.match(r'f[0-9a-f]{4}\.c:(\d+):', l, re.I)
                if m:
                    x = lines.get(int(m.group(1)))
                    if x is not None and x.kind != 'raw':
                        dem.add(x.s)
            if self.unmerge(st, L, dem):
                return True
            dem -= set(st['demote'])
            if not dem and self.unstruct(st, L):
                return True
            if not dem:      # nothing new to demote: no progress possible
                st['status'], st['why'] = 'asm', 'compile: ' + errs[0][:80]
                return False
            st['demote'] += sorted(dem)
            return True
        path = '%s/F%04X.O' % (self.dir, s)
        if not os.path.exists(path):
            st['status'], st['why'] = 'asm', 'no object'
            return False
        o = Obj(open(path, 'rb').read())
        res = cmpobj.compare(o, self.img.name, s)
        ours, mask, orig, diffs = res['code']
        if o.dsize:
            st['status'], st['why'] = 'asm', 'data'
            return False
        if not diffs and len(ours) == e - s:
            st['status'] = 'ok'
            st.pop('why', None)
            st.pop('structret', None)
            if L.sret and any(x.kind == 'ret' and x.rv and x.rv[0] == 'sret' for x in L.sts):
                st['structret'], st['sretsize'] = L.sret[2], 2 * L.sret[1]     # its buffer is our bss
            return False
        # map the mismatch to statements
        ko = keys(self.img.code[s - self.img.cbase:e - self.img.cbase], s)
        ku = keys(ours, s)
        if not st.get('noscratch') and 'push di' in [k[2] for k in ku[:6]] and \
                'push di' not in [k[2] for k in ko[:6]] and 'push si' in [k[2] for k in ko[:6]]:
            # our regvar si needed a copy in di: si was cgen's index temp, reused across a label
            st['noscratch'], st['demote'] = 'lenient', []
            return True
        if not st.get('noscratch') and 'push di' not in [k[2] for k in ku[:6]] and \
                'push di' in [k[2] for k in ko[:6]] and 'si' in L.f.regs and 'si' not in L.f.scratch and \
                L.f._is_scratch('si', True):
            # we kept si alone as a regvar, the original saves both: si is the index temp after all
            st['noscratch'], st['demote'] = 'lenient', []
            return True
        if not st.get('noscratch') and any(r not in L.f.scratch and L.f._is_scratch(r, True) for r in L.f.regs):
            # a regvar that is an index temp kept across a label (a ternary's join): try it as the temp
            st['noscratch'], st['demote'] = 'lenient', []
            return True
        sm = difflib.SequenceMatcher(None, [k[2] for k in ko], [k[2] for k in ku], autojunk=False)
        bad = set()
        for tag, i1, i2, j1, j2 in sm.get_opcodes():
            if tag == 'equal':
                for a, b in zip(ko[i1:i2], ku[j1:j2]):
                    if a[1] != b[1]:
                        bad.add(a[0])
            else:
                if i2 > i1:
                    bad.update(k[0] for k in ko[i1:i2])
                elif i1 < len(ko):
                    bad.add(ko[i1][0])
                else:
                    bad.add(ko[-1][0])
        dem = set()
        for x in L.sts:
            if x.kind != 'raw' and not getattr(x, 'epi', False) and any(x.s <= b < x.e for b in bad):
                dem.add(x.s)
        if self.unmerge(st, L, dem):
            return True
        dem -= set(st['demote'])
        if not dem and self.unstruct(st, L):
            return True
        if not dem and L.f.scratch and not st.get('noscratch'):
            # prologue/epilogue differ: si/di were register variables, not cgen's index temps
            st['noscratch'], st['demote'] = True, []
            return True
        if not dem and not st.get('nomerge'):
            st['nomerge'], st['demote'] = True, []
            return True
        if not dem:
            # mismatch in the prologue/epilogue/declarations
            st['status'], st['why'] = 'asm', 'mismatch outside statements %s' % sorted('%04x' % b for b in bad)[:4]
            return False
        st['demote'] += sorted(dem)
        return True

    def run(self, addrs):
        todo = [a for a in addrs if self.st(a)['status'] in ('new', 'pending')]
        rnd = 0
        while todo:
            rnd += 1
            lifted = {}
            for a in todo:
                r = self.lift(a)
                if r:
                    lifted[a] = r
            if not lifted:
                break
            errs = self.compile(sorted(lifted))
            nxt = []
            for a, (P, L, lines) in lifted.items():
                if self.check(a, P, L, lines, errs.get('f%04x' % a, [])):
                    self.st(a)['status'] = 'pending'
                    nxt.append(a)
            ok = sum(1 for a in addrs if self.st(a)['status'] == 'ok')
            print('round %d: %d lifted, %d ok, %d pending' % (rnd, len(lifted), ok, len(nxt)), flush=True)
            self.save()
            todo = nxt
        self.save()
        self.report(addrs)

    def report(self, addrs):
        ok = [a for a in addrs if self.st(a)['status'] == 'ok']
        full = [a for a in ok if self.st(a).get('raw', 0) == 0]
        print('%s: %d functions, %d ok (%d without asm), %d asm' % (
            self.img.name, len(addrs), len(ok), len(full), len(addrs) - len(ok)))


def main():
    lp = Loop(sys.argv[1])
    addrs = [int(x, 16) for x in sys.argv[2:]] or sorted(lp.ranges)
    lp.run(addrs)


if __name__ == '__main__':
    main()
