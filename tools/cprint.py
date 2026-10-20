"""Print a lifted function (lift.Lifter statements) as Aztec C source."""
import os, sys
sys.path.insert(0, os.path.dirname(__file__))
from lift import sub_exprs, size_of, add_const, negate
import skel, symnames

UNSIGNED = {'u<': '<', 'u>=': '>=', 'u<=': '<=', 'u>': '>'}
CTYPE = {1: 'char', 2: 'int', 4: 'long'}


def vkey(v):
    return (v[1], v[2])

def linear(e):
    """(x, K) if e is K*x built from x with <<, + and -, else None."""
    if e[0] == 'b' and e[1] == '<<' and e[3][0] == 'lo' and e[3][1][0] == 'c':     # shl ax,cl
        e = ('b', '<<', e[2], e[3][1])
    if e[0] == 'b' and e[1] == '<<' and e[3][0] == 'c':
        r = linear(e[2])
        return r and (r[0], r[1] << e[3][1])
    if e[0] == 'b' and e[1] in ('+', '-'):
        a, b = linear(e[2]), linear(e[3])
        if a and b and a[0] == b[0]:
            return (a[0], a[1] + b[1] if e[1] == '+' else a[1] - b[1])
        return (e, 1) if e[2] != e[3] else None
    if e[0] in ('c', 'call'):
        return None
    return (e, 1)       # any other operand (e.g. (a - b)*5) may be what cgen multiplied



def st_exprs(st):
    for k in ('lv', 'rv', 'x', 'dst', 'src'):
        x = getattr(st, k, None)
        if x is not None:
            yield x
    c = getattr(st, 'cond', None)
    if c is not None:
        yield c[1]
        yield c[2]


def st_targets(st):
    """Code addresses a C statement refers to by label."""
    if st.kind in ('if', 'goto'):
        return {st.target}
    if st.kind == 'switch':
        t = {x for v, x in st.sw['cases']}
        if st.sw['default'] is not None:
            t.add(st.sw['default'])
        return t
    return set()


class Types:
    """Per-variable facts gathered from all lifted statements."""

    def __init__(self, sts, img, locals=None):
        self.sizes, self.ptr, self.arr, self.larr = {}, set(), {}, {}
        self.img = img
        addr_arr = set()
        for st in sts:
            for e in st_exprs(st):
                for x in sub_exprs(e):
                    if x[0] == 'v':
                        self.sizes.setdefault(vkey(x), set()).add(x[3])
                    elif x[0] == 'la':
                        self.larr.setdefault(x[1], []).append((x[2], x[3]))
                    elif x[0] == 'm':
                        b = x[1]
                        if self.is_data(x[2]) and (x[2] & 0xffff) >= 0x100:
                            # a big displacement is a global array, not a struct offset
                            self.arr.setdefault(x[2], set()).add(x[3])
                        elif b[0] == 'v':
                            self.ptr.add(vkey(b))
                        elif b[0] == 'b' and b[1] == '+' and b[2][0] == 'v' and b[2][1] != 'g':
                            self.ptr.add(vkey(b[2]))
                        elif self.is_data(x[2]):
                            self.arr.setdefault(x[2], set()).add(x[3])
                    elif x[0] == 'b' and x[1] in ('+', '-'):
                        # &local plus a computed offset: a char array (2-D rows, records)
                        for y, o in ((x[2], x[3]), (x[3], x[2])):
                            if y[0] == '&' and y[1][1] == 'l' and o[0] != 'c':
                                self.larr.setdefault(y[1][2], []).append((1, ('c', 0)))
                                addr_arr.add(y[1][2])
        for w in addr_arr:
            self.sizes.pop(('l', w), None)
        # scalars overlapping each other or an array (struct members, odd word offsets): one
        # char array, each scalar read as a constant index into it
        iv = sorted([(w, w + max(s), ('l', w)) for (k, w), s in self.sizes.items()
                     if k == 'l' and ('l', w) not in self.ptr and w not in self.larr] +
                    [(d, d + 1, None) for d in self.larr])
        clus = set()
        for (a, ae, ka), (b, be, kb) in zip(iv, iv[1:]):
            if ae > b:
                clus |= {x for x in (ka, kb) if x}
        for k in clus:
            for s in self.sizes.pop(k):
                self.larr.setdefault(k[1], []).append((s, ('c', 0)))
        scal = {w for (k, w) in list(self.sizes) + list(self.ptr) if k == 'l' and w not in self.larr}
        # arrays with no scalar between them are one array (cgen folds a constant index into the disp)
        self.arr_alias = {}
        ds = sorted(self.larr)
        # an array 'below the frame' is a lower one indexed with a folded negative constant
        if locals is not None and ds and ds[0] < -locals:
            inside = [d for d in ds if d >= -locals]
            if inside:
                for d in ds:
                    if d < -locals:
                        self.arr_alias[d] = inside[0]
                ds = inside
        for i, d in enumerate(ds):
            if d in self.arr_alias:
                continue
            for d2 in ds[i + 1:]:
                if any(d < o < d2 for o in scal):
                    break
                self.arr_alias[d2] = d
        # a byte read at the high half of a word local
        self.hi_of = {}
        for (k, o), s in self.sizes.items():
            if k == 'l' and s == {1} and 2 in self.sizes.get(('l', o - 1), ()) and o - 1 not in self.larr:
                self.hi_of[o] = o - 1
        # bytes read at an odd param offset: that word param is a struct of two chars
        self.pbytes = {o - 1 for (k, o), s in self.sizes.items() if k == 'p' and o % 2 and s == {1} and
                       self.sizes.get(('p', o - 1), {1}) == {1} and ('p', o - 1) not in self.ptr}
        # a word read at the high half of a long
        self.hi16 = {}
        for (k, o), s in self.sizes.items():
            if k in ('l', 'p') and s == {2} and 4 in self.sizes.get((k, o - 2), ()):
                self.hi16[(k, o)] = o - 2
        # scalars right above a local array, contiguous and of its element size, are its elements
        self.elem_of = {}
        for d in ds:
            if d in self.arr_alias:
                continue
            k = 2 if self.int_arr(d) else 1
            o = max([d] + [x for x, b in self.arr_alias.items() if b == d]) + k
            while o < 0 and o not in self.larr and ('l', o) not in self.ptr and \
                    self.sizes.get(('l', o)) == {k}:
                self.elem_of[o] = (d, (o - d) // k)
                o += k

    def is_data(self, a):
        return 2 <= (a & 0xffff) < self.img.bss[1]

    def int_arr(self, d):
        """The local array at d holds ints: every access is a word at an even index."""
        acc = [(s, i, 0) for s, i in self.larr[d]] + \
              [(s, i, d2 - d) for d2, b in self.arr_alias.items() if b == d for s, i in self.larr[d2]]
        return all(s == 2 and off % 2 == 0 and (i[0] == 'b' and i[1] == '<<' and i[3] == ('c', 1) or
                                                i[0] == 'c' and i[1] % 2 == 0) for s, i, off in acc)

    def ctype(self, k):
        if k in self.ptr:
            return 'char *'
        if 4 in self.sizes.get(k, ()):
            return 'long '
        if self.sizes.get(k, {2}) == {1}:
            return 'char '
        return 'int '


class Printer:
    def __init__(self, lifter, names):
        self.L = lifter
        self.f = lifter.f
        self.img = lifter.img
        self.names = names
        self.T = Types([s for s in lifter.sts if s.kind != 'raw'], self.img, lifter.f.locals)
        self.T.ptr |= {('g', a) for a in getattr(lifter, 'gptr', ())}
        self.T.ptr |= getattr(lifter, 'vptr', set())
        bp = getattr(lifter, 'bptr', [])
        for st in lifter.sts:      # local = base + i straight from cgen's bx: a char * local
            if st.kind == 'asg' and st.lv[0] == 'v' and st.lv[1] == 'l' and st.lv[3] == 2 and \
                    st.rv[0] == 'b' and st.rv[1] == '+' and \
                    (st.rv[2] in bp or st.rv[2][0] == 'b' and st.rv[2][1] == '+' and st.rv[2][2] in bp):
                self.T.ptr.add(vkey(st.lv))
        for st in lifter.sts:      # a struct copy at global + index: that global is an array
            for e in (getattr(st, 'dst', None), getattr(st, 'src', None)) if st.kind == 'scopy' else ():
                if e[0] == 'b' and e[1] == '+' and e[3][0] == 'c' and self.T.is_data(e[3][1]):
                    self.T.arr.setdefault(e[3][1], set()).add(1)
        self.ext_vars = {}
        self.asm_ext = set()
        self.garr0 = {}
        self.lcalls = set()        # callees used as returning a long

    # ---- expressions
    def name(self, v):
        k, w = v[1], v[2]
        if k == 'p':
            return self.ln('p%d' % w)
        if k == 'l':
            return self.ln('l%d' % -w)
        if k == 'r':
            return self.ln('r' + w)
        return self.global_name(w)

    def ln(self, key):
        """Readable name of a param/local/register (pN, lN, rsi) from names/IMG.json."""
        return symnames.local(self.img.name, self.f.s, key)

    def global_name(self, a):
        a &= 0xffff
        n = symnames.data(a)
        if n not in self.ext_vars:
            k = ('g', a)
            s = self.T.arr.get(a)
            es = 1 if s == {1} else 2
            if s and k not in self.T.ptr and self.T.sizes.get(k, set()) <= {es}:
                # an array whose element 0 is also read by name: g[0]
                if k in self.T.sizes:
                    self.garr0[a] = es
                self.ext_vars[n] = 'extern %s%s[];' % ('char ' if es == 1 else 'int ', n)
            elif s and k in self.T.ptr and es == 2 and self.T.sizes.get(k, set()) <= {2}:
                # a pointer table whose element 0 is also used as a base pointer: g[0]
                self.garr0[a] = 2
                self.ext_vars[n] = 'extern char *%s[];' % n
            else:
                self.ext_vars[n] = 'extern %s%s;' % (self.T.ctype(k), n)
        return n

    def declared_size(self, v):
        k = vkey(v)
        if k in self.T.ptr:
            return 2
        s = self.T.sizes.get(k, {2})
        return 4 if 4 in s else 1 if s == {1} else 2

    def var(self, v):
        n = self.name(v)
        sr = self.L.sret
        if sr and v[1] == 'l' and v[3] == 2 and sr[0] <= v[2] < sr[0] + 2 * sr[1] and not (v[2] - sr[0]) & 1:
            return 'sr.w[%d]' % ((v[2] - sr[0]) // 2)
        if v[1] == 'p' and v[3] == 1 and v[2] in self.T.pbytes:
            return '%s.b0' % n
        if v[1] == 'p' and v[3] == 1 and v[2] - 1 in self.T.pbytes:
            return '%s.b1' % self.ln('p%d' % (v[2] - 1))
        if v[1] == 'l' and v[2] in self.T.elem_of:
            return '%s[%d]' % (self.ln('l%d' % -self.T.elem_of[v[2]][0]), self.T.elem_of[v[2]][1])
        if v[1] in ('l', 'p') and vkey(v) in self.T.hi16:
            return '((int *)&%s)[1]' % self.name(('v', v[1], self.T.hi16[vkey(v)], 4))
        if v[1] == 'l' and v[2] in self.T.hi_of:
            return '((char *)&%s)[1]' % self.ln('l%d' % -self.T.hi_of[v[2]])
        if v[1] == 'l' and v[2] in self.T.larr:
            return self.ex(('la', v[2], v[3], ('c', 0)))
        if v[3] != self.declared_size(v):
            return '*(%s *)&%s' % (CTYPE[v[3]], n)
        if v[1] == 'g' and (v[2] & 0xffff) in self.garr0:
            return '%s[0]' % n
        return n

    def loaded_base(self, b, d):
        """b starts with a pointer loaded from memory: a small d (or a bigger one into a record from
        a global pointer table) is a field offset."""
        if b[0] == 'b' and b[1] == '+':
            b = b[2]
        if b[0] != 'm' or b[3] != 2:
            return False
        if (d & 0xffff) < 0x100:
            return True
        # a bigger offset into a record whose pointer comes from a global pointer table (g[i])
        return (d & 0xffff) < 0x400 and self.T.is_data(b[2]) and b[1][0] != 'c'

    def is_ptr_expr(self, e):
        if e[0] == 'v':
            return vkey(e) in self.T.ptr
        if e[0] == 'b' and e[1] == '+':
            return self.is_ptr_expr(e[2])
        return False

    def ptr(self, e):
        """e used as a base address (char *)."""
        if e[0] == 'v':
            return self.var(e) if vkey(e) in self.T.ptr else '(char *)' + self.var(e)
        if e[0] == 'm' and e[3] == 2:
            return '(*(char **)%s)' % self.addr(e)
        if e[0] == 'b' and e[1] == '+' and e[2][0] == 'm' and e[2][3] == 2 and not self.is_ptr_expr(e[2]):
            return '((char *)%s + %s)' % (self.ex(e[2]), self.ex(e[3]))
        if e[0] == 'b' and e[1] == '+' and self.is_ptr_expr(e[2]):
            return '(%s + %s)' % (self.ptr(e[2]), self.ex(e[3]))
        return '(char *)(%s)' % self.ex(e)

    def sdisp(self, d):
        return d - 0x10000 if d & 0x8000 else d

    def addr(self, m):
        """Address of a memory object, as a char * expression."""
        b, d = m[1], m[2]
        if self.T.is_data(d) and not self.is_ptr_expr(b) and not self.loaded_base(b, d):
            return '((char *)%s + %s)' % (self.global_name(d), self.ex(b))
        p, sd = self.ptr(b), self.sdisp(d)
        return '(%s + %d)' % (p, sd) if sd else p

    def saddr(self, e):
        """A struct copy's address: global + index, or any pointer expression."""
        if e[0] == 'b' and e[1] == '+' and e[3][0] == 'c' and self.T.is_data(e[3][1]):
            return self.addr(('m', e[2], e[3][1], 1))
        return self.ptr(e)

    def stores_bx(self, st):
        """The statement's last instruction stores bx (cgen kept the address it built there)."""
        last = max((a for a in self.f.seen if st.s <= a < st.e), default=None)
        i = self.f.seen.get(last)
        return i is not None and i.mnemonic == 'mov' and i.op_str.endswith(', bx')

    def reg_used(self, r):
        """Some lifted statement names the register variable r."""
        v = ('v', 'r', r, 2)
        return any(v in sub_exprs(e) for st in self.L.sts if st.kind != 'raw' for e in st_exprs(st))

    def lvx(self, e):
        """e printed as an assignment target: no comma forms (not an lvalue in C)."""
        self._lv = True
        try:
            return self.ex(e)
        finally:
            self._lv = False

    def mem(self, m):
        b, d, size = m[1], m[2], m[3]
        if b[0] == 'b' and b[1] == '+' and b[3][0] == '=' and b[3][1][0] == 'v' and b[3][1][1] == 'r':
            # p[(rsi = E) ...]: cgen copies an assigned register out first (push di); the comma form
            # (rsi = E, p)[rsi + K] indexes with it directly and is still an lvalue
            r = self.ex(b[3][1])
            if not (self.T.is_data(d) and not self.is_ptr_expr(b) and not self.loaded_base(b, d)):
                p, sd = '((%s = %s, %s) + %s)' % (r, self.ex(b[3][2]), self.ptr(b[2]), r), self.sdisp(d)
                if size == 1:
                    return '%s[%d]' % (p, sd) if sd else '*%s' % p
                return '*(%s *)(%s + %d)' % (CTYPE[size], p, sd) if sd else '*(%s *)%s' % (CTYPE[size], p)
            if not getattr(self, '_lv', False):
                return '(%s = %s, %s)' % (r, self.ex(b[3][2]), self.mem(('m', ('b', '+', b[2], b[3][1]), d, size)))
        if self.T.is_data(d) and not self.is_ptr_expr(b) and not self.loaded_base(b, d):
            g = self.global_name(d)
            if size == 1:
                return '%s[%s]' % (g, self.ex(b))
            if b[0] == 'b' and b[1] == '<<' and b[3] == ('c', 1):
                return '%s[%s]' % (g, self.ex(b[2]))
            return '*(%s *)((char *)%s + %s)' % (CTYPE[size], g, self.ex(b))
        sd, p = self.sdisp(d), self.ptr(b)
        if size == 1:
            return '%s[%d]' % (p, sd) if sd else '*%s' % p
        return '*(%s *)(%s + %d)' % (CTYPE[size], p, sd) if sd else '*(%s *)%s' % (CTYPE[size], p)

    def ex(self, e):
        k = e[0]
        if k == 'c':
            return str(self.sdisp(e[1]))
        if k == 'v':
            return self.var(e)
        if k == 'm':
            return self.mem(e)
        if k == 'b':
            lin = linear(e)
            if lin and lin[1] & (lin[1] - 1) and e[1] != '*':     # cgen's strength-reduced x*K
                return '(%s * %d)' % (self.ex(lin[0]), lin[1])
            if e[1][0] == 'u':
                return '((%s)%s %s %s)' % (self.unsigned(e), self.ex(e[2]), e[1][1:], self.ex(e[3]))
            if e[1] == '+' and e[2] in getattr(self.L, 'mptr', ()):
                return '((char *)%s + %s)' % (self.ex(e[2]), self.ex(e[3]))
            return '(%s %s %s)' % (self.ex(e[2]), e[1], self.ex(e[3]))
        if k == 'lc':           # a call returning a long (dx:ax)
            self.lcalls.add(e[1][1])
            return self.ex(e[1])
        if k == 'pre':          # if (--x > 0): the inc/dec's own flags
            return '%s%s' % ('++' if e[1] == '+' else '--', self.ex(e[2]))
        if k == 'u':
            return '%s%s' % (e[1], self.ex(e[2]))
        if k == 'call':
            if e[1].startswith('$'):
                raise ValueError('helper call ' + e[1])
            return '%s(%s)' % (e[1], ', '.join(self.ex(a) for a in e[2]))
        if k == '&':
            v = e[1]
            if v[1] == 'l' and v[2] in self.T.elem_of:
                return '&' + self.var(v)
            if v[1] == 'l' and v[2] in self.T.larr:
                b = self.T.arr_alias.get(v[2], v[2])
                return self.name(v) if b == v[2] else '((char *)%s + %d)' % (self.ln('l%d' % -b), v[2] - b)
            n = self.name(v)
            return n if v[1] == 'g' and (v[2] & 0xffff) in self.garr0 else '&' + n
        if k == 'la':
            d, size, idx = e[1], e[2], e[3]
            b = self.T.arr_alias.get(d, d)          # an array merged into a lower one
            off, n = d - b, self.ln('l%d' % -b)
            if self.T.int_arr(b):
                i = idx[2] if idx[0] == 'b' else ('c', idx[1] // 2)
                s = '%s[%s]' % (n, self.ex(add_const(i, off // 2)))
                return s if size == 2 else '*(%s *)&%s' % (CTYPE[size], s)
            idx = add_const(idx, off)
            if size == 1:
                return '%s[%s]' % (n, self.ex(idx))
            return '*(%s *)(%s + %s)' % (CTYPE[size], n, self.ex(idx))
        if k == 'sret':         # the local struct the function returns
            return 'sr'
        if k == 'sv':           # a struct a call returned, passed by value
            return self.ex(e[1])
        if k == 'sp':           # the struct at an address, passed by value
            return '*(struct s%d *)%s' % (e[2], self.ptr(e[1]))
        if k == '=':
            return '(%s = %s)' % (self.lvx(e[1]), self.ex(e[2]))
        if k == '?':
            c = e[1]
            if len(e) > 4 and c[0] in ('==', '!=') and c[2] == ('c', 0):
                # '!x ? a : b' compiles to the jcc/jmp shape; 'x == 0 ? a : b' loads b first
                k = '%s %s 0' % (self.ex(c[1]), c[0])
            else:
                k = self.cond(c)
            # an arm loaded with 'mov al, K': a char constant
            arm = lambda x: '(char)%s' % self.ex(x[1]) if x[0] == 'lo' and x[1][0] == 'c' else self.ex(x)
            return '(%s ? %s : %s)' % (k, arm(e[2]), arm(e[3]))
        if k == 'lo':
            return '(char)%s' % self.ex(e[1]) if e[1][0] in ('call', 'b', '?') else self.ex(e[1])
        if k == 'x':
            if not e[1] and e[2][0] == 'lo':
                return '(unsigned char)(%s)' % self.ex(e[2][1])
            return self.ex(e[2]) if e[1] else '(unsigned char)%s' % self.ex(e[2])
        if k == 'L':
            return '(long)%s' % self.ex(e[1])
        if k == 'U':
            return '(long)(unsigned)%s' % self.ex(e[1])
        if k == 'cl':
            return '%dL' % (e[1] - (1 << 32) if e[1] & 0x80000000 else e[1])
        if k == 'L0':
            return '(int)%s' % self.ex(e[1])
        if k == 'L1':
            return '(int)(%s >> 16)' % self.ex(e[1])
        raise ValueError(e)

    def unsigned(self, *es):
        return 'unsigned long' if any(size_of(x) == 4 for x in es) else 'unsigned'

    def byte_k(self, e):
        """A char target: cgen adds in al only with a char-range constant (0xbf is -65)."""
        if e[0] == 'lo':
            return ('lo', self.byte_k(e[1]))
        if e[0] == 'c' and 0x80 <= e[1] <= 0xff:
            return ('c', e[1] | 0xff00)
        if e[0] == 'b' and e[1] in ('+', '-') and e[3][0] == 'c' and 0x80 <= e[3][1] <= 0xff:
            return ('b', e[1], e[2], ('c', e[3][1] | 0xff00))
        return e

    def cond(self, c):
        if c[0] in ('&&', '||'):
            return (' %s ' % c[0]).join('(%s)' % self.cond(x) for x in c[1:])
        op, a, b = c
        if op in UNSIGNED:
            if a[0] == 'm' and a[3] == 1 and b[0] == 'c' and b[1] < 256 and not self.T.is_data(a[2]):
                # a byte through a pointer: compared in memory each time (a cast would load it once)
                return '*(unsigned char *)%s %s %s' % (self.addr(a), UNSIGNED[op], self.ex(b))
            return '(%s)%s %s %s' % (self.unsigned(a, b), self.ex(a), UNSIGNED[op], self.ex(b))
        if b == ('c', 0) and op in ('==', '!='):
            x = self.ex(a)
            return x if op == '!=' else '!' + x
        if size_of(a) == 1 and b[0] == 'c' and 0x80 <= b[1] <= 0xff:
            return '%s %s %d' % (self.ex(a), op, b[1] - 0x100)     # cmp byte,imm: a char vs a negative
        return '%s %s %s' % (self.ex(a), op, self.ex(b))

    # ---- statements
    def stmts(self):
        sts = self.L.sts
        starts = {st.s for st in sts}
        labels, cases, default = set(), {}, {}
        for st in sts:
            if st.kind in ('if', 'goto'):
                labels.add(st.target)
            elif st.kind == 'switch':
                sw = st.sw
                order = sw['cases'] if sw['kind'] == 'chain' else sorted(sw['cases'])
                for v, t in order:
                    cases.setdefault(t, []).append(v)
                if sw['default'] is not None:
                    default[sw['default']] = True
        # code an asm block jumps to: a C label there tells cgen it is reachable (else it would
        # leave out the epilogue after a final goto)
        # (the epilogue too, unless a C return already placed it)
        has_ret = any(st.kind == 'ret' and not getattr(st, 'epi', False) for st in sts)
        for st in sts:
            if st.kind != 'raw':
                continue
            for a, i in self.f.seen.items():
                if st.s <= a < st.e and i.group(1) and i.operands[0].type == 2:
                    t = i.operands[0].imm & 0xffff
                    if t in starts and t >= st.e and (t != self.f.epi or not has_ret):
                        labels.add(t)
        # a final asm block ending in 'jmp T': that jmp is printed as C (goto T, or return for the
        # epilogue), so cgen emits the same jmp and sees the end is unreachable (no jmp of its own)
        self.tail_goto = None
        if sts and sts[-1].kind == 'raw' and sts[-1].e == self.f.e:
            st = sts[-1]
            last = max((x for x in self.f.seen if st.s <= x < st.e), default=None)
            i = self.f.seen.get(last)
            if i is not None and last + i.size == st.e and i.mnemonic == 'jmp' and \
                    i.operands[0].type == 2:
                t = i.operands[0].imm & 0xffff
                if t == self.f.epi or t in starts and not st.s <= t < st.e:
                    self.tail_goto = (last, t)
                    if t != self.f.epi:
                        labels.add(t)
        needed = labels | set(cases) | set(default)
        last_real = max([k for k, st in enumerate(sts) if st.kind not in ('raw',) and
                         not getattr(st, 'epi', False)] + [-1])
        out, owners = [], []
        fell = False           # a 'return x' fell into the epilogue just before
        # a bare return inside a switch that the epilogue directly follows is a break (cgen puts
        # the epilogue at the first return; the original has it after the switch)
        brk, open_sw = set(), []
        for k, st in enumerate(sts):
            if st.kind == 'switch':
                open_sw.append(k)
            elif st.kind == 'endsw' and open_sw:
                k0 = open_sw.pop()
                if k + 1 < len(sts) and getattr(sts[k + 1], 'epi', False) and not open_sw:
                    brk |= {j for j in range(k0 + 1, k) if sts[j].kind == 'ret' and
                            not getattr(sts[j], 'epi', False) and sts[j].rv is None}
        # a bare return before the epilogue is a jump forward to it (cgen puts the epilogue at the
        # first 'return'): goto a label on the epilogue
        epi_k = next((k for k, st in enumerate(sts) if getattr(st, 'epi', False)), None)
        fwd = set()
        if epi_k is not None:
            fwd = {k for k, st in enumerate(sts[:epi_k]) if st.kind == 'ret' and st.rv is None and k not in brk}
            if fwd:
                labels.add(sts[epi_k].s)
        # v = I; L: body; v++; if (v < K) goto L: a for loop. cgen tests it at the bottom, with no
        # initial jmp when constant I and K satisfy the test, else after 'jmp T' (T: the test).
        # It forgets its CSE registers after the loop.
        refs = {}
        for st in sts:
            if st.kind in ('if', 'goto'):
                refs[st.target] = refs.get(st.target, 0) + 1
        fors, forend = {}, {}
        ops = {'<': int.__lt__, '<=': int.__le__, '>': int.__gt__, '>=': int.__ge__, '!=': int.__ne__}
        for j, st in enumerate(sts):
            c = getattr(st, 'cond', None)
            if st.kind != 'if' or j < 3 or c[0] not in ops:
                continue
            if c[1][0] != 'v' and c[2][0] == 'v':     # K > v: the variable on the right
                c = ({'<': '>', '>': '<', '<=': '>=', '>=': '<='}.get(c[0], c[0]), c[2], c[1])
            if c[1][0] != 'v':
                continue
            k = next((x for x in range(j) if sts[x].s == st.target), None)
            if k is None or k < 1 or refs.get(st.target) != 1 or st.target in cases or st.target in default:
                continue
            g = sts[k - 1]
            top = k >= 2 and g.kind == 'goto' and g.target == st.s and refs.get(st.s) == 1
            a, inc = sts[k - 2 if top else k - 1], sts[j - 1]
            if a.kind != 'asg' or a.lv != c[1] or a.s in self.L.nobool or \
                    inc.kind != 'inc' or inc.lv != c[1] or inc.s in labels or inc.s in cases or \
                    inc.s in default or (st.s in labels) != top or st.s in cases or st.s in default or \
                    top and (a.s in cases or a.s in default or g.s in cases or g.s in default) or \
                    top and g.s in labels or \
                    any(x.kind in ('raw', 'switch', 'endsw') for x in sts[k - 1:j + 1]):
                continue
            const = a.rv[0] == 'c' and c[2][0] == 'c' and ops[c[0]](self.sdisp(a.rv[1]), self.sdisp(c[2][1]))
            if const == top:
                continue
            h = k - 2 if top else k - 1
            fors[h] = (st, inc)
            forend[j - 1], forend[j] = False, True
            labels.discard(st.target)
            group = [a, inc, st]
            if top:
                forend[k - 1] = False
                labels.discard(st.s)
                group.append(g)
            for x in group:
                x.forhead = a.s
        # if (c) goto T; A..; [goto J; T: B..;] T/J: is if (!c) { A } [else { B }]: cgen keeps its CSE
        # registers across a structured join but forgets them at a label
        idx = {st.s: k for k, st in enumerate(sts)}
        used = set(fors) | set(forend)
        opens, elses, closes = {}, set(), {}
        # labels an asm block (or the final jmp, or a return) jumps to must stay
        asm_t = {i.operands[0].imm & 0xffff for st in sts if st.kind == 'raw' for a, i in self.f.seen.items()
                 if st.s <= a < st.e and i.group(1) and i.operands[0].type == 2}
        asm_t |= {self.tail_goto[1]} if self.tail_goto else set()
        asm_t |= {sts[epi_k].s} if fwd else set()

        ends = {}       # a structured if (or its else goto) -> where its block closes

        def plain(a, b, ok):
            return a < b and all((sts[x].kind in ('asg', 'cas', 'inc', 'expr', 'scopy') or ends.get(x, b + 1) <= b) and
                                 x not in used and
                                 (sts[x].s not in labels or sts[x].s in ok) and sts[x].s not in cases and
                                 sts[x].s not in default for x in range(a, b))
        # L: A..; if (c) goto L: do { A } while (c); cgen forgets its registers before the test
        dos = {}
        for j, st in enumerate(sts):
            k = idx.get(st.target) if st.kind == 'if' else None
            if k is None or k >= j or refs.get(st.target) != 1 or \
                    st.target in asm_t or st.s in labels or st.s in cases or \
                    st.s in default or sts[k].s in self.L.nobool or \
                    sts[k].kind not in ('asg', 'cas', 'inc', 'expr', 'scopy') or \
                    k + 1 < j and not plain(k + 1, j, ()) or \
                    any(x in used or getattr(sts[x], 'forhead', None) is not None for x in range(k, j + 1)):
                continue
            dos[k], dos[j] = None, st.cond
            used |= set(range(k, j + 1))
            labels.discard(st.target)
            for x in range(k, j + 1):
                sts[x].forhead = sts[k].s
        # inner blocks first: an if/else may hold structured ifs (cgen keeps its registers there too)
        # A join two jumps reach (if (c) goto J inside the else of an if whose then ends in goto J)
        # is tried speculatively; when not all its jumps end up absorbed, everything is redone
        # without that speculation.
        fh0 = {id(x): x.forhead for x in sts if hasattr(x, 'forhead')}
        labels0, self._nospec = set(labels), set()
        while True:
            for d in (opens, closes, ends):
                d.clear()
            elses.clear()
            labels.clear()
            labels |= labels0
            for x in sts:
                if id(x) in fh0:
                    x.forhead = fh0[id(x)]
                elif hasattr(x, 'forhead'):
                    del x.forhead
            self._abs, self._spec = {}, set()
            grown = True
            while grown:
                grown = False
                for k, st in enumerate(sts):
                    if k not in opens and self.structure_if(k, st, sts, idx, refs, used, labels, cases, default,
                                                            asm_t, plain, opens, elses, closes, ends):
                        grown = True
            bad = {t for t in self._spec if self._abs.get(t, 0) != refs[t]}
            if not bad:
                break
            self._nospec |= bad
        for k, st in enumerate(sts):
            out += ['\t}'] * closes.get(k, 0)
            lab = []
            if st.s in labels:
                lab.append('L%04x:' % st.s)
            for v in cases.get(st.s, []):
                lab.append('case %d:' % self.sdisp(v))
            if st.s in default:
                lab.append('default:')
            if lab:
                out += lab
                if st.kind in ('raw', 'endsw'):
                    out.append('\t;')
            kd = st.kind
            if dos.get(k, 0) is None:
                out.append('\tdo {')
            if k in opens:
                out.append('\tif (%s) {' % self.cond(opens[k]))
            elif k in elses:
                out.append('\t} else {')
            elif kd == 'raw':
                tg = self.tail_goto if k == len(sts) - 1 else None
                if not tg or tg[0] > st.s:          # a lone final jmp needs no asm at all
                    out += self.raw(st)
                if tg:
                    if tg[0] in self.L.targets and tg[0] > st.s:
                        out.append('L%04x:' % tg[0])
                    out.append('\treturn;' if self.tail_goto[1] == self.f.epi else '\tgoto L%04x;' % self.tail_goto[1])
            elif k in fors:
                c, op = fors[k][0].cond, '++' if fors[k][1].op == '+' else '--'
                out.append('\tfor (%s = %s; %s; %s%s) {' % (self.lvx(st.lv), self.ex(st.rv), self.cond(c), self.ex(fors[k][1].lv), op))
            elif k in forend:
                if forend[k]:
                    out.append('\t}')
            elif kd == 'asg':
                rv = st.rv
                if st.lv[0] == 'v' and vkey(st.lv) in self.T.ptr and rv[0] == 'b' and rv[1] == '+' and \
                        rv[2][0] == 'm' and rv[2][3] == 2 and rv[3][0] not in ('c', 'v', 'm'):
                    # pointer + computed int: cgen computes the (scaled) int first
                    out.append('\t%s = %s;' % (self.lvx(st.lv), self.ptr(rv)))
                elif st.lv[0] == 'v' and vkey(st.lv) in self.T.ptr and rv[0] == 'b' and rv[1] == '+' and \
                        rv[3][0] == 'c' and self.T.is_data(rv[3][1]) and (rv[3][1] & 0xffff) >= 0x100 and \
                        rv[2][0] not in ('c', 'v') and self.stores_bx(st):
                    # pointer = &global[i]: cgen keeps the index in bx and adds the base there
                    out.append('\t%s = (char *)%s + %s;' % (self.lvx(st.lv), self.global_name(rv[3][1]), self.ex(rv[2])))
                elif size_of(st.lv) == 1 and rv[0] == 'lo' and rv[1][0] == 'b' and rv[1][1] in ('&', '|', '^') and \
                        rv[1][2][0] == 'x' and rv[1][2][1] and rv[1][2][2] == st.lv and st.lv[0] == 'm':
                    # byte x = x op y: the compound form keeps the address registers for the next statement
                    out.append('\t%s %s= %s;' % (self.lvx(st.lv), rv[1][1], self.ex(rv[1][3])))
                else:
                    out.append('\t%s = %s;' % (self.lvx(st.lv), self.ex(self.byte_k(rv) if size_of(st.lv) == 1 else rv)))
            elif kd == 'cas':
                lv = self.lvx(st.lv)
                if getattr(st, 'incs', False) and st.lv[0] == 'v' and vkey(st.lv) in self.T.ptr:
                    lv = '*(int *)&' + lv       # inc; inc: cgen adds to a pointer with add, an int with incs
                rv = self.byte_k(st.rv) if size_of(st.lv) == 1 else st.rv
                out.append('\t%s %s= %s;' % (lv, st.op, self.ex(rv)))
            elif kd == 'scopy':
                out.append('\t*(struct s%d *)%s = *(struct s%d *)%s;' % (st.size, self.saddr(st.dst), st.size,
                                                                       self.saddr(st.src)))
            elif kd == 'inc':
                lv = self.lvx(st.lv)
                out.append('\t%s%s;' % ('(%s)' % lv if lv.startswith('*') else lv, '++' if st.op == '+' else '--'))
            elif kd == 'expr':
                out.append('\t%s;' % self.ex(st.x))
            elif kd == 'if' and k in dos:
                out.append('\t} while (%s);' % self.cond(st.cond))
            elif kd == 'if':
                out.append('\tif (%s) goto L%04x;' % (self.cond(st.cond), st.target))
            elif kd == 'goto':
                # a dead jump to the epilogue right after a goto: cgen drops a dead goto but keeps
                # the jmp of a dead 'return'
                dead = epi_k is not None and st.target == sts[epi_k].s and k and sts[k - 1].kind == 'goto'
                out.append('\treturn;' if dead else '\tgoto L%04x;' % st.target)
            elif kd == 'switch':
                out.append('\tswitch (%s) {' % self.ex(st.x))
            elif kd == 'endsw':
                out.append('\t}')
            elif kd == 'ret':
                if getattr(st, 'epi', False):
                    if not fell and k < last_real:
                        out.append('\treturn;')
                    elif lab:
                        out.append('\t;')       # a label needs a statement
                elif st.rv is not None:
                    out.append('\treturn %s;' % self.ex(st.rv))
                else:
                    out.append('\tbreak;' if k in brk else '\tgoto L%04x;' % sts[epi_k].s if k in fwd else '\treturn;')
            fell = kd == 'ret' and getattr(st, 'fall', False)
            owners += [st] * (len(out) - len(owners))
        if out and out[-1].endswith(':'):
            out.append('\t;')
        self.owners = owners
        return out, needed - starts

    def structure_if(self, k, st, sts, idx, refs, used, labels, cases, default, asm_t, plain, opens, elses,
                     closes, ends):
        """if (c) goto T; A..; [goto J; T: B..;] T/J: is if (!c) { A } [else { B }]: True if structured."""
        c = getattr(st, 'cond', None)
        left = lambda t: refs.get(t, 0) - self._abs.get(t, 0)       # jumps to t not yet absorbed
        if st.kind != 'if' or k in used or st.s in self.L.nobool or \
                c[0] in ('&&', '||') and getattr(self.L, 'noandif', True) or \
                st.target in cases or st.target in default or st.target in asm_t:
            return False
        spec = False
        if left(st.target) != 1:
            # the other jumps may be else-gotos before us that an enclosing if/else absorbs
            before = sum(1 for x in sts[:k] if x.kind == 'goto' and x.target == st.target)
            if st.target in self._nospec or left(st.target) < 2 or before < left(st.target) - 1:
                return False
            spec = True
        kt = idx.get(st.target)
        if kt is None or kt <= k + 1:
            return False
        g = sts[kt - 1]
        kj = idx.get(g.target) if g.kind == 'goto' and kt - 1 not in used else None
        if kj is not None and kj > kt and left(g.target) == 1 and g.s not in labels and \
                g.target not in cases and g.target not in default and g.target not in asm_t and \
                plain(k + 1, kt - 1, ()) and plain(kt, kj, {st.target}):
            elses.add(kt - 1)
            closes[kj] = closes.get(kj, 0) + 1
            self._abs[g.target] = self._abs.get(g.target, 0) + 1
            if not left(g.target):
                labels.discard(g.target)
            end = ends[kt - 1] = kj
        elif g.kind != 'goto' and plain(k + 1, kt, ()):
            closes[kt] = closes.get(kt, 0) + 1
            end = kt
        else:
            return False
        opens[k], ends[k] = negate(c), end
        if c[0] in ('&&', '||'):
            self.andif = True
        self._abs[st.target] = self._abs.get(st.target, 0) + 1
        if spec:
            self._spec.add(st.target)
        if not left(st.target):
            labels.discard(st.target)
        for x in range(k, end):         # a mismatch inside: print it with gotos next round
            if getattr(sts[x], 'forhead', None) is None or x == k:
                sts[x].forhead = st.s   # (an inner block keeps its own: it is undone first)
        return True

    def raw(self, st):
        e = self.tail_goto[0] if self.tail_goto and st is self.L.sts[-1] else st.e
        lines, ext = skel.asm_lines(self.img, skel.Names(self.img), st.s, e, self.f.seen,
                                    self.img.fname(self.f.s) + '_')
        self.asm_ext |= ext
        return ['#asm'] + lines + ['#endasm']

    # ---- whole function
    def source(self):
        body, missing = self.stmts()
        f, T = self.f, self.T
        pk = [w for (k, w) in list(T.sizes) + list(T.ptr) if k == 'p' and ('p', w) not in T.hi16]
        params, off = [], 4
        while pk and off <= max(pk):
            params.append(off)
            off += 4 if self.declared_size(('v', 'p', off, 2)) == 4 else 2
        decl = []
        for off in params:
            t = 'struct { char b0, b1; } ' if off in T.pbytes else T.ctype(('p', off))
            if t != 'int ':
                decl.append('%s%s;' % (t, self.ln('p%d' % off)))
        # locals: the first declared lies closest to bp
        lk = sorted({w for (k, w) in list(T.sizes) + list(T.ptr) if k == 'l'} | set(T.larr),
                    reverse=True)
        sr = self.L.sret
        if sr:                  # the returned struct replaces the locals it covers
            lk = sorted({w for w in lk if not sr[0] <= w < sr[0] + 2 * sr[1]} | {sr[0]}, reverse=True)
        locs, pos = [], 0
        for off in lk:
            if sr and off == sr[0]:
                if off + 2 * sr[1] > pos:
                    raise ValueError('overlapping locals')
                if off + 2 * sr[1] < pos:
                    locs.append('\tchar x%d[%d];' % (-pos, pos - off - 2 * sr[1]))
                locs.append('\tstruct r%d sr;' % sr[1])
                pos = off
                continue
            if off in T.elem_of or off in T.arr_alias or off in T.hi_of or ('l', off) in T.hi16:
                continue
            if off in T.larr:        # an array fills the gap up to the next variable
                sz = pos - off
                if sz <= 0:
                    raise ValueError('overlapping locals')
                if T.int_arr(off) and sz % 2 == 0:
                    locs.append('\tint %s[%d];' % (self.ln('l%d' % -off), sz // 2))
                else:
                    locs.append('\tchar %s[%d];' % (self.ln('l%d' % -off), sz))
                pos = off
                continue
            sz = self.declared_size(('v', 'l', off, 2))
            if off + sz > pos:
                raise ValueError('overlapping locals')
            if off + sz < pos:
                locs.append('\tchar x%d[%d];' % (-pos, pos - off - sz))
            locs.append('\t%s%s;' % (T.ctype(('l', off)), self.ln('l%d' % -off)))
            pos = off
        if -pos > f.locals:
            raise ValueError('locals beyond frame')
        if -pos < f.locals:
            locs.append('\tchar x%d[%d];' % (-pos, f.locals + pos))
        # params read only in #asm: cgen would drop the frame; its prologue is 'ifdef $20004'
        # (the first function of a file), so define that symbol ourselves
        bp_used = T.larr or any(k in ('p', 'l') for k, w in list(T.sizes) + list(T.ptr))
        frame = ['#asm', '$20004 equ 1', '#endasm'] if f.frame and not bp_used and not locs else []
        regs = ['\tregister %s%s;' % (T.ctype(('r', r)), self.ln('r' + r)) for r in ('si', 'di')
                if r in f.regs and r not in f.scratch and not (sr and not self.reg_used(r))]
        head = []
        own = self.img.fname(f.s) + '_'
        ext = sorted(self.asm_ext - {own})
        if ext:
            head += ['#asm'] + ['\textrn %s:near' % x for x in ext] + ['#endasm']
        head += sorted(self.ext_vars.values())
        head += ['long %s();' % fn for fn in sorted(self.lcalls)]
        for n in sorted({n for _, n in self.L.structs} | getattr(self.L, 'scopies', set())):
            head.append('struct s%d { int w[%d]; };' % (n, n // 2))
        for fn, n in sorted(self.L.structs):
            head.append('struct s%d %s();' % (n, fn))
        if sr:
            head.append('struct r%d { int w[%d]; };' % (sr[1], sr[1]))
        doc = symnames.doc(self.img.name, f.s)
        if doc:
            head.append('/* %s */' % doc.replace('*/', '* /'))
        head.append('%s%s(%s)' % ('struct r%d ' % sr[1] if sr else '', self.img.fname(f.s),
                                  ', '.join(self.ln('p%d' % o) for o in params)))
        head += decl
        head.append('{')
        self.body_at = len(head) + len(locs) + len(regs) + len(frame)
        return head + locs + regs + frame + body + ['}'], missing

    def line_map(self, src):
        """1-based source line -> statement."""
        return {self.body_at + k + 1: st for k, st in enumerate(self.owners)}
