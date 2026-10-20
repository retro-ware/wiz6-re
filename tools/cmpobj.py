"""Compare a compiled Aztec .o against the original image.

usage: cmpobj.py FILE.O IMAGE ADDR [DATAADDR]    IMAGE = ROOT or an overlay name (WMAZE, ...)
Resolves the object's own labels/code/data, fXXXX_ (code address), gXXXX_ (data address) and
library function names; masks only what is left (static bss). With DATAADDR the data segment
is compared too. Prints a diff listing and exits 0 when everything matches.
"""
import os, re, struct, sys
sys.path.insert(0, os.path.dirname(__file__))
from aztobj import Obj
from blobutil import libfns
import symnames

R = os.path.join(os.path.dirname(__file__), '..')
DSEG = 0xfd80
_lib = {}


def image(name):
    """(code bytes, code base, data bytes, data base) of an image."""
    if name == 'ROOT':
        img = open(R + '/orig/wroot.img', 'rb').read()
        return img[:0x4572], 0, img[DSEG:], 0
    d = open(R + '/gog/x/app/%s.OVR' % name, 'rb').read()
    csz, dbase, dsz = struct.unpack_from('<HHH', d, 4)
    return d[14:14 + csz], 0x4572, d[14 + csz:14 + csz + dsz], dbase


def libnames(name):
    if name not in _lib:
        m = {v: k for k, v in libfns('ROOT').items()}
        if name != 'ROOT':
            m.update({v: k for k, v in libfns(name).items()})
        _lib[name] = m
    return _lib[name]


def resolve(o, t, addr, daddr, iname):
    """Value of a fixup term, or None if it cannot be checked."""
    k = t[0]
    if k == 'lcl':
        typ, fl, v = o.lcls[t[1]]
        if typ == 9:            # the module's own bss (a struct return buffer): placed by ln
            return None
        return (daddr + v if daddr is not None else None) if typ == 3 else addr + v
    if k == 'code':
        return addr + t[1]
    if k == 'data':
        return daddr + t[1] if daddr is not None else None
    if k == 'int':
        return t[1]
    if k == 'expr':
        a, b = (resolve(o, x, addr, daddr, iname) for x in t[1])
        return None if a is None or b is None else a + b
    if k == 'sym':
        name, typ, fl, v = o.syms[t[1]]
        if typ == 2 and fl == 0x48:
            return addr + v
        if typ == 3 and daddr is not None:
            return daddr + v
        lib = libnames(iname).get(name)
        if lib is not None or not name.endswith('_'):
            return lib
        a = symnames.func_addr(iname, name[:-1])
        return a if a is not None else symnames.data_addr(name[:-1])
    return None


def compare(o, iname, addr, daddr=None):
    """Per segment: (ours, mask, orig, diffs)."""
    icode, ibase, idata, dbase = image(iname)
    out = {}
    for seg, base, src in (('code', addr, icode[addr - ibase:]),
                           ('data', daddr, idata[daddr - dbase:] if daddr is not None else b'')):
        if seg == 'data' and daddr is None:
            continue
        b = bytearray(o.seg[seg])
        mask = bytearray(b'\1' * len(b))
        for off, size, kind, t in o.fix[seg]:
            tgt = resolve(o, t, addr, daddr, iname)
            if tgt is None:
                mask[off:off + size] = bytes(size)
            else:
                v = tgt - (base + off + size) if kind == 'rel' else tgt
                b[off:off + size] = (v & (0xff if size == 1 else 0xffff)).to_bytes(size, 'little')
        orig = src[:len(b)]
        diffs = [i for i in range(len(b)) if mask[i] and (i >= len(orig) or orig[i] != b[i])]
        out[seg] = (b, mask, orig, diffs)
    return out


if __name__ == '__main__':
    o = Obj(open(sys.argv[1], 'rb').read())
    addr = int(sys.argv[3], 16)
    daddr = int(sys.argv[4], 16) if len(sys.argv) > 4 else None
    res = compare(o, sys.argv[2], addr, daddr)
    bad = 0
    for seg, (b, mask, orig, diffs) in res.items():
        base = addr if seg == 'code' else daddr
        print('%s %s: %d bytes at %04x, %d diffs, %d masked' % (sys.argv[1], seg, len(b), base,
              len(diffs), mask.count(0)))
        for i in diffs[:40]:
            print('  +%04x (%04x): ours %02x orig %s' % (i, base + i, b[i],
                  '%02x' % orig[i] if i < len(orig) else '--'))
        bad |= bool(diffs)
    sys.exit(bad)
