"""Find Aztec library modules inside WROOT root code and overlay code (masked compare)."""
import sys, glob, struct, os
sys.path.insert(0, os.path.dirname(__file__))
from aztobj import library

R = os.path.join(os.path.dirname(__file__), '..')
img = open(R + '/orig/wroot.img', 'rb').read()
images = {'ROOT': img[:0x4572]}
for f in sorted(glob.glob(R + '/gog/x/app/*.OVR')):
    d = open(f, 'rb').read()
    csz = struct.unpack_from('<H', d, 4)[0]
    images[os.path.basename(f)[:-4]] = d[14:14 + csz]

libs = sys.argv[1:]
hits = []
for lf in libs:
    for off, o in library(open(lf, 'rb').read()):
        code, m = bytes(o.seg['code']), o.mask()
        if len(code) < 4:
            continue
        # anchor on first run of >=4 literal bytes
        best = None
        for i in range(len(code) - 3):
            if all(m[i:i + 4]):
                best = i; break
        if best is None:
            continue
        key = code[best:best + 4]
        for name, im in images.items():
            p = im.find(key)
            while p >= 0:
                s = p - best
                if s >= 0 and s + len(code) <= len(im) and all(
                        not m[j] or im[s + j] == code[j] for j in range(len(code))):
                    hits.append((name, s, len(code), os.path.basename(lf), o.modname))
                p = im.find(key, p + 1)
for h in sorted(hits):
    print('%-6s %04x %04x  %-8s %s' % h)
