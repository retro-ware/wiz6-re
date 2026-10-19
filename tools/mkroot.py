"""Generate the root's blob objects build/RB_XXXX.O around the C modules listed in src/root/MODS.

MODS lines: NAME CODEADDR DATAADDR (hex), in link order -- build/NAME.O is the compiled C module
and must land at those addresses. The gaps between C modules are blob pieces holding the
original bytes. Calls from blob code to library functions become WREL fixups (so ln pulls the
same modules). Every fXXXX_/gXXXX_ that a C module or an overlay references is published at
that address; game BSS is a run of uninitialized globals in the first piece, split at the
referenced addresses. Writes build/ROOT.LNK (the object list in link order).
"""
import os, re, struct, sys
sys.path.insert(0, os.path.dirname(__file__))
from aztobj import Obj, Writer
from blobutil import insns, root_publics

R = os.path.join(os.path.dirname(__file__), '..')
GAME_END = 0x36dc        # start of OVLD
DSEG = 0xfd80            # DGROUP in the image
DATA_START, DATA_END = 0x2, 0x636
BSS_START, BSS_END = 0x7d2, 0x4fec

img = open(R + '/orig/wroot.img', 'rb').read()
libfn = {}
for l in open(R + '/work/symmap.txt'):
    a, k, v, n = l.split()
    if a == 'ROOT' and k == 'code' and int(v, 16) >= GAME_END:
        libfn[int(v, 16)] = n

mods = []
for l in open(R + '/src/root/MODS'):
    if l.split() and not l.startswith('#'):
        n, c, d = l.split()
        mods.append((n, int(c, 16), int(d, 16), Obj(open(R + '/build/%s.O' % n, 'rb').read(), n)))

# names wanted: overlay calls plus every fXXXX_/gXXXX_ extern of the C modules
want = dict(root_publics())
defined = {s for n, c, d, o in mods for s, t, fl, v in o.syms if t != 7 or v}
for n, c, d, o in mods:
    for s, t, fl, v in o.syms:
        m = re.fullmatch(r'([fg])([0-9a-f]{4})_', s)
        if m and t == 7 and v == 0 and s not in defined:
            want[int(m.group(2), 16)] = s
for x in list(want):
    if want[x] in defined:
        del want[x]

# piece i lies between C module i-1 and C module i
bounds = [(0, DATA_START)]
for n, c, d, o in mods:
    bounds += [(c, d), (c + o.csize, d + o.dsize)]
bounds.append((GAME_END, DATA_END))
link = []
for i in range(len(mods) + 1):
    (ca, da), (cb, db) = bounds[2 * i], bounds[2 * i + 1]
    assert ca <= cb and da <= db, 'C module overlaps: %s' % mods[i - 1][0]
    if ca < cb or da < db or i == 0:
        name = 'RB_%04X' % ca
        w = Writer()
        fix = {}
        for x, by, t in insns(img[ca:cb], ca):
            if by[0] in (0xe8, 0xe9) and len(by) == 3:
                tgt = (x + 3 + struct.unpack_from('<h', by, 1)[0]) & 0xffff
                if tgt in libfn:
                    fix[x + 1] = libfn[tgt]
        for x in sorted(want):
            if ca <= x < cb:
                w.sym(want[x], 2, 0x48, x - ca)
            if da <= x < db and want[x][0] == 'g':
                w.sym(want[x], 3, 0x4a, x - da)
        p = ca
        for x in sorted(fix):
            w.emit('code', img[p:x])
            w.sym(fix[x])
            w.emit('code', ('wrel', fix[x]))
            p = x + 2
        w.emit('code', img[p:cb])
        w.emit('data', img[DSEG + da:DSEG + db])
        if i == 0:
            # ln allocates uninitialized globals in symtab order
            cut = sorted({BSS_START} | {x for x in want if BSS_START < x < BSS_END and want[x][0] == 'g'})
            for j, x in enumerate(cut):
                e = cut[j + 1] if j + 1 < len(cut) else BSS_END
                w.sym(want.get(x, 'gbss_'), 7, 0x4a, e - x)
        os.makedirs(R + '/build', exist_ok=True)
        open(R + '/build/%s.O' % name, 'wb').write(w.bytes())
        print('%s.O: code %04x-%04x data %04x-%04x, %d lib calls' % (name, ca, cb, da, db, len(fix)))
        link.append(name)
    if i < len(mods):
        link.append(mods[i][0])
open(R + '/build/ROOT.LNK', 'w').write(' '.join(l.lower() + '.o' for l in link))
