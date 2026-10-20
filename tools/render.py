"""Regenerate src/ from the lift state with the current names/*.json (no compiling).

usage: render.py [IMAGE...]      (default: all images)
Every function whose work/lift/IMG/state.json status is ok is relifted with its recorded
demotions and printed again; every other function gets its asm skeleton; then data.c/bss.c
labels are rewritten as promote.py does. Run tools/sbuild.sh afterwards: names never change
code, so the build must stay byte-identical.
"""
import json, os, sys
sys.path.insert(0, os.path.dirname(__file__))
from x86dis import Image
from skel import Names, skeleton, write
from lift import Lifter
from cprint import Printer
import promote
import structret

R = os.path.join(os.path.dirname(__file__), '..')


def render(iname):
    img = Image(iname)
    names = Names(img)
    sp = R + '/work/lift/%s/state.json' % iname
    state = json.load(open(sp)) if os.path.exists(sp) else {}
    n, ok = 0, structret.accepted(img, state)[0]
    for s, e in img.ranges():
        st = state.get('%04x' % s)
        path = R + '/src/%s/f%04x.c' % (iname, s)
        if st and st['status'] == 'ok' and '%04x' % s in ok and structret.buffer(img, s, e) is not None:
            write(path, structret.source(img.fname(s)))
            n += 1
            continue
        if st and st['status'] == 'ok' and (not st.get('structret') or '%04x' % s in ok):
            L = Lifter(img, s, e, names, st['demote'], st.get('noscratch', False), st.get('nomerge', False),
                       st.get('nobool', []))
            L.noandif = st.get('noandif', False)     # as liftloop lifted it
            L.opasg = set(st.get('opasg', []))
            L.nolatedo = set(st.get('nolatedo', []))
            L.run()
            src, missing = Printer(L, names).source()
            if missing:
                raise SystemExit('%s %04x: missing labels %s' % (iname, s, sorted(missing)))
            write(path, src)
            n += 1
        else:
            write(path, skeleton(img, s, e))
    return n


def main():
    for n in sys.argv[1:] or promote.ALL:
        print('%s: %d in C' % (n, render(n)))
    imgs, want = promote.wanted()
    for n in promote.ALL:
        promote.labels(imgs[n], want[n])


if __name__ == '__main__':
    main()
