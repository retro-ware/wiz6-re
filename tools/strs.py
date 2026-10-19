"""Show the strings a C source refers to by address, to help name things.

usage: strs.py IMAGE FILE.c...
Every decimal constant >= 256 in the file that is the start of a printable NUL-terminated string
in the image's data (or the root's) is printed with that string, as do globals named gXXXX.
"""
import os, re, sys
sys.path.insert(0, os.path.dirname(__file__))
from x86dis import Image


def string_at(img, a):
    for im in (img, ROOT):
        o = a - im.dbase
        if 0 <= o < len(im.data):
            e = im.data.find(b'\0', o)
            s = im.data[o:e if e >= 0 else len(im.data)]
            if 2 <= len(s) <= 200 and all(32 <= c < 127 or c in (9, 10, 13) for c in s):
                return s.decode('latin1')
    return None


img = Image(sys.argv[1])
ROOT = Image('ROOT') if img.name != 'ROOT' else img
for f in sys.argv[2:]:
    t = open(f, encoding='latin1').read()
    found = {}
    for m in re.finditer(r'(?<![\w.])(\d{3,5})(?![\w.])|\bg([0-9a-f]{4})\b', t):
        a = int(m.group(1)) if m.group(1) else int(m.group(2), 16)
        if a >= 256 and a not in found:
            s = string_at(img, a)
            if s is not None:
                found[a] = s
    print('== %s' % os.path.basename(f))
    for a, s in sorted(found.items()):
        print('  %5d %04x %r' % (a, a, s))
