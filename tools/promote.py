"""Promote matching lifted C into src/ and label the globals it uses.

usage: promote.py IMAGE...      (default: all images)
Copies work/lift/IMG/fXXXX.c (status ok) over src/IMG/fXXXX.c, then rewrites every image's
data.c (public gXXXX_ labels inside the db blob) and bss.c (one asm 'global' per referenced address,
in ascending order) for the gXXXX the C sources name.
Addresses outside an overlay's own data/BSS belong to the root, which publishes them.
"""
import glob, json, os, re, shutil, sys
sys.path.insert(0, os.path.dirname(__file__))
from x86dis import Image
from skel import db, write, skeleton
import symnames
import structret

R = os.path.join(os.path.dirname(__file__), '..')
ALL = ['ROOT', 'WINIT', 'WBASE', 'WMELE', 'WDOPT', 'WPCMK', 'WPOPS', 'WTREA', 'WMAZE', 'WMEXE',
       'WMNPC', 'WPCVW']
EXT = re.compile(r'^extern [^;(]*?(\w+)(?:\[\])?;', re.M)


def promote(iname):
    sp = R + '/work/lift/%s/state.json' % iname
    if not os.path.exists(sp):
        return 0
    n = 0
    for k, v in json.load(open(sp)).items():
        if v['status'] == 'ok':
            shutil.copy(R + '/work/lift/%s/f%s.c' % (iname, k), R + '/src/%s/f%s.c' % (iname, k))
            n += 1
    return n


def definable(img, a):
    return img.dbase <= a < img.dbase + len(img.data) or img.bss[0] <= a < img.bss[1]


def wanted():
    """image name -> set of referenced global addresses it must define. A function naming an
    address no image can label (library data) goes back to its asm skeleton."""
    imgs = {n: Image(n) for n in ALL}
    want = {n: set() for n in ALL}
    for n in ALL:
        img = imgs[n]
        for f in sorted(glob.glob(R + '/src/%s/f*.c' % n)):
            refs = {symnames.data_addr(m.group(1)) for m in EXT.finditer(open(f, encoding='latin1').read())}
            refs.discard(None)
            owner = {a: n if n != 'ROOT' and img.dbase <= a < img.bss[1] else 'ROOT' for a in refs}
            if any(not definable(imgs[owner[a]], a) for a in refs):
                s = int(os.path.basename(f)[1:5], 16)
                write(f, skeleton(img, s, dict(img.ranges())[s]))
                print('%s: f%04x back to asm (library data)' % (n, s))
                continue
            for a in refs:
                want[owner[a]].add(a)
    return imgs, want


def labels(img, addrs):
    d0, d1 = img.dbase, img.dbase + len(img.data)
    dl = sorted(a for a in addrs if d0 <= a < d1)
    bl = sorted(a for a in addrs if img.bss[0] <= a < img.bss[1])
    bad = [a for a in addrs if a not in dl and a not in bl]
    if bad:
        raise SystemExit('%s: addresses outside data/bss: %s' % (img.name, ['%04x' % a for a in bad]))
    out, p = ['#asm', 'dataseg segment word public \'data\''], d0
    for a in dl:
        out += db(img.data[p - d0:a - d0])
        n = symnames.data(a)
        out += ['\tpublic %s_' % n, '%s_ label byte' % n]
        p = a
    out += db(img.data[p - d0:]) + ['dataseg ends', '#endasm']
    write(R + '/src/%s/data.c' % img.name, out)
    sp = R + '/work/lift/%s/state.json' % img.name
    st = json.load(open(sp)) if os.path.exists(sp) else {}
    # struct-returning functions' own static buffers sit at the bss start in function order
    b0 = structret.accepted(img, st)[1]
    if img.bss[1] > b0:
        cuts = sorted({b0} | {a for a in bl if a >= b0}) + [img.bss[1]]
        # asm 'global' keeps source order; cc's own symtab order is hashed
        # ln word-aligns even-sized commons: at an odd address, split off one byte
        decl = []
        for a, b in zip(cuts, cuts[1:]):
            if a & 1 and not (b - a) & 1:
                decl += ['\tglobal %s_:byte,1' % symnames.data(a)]
                a += 1
            decl += ['\tglobal %s_:byte,%d' % (symnames.data(a), b - a)]
        write(R + '/src/%s/bss.c' % img.name, ['#asm'] + decl + ['#endasm'])


def main():
    names = sys.argv[1:] or ALL
    for n in names:
        print('%s: %d promoted' % (n, promote(n)))
    imgs, want = wanted()
    for n in ALL:
        labels(imgs[n], want[n])
        print('%s: %d labels' % (n, len(want[n])))


if __name__ == '__main__':
    main()
