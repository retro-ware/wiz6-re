"""Recover symbol addresses from library modules matched in the image (see rtlscan.py).

usage: symmap.py work/rtl42b.txt LIB_OR_O...
For every matched module, each word fixup on a global symbol is read back from the image,
giving that symbol's address (code symbols via call displacements, data via absolute words).
"""
import os, sys, struct, glob, collections
sys.path.insert(0, os.path.dirname(__file__))
from aztobj import Obj, library
from cmpobj import image

hits = [l.split() for l in open(sys.argv[1])]
mods = {}
for lf in sys.argv[2:]:
    raw = open(lf, 'rb').read()
    if raw[:2] in (b'\x66\x54', b'\x0c\x02'):
        o = Obj(raw)
        mods[os.path.basename(lf)] = o
    else:
        for _, o in library(raw):
            mods.setdefault(o.modname, o)

syms = collections.defaultdict(set)
for h in hits:
    img_name, addr = h[0], int(h[1], 16)
    key = h[4] if len(h) > 4 else h[3]
    o = mods.get(key)
    if o is None:
        continue
    img, ibase = image(img_name)
    s0, addr = addr, addr + ibase  # rtlscan gives image offsets; make addr a load address
    for name, typ, fl, v in o.syms:
        if typ == 2 and fl == 0x48:
            syms[name].add(('code', img_name, addr + v))
    for off, size, kind, t in o.fix['code']:
        if size != 2:
            continue
        s = s0 + off
        w = struct.unpack_from('<H', img, s)[0]
        if t[0] == 'expr' and t[1][0][0] == 'sym' and t[1][1][0] == 'int':
            name = o.syms[t[1][0][1]][0]; w -= t[1][1][1]
        elif t[0] == 'sym':
            name = o.syms[t[1]][0]
        else:
            continue
        if kind == 'rel':
            syms[name].add(('code', img_name, (addr + off + 2 + w) & 0xffff))
        else:
            syms[name].add(('data', img_name, w))
for n in sorted(syms, key=lambda n: sorted(syms[n])[0][2]):
    for k in sorted(syms[n]):
        print('%-6s %-5s %04x %s' % (k[1], k[0], k[2], n))
