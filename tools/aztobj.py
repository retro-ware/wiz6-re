"""Parser for Manx Aztec C86 4.x object files (.o) and libraries.

Header (0x1e bytes): magic 0x5466, name[8], code size @0x0a, data size @0x0c,
symtab offset @0x10, symbol count @0x12, symtab end @0x14, local label count @0x16.
Local labels follow the globals: type, flags, value16 (4 bytes, no name).
Symbol: type, flags, value16, name\\0.
Stream starts at 0x1e (or after the symtab when that sits at 0x1e). Opcodes:
  00        end
  1n        literal run of n+1 bytes
  2n        binary expression, operator n (1 add, 2 sub), then two terms
  3n        small int n (expression term)
  5x yy     medium int (x | yy<<4) - 0x800      -> word value
  7x yy     global symbol (x | yy<<4)        -> word fixup
  8x yy     DS: reserve value+1 bytes
  Ax yy     code-relative offset             -> word fixup
  Bx yy     data-relative offset             -> word fixup
  Cx yy     bss-relative offset              -> word fixup
  F2 <term> byte PC-relative
  F4 / F5   switch to code / data segment
  F0        DATASEG                          -> word segment fixup (relocation)
  F6 <term> start address
  FA <term> word PC-relative
  FB lo hi  large bss offset                 -> word fixup
"""
import struct, sys

TERM_KINDS = {0x6: 'lcl', 0x7: 'sym', 0x8: 'ds', 0xa: 'code', 0xb: 'data', 0xc: 'bss'}


class Obj:
    def __init__(self, raw, name=''):
        self.raw = raw
        if struct.unpack_from('<H', raw, 0)[0] not in (0x5466, 0x020c):
            raise ValueError('not an Aztec object')
        self.modname = raw[2:10].split(b'\0')[0].decode('latin1') or name
        self.csize, self.dsize = struct.unpack_from('<HH', raw, 0x0a)
        symoff, nsym, symend = struct.unpack_from('<HHH', raw, 0x10)
        self.syms = []
        p = symoff
        for _ in range(nsym):
            t, fl, v = struct.unpack_from('<BBH', raw, p)
            e = raw.index(b'\0', p + 4)
            self.syms.append((raw[p + 4:e].decode('latin1'), t, fl, v))
            p = e + 1
        nlcl = struct.unpack_from('<H', raw, 0x16)[0]
        self.lcls = []  # local labels: (type, flags, value)
        for _ in range(nlcl):
            t, fl, v = struct.unpack_from('<BBH', raw, p)
            p += 4
            self.lcls.append((t, fl, v))
        start = symend if symoff == 0x1e else 0x1e
        self.seg = {'code': bytearray(), 'data': bytearray()}
        self.fix = {'code': [], 'data': []}  # (offset, size, kind, target, expr)
        self.start = None
        self._parse(start)

    def _term(self, p):
        b = self.raw[p]
        hi = b >> 4
        if hi in TERM_KINDS:
            v = (b & 0xf) | self.raw[p + 1] << 4
            return p + 2, (TERM_KINDS[hi], v)
        if hi == 3:
            return p + 1, ('int', b & 0xf)
        if hi == 5:
            return p + 2, ('int', ((b & 0xf) | self.raw[p + 1] << 4) - 0x800)
        if b == 0xfb:
            return p + 3, ('bss', struct.unpack_from('<H', self.raw, p + 1)[0])
        if hi == 2:
            p += 1
            terms = []
            for _ in range(2):
                p, t = self._term(p)
                terms.append(t)
            return p, ('expr', terms)
        raise ValueError('bad term %02x at %x' % (b, p))

    def _parse(self, p):
        cur = 'code'
        raw = self.raw
        while True:
            b = raw[p]
            if b == 0:
                break
            hi = b >> 4
            out = self.seg[cur]
            if hi == 1:
                n = (b & 0xf) + 1
                out += raw[p + 1:p + 1 + n]
                p += 1 + n
            elif b == 0xf4:
                cur = 'code'; p += 1
            elif b == 0xf5:
                cur = 'data'; p += 1
            elif b in (0xf2, 0xfa):
                p, t = self._term(p + 1)
                size = 1 if b == 0xf2 else 2
                self.fix[cur].append((len(out), size, 'rel', t))
                out += bytes(size)
            elif b == 0xf6:
                p, t = self._term(p + 1)
                self.start = t
            elif b == 0xf0:
                self.fix[cur].append((len(out), 2, 'abs', ('dataseg', 0)))
                out += bytes(2)
                p += 1
            elif hi == 8:
                p, t = self._term(p)
                out += bytes(t[1] + 1)
            else:
                p, t = self._term(p)
                self.fix[cur].append((len(out), 2, 'abs', t))
                out += bytes(2)
        self.end = p + 1

    def symname(self, t):
        if t[0] == 'sym':
            return self.syms[t[1]][0]
        if t[0] == 'expr':
            return '+'.join(self.symname(x) for x in t[1])
        return '%s:%x' % t

    def mask(self, seg='code'):
        m = bytearray(b'\1' * len(self.seg[seg]))
        for off, size, _, _ in self.fix[seg]:
            m[off:off + size] = bytes(size)
        return m


def library(raw):
    """Split an Aztec library into objects by scanning for object headers."""
    objs = []
    p = 0
    while True:
        p = raw.find(b'\x66\x54', p)
        if p < 0:
            break
        try:
            o = Obj(raw[p:])
            objs.append((p, o))
            p += o.end
        except Exception:
            p += 2
    return objs


def _symterm(i):
    return bytes([0x70 | (i & 0xf), i >> 4])


class Writer:
    """Build an Aztec object. Symbols: (name, type, flags, value), e.g.
    extern code (7,0x48,0), extern data (7,0x4a,0), public code (2,0x48,off),
    public data (3,0x4a,off), uninitialized global (7,0x4a,size)."""

    def __init__(self):
        self.syms = [('$begin', 7, 0x48, 0)]
        self.index = {'$begin': 0}
        self.seg = {'code': [], 'data': []}  # items: bytes or ('wrel'|'abs', symname)
        self.size = {'code': 0, 'data': 0}
        self.lbss = 0

    def sym(self, name, typ=7, fl=0x48, val=0):
        if name not in self.index:
            self.index[name] = len(self.syms)
            self.syms.append((name, typ, fl, val))
        return self.index[name]

    def emit(self, seg, item):
        self.seg[seg].append(item)
        self.size[seg] += len(item) if isinstance(item, (bytes, bytearray)) else 2

    def _stream(self):
        out = bytearray()
        for seg, op in (('code', 0xf4), ('data', 0xf5)):
            out.append(op)
            for it in self.seg[seg]:
                if isinstance(it, (bytes, bytearray)):
                    for i in range(0, len(it), 16):
                        chunk = it[i:i + 16]
                        out.append(0x0f + len(chunk))
                        out += chunk
                elif it[0] == 'wrel':
                    out.append(0xfa)
                    out += _symterm(self.index[it[1]])
                else:
                    out += _symterm(self.index[it[1]])
        out.append(0)
        return out

    def bytes(self):
        stream = self._stream()
        symtab = bytearray()
        for name, t, fl, v in self.syms:
            symtab += struct.pack('<BBH', t, fl, v) + name.encode('latin1') + b'\0'
        symoff = 0x1e + len(stream)
        end = symoff + len(symtab)
        hdr = struct.pack('<H8sHHHHHHHHH', 0x5466, b'', self.size['code'], self.size['data'],
                          self.lbss, symoff, len(self.syms), end, 0, end, end)
        hdr += b'\0' * (0x1e - len(hdr))
        return hdr + stream + symtab


if __name__ == '__main__':
    bad = 0
    for f in sys.argv[1:]:
        try:
            o = Obj(open(f, 'rb').read(), f)
        except Exception as e:
            bad += 1
            print('ERROR', f, e)
            continue
        ok = len(o.seg['code']) == o.csize and len(o.seg['data']) == o.dsize
        if not ok:
            bad += 1
            print('MISMATCH', f, len(o.seg['code']), o.csize, len(o.seg['data']), o.dsize)
    print(len(sys.argv) - 1, 'objects,', bad, 'size mismatches')
