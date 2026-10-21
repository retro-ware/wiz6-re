"""Diff one function of a built image against the original.

usage: hdiff.py IMAGE ADDR     (after tools/sbuild.sh IMAGE; ADDR hex)
"""
import difflib, struct, sys, os
sys.path.insert(0, os.path.dirname(__file__))
from liftloop import keys
from x86dis import Image

R = os.path.join(os.path.dirname(__file__), '..')


def code(path, root):
    d = open(path, 'rb').read()
    if root:
        return d[struct.unpack_from('<H', d, 8)[0] * 16:], 0
    return d[14:14 + struct.unpack_from('<H', d, 4)[0]], 0x4572


iname, a = sys.argv[1], int(sys.argv[2], 16)
e = dict(Image(iname).ranges())[a]
f = 'WROOT.EXE' if iname == 'ROOT' else iname + '.OVR'
(o, base), (n, _) = code(R + '/gog/x/app/' + f, iname == 'ROOT'), code(R + '/build/%s/%s' % (iname, f), iname == 'ROOT')
ko = keys(o[a - base:e - base], a)
kn = keys(n[a - base:e - base + 64], a)
kn = [k for k in kn if k[0] < e] if len(n) == len(o) else kn[:len(ko) + 8]
for l in difflib.unified_diff(['%04x %s' % (x[0], x[2]) for x in ko], ['%04x %s' % (x[0], x[2]) for x in kn], lineterm='', n=3):
    print(l)
