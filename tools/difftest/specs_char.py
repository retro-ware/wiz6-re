"""Character (WPCMK, WPCVW, WBASE, root helpers) case specs."""
import layout as L
from specs import pick, Spec, STUB_FX, SCRATCH

# WPCMK overlay functions that only draw, wait or read input.
PCMK_UI = (0x7068, 0x4b6d, 0x4b9c, 0x4bed, 0x4c13, 0x4ffd, 0x5022, 0x5058, 0x507f, 0x50a8,
           0x50d1, 0x5176, 0x5277, 0x52b6, 0x535b, 0x5691, 0x5b3b, 0x611b, 0x6144, 0x619b,
           0x6216, 0x673f, 0x8ffe, 0x457f, 0x45fc, 0x4654, 0x4800)


def pc(rnd, prefix):
    """Every scalar of a PC at prefix, mostly in game ranges."""
    s = {}
    for p, _, size, signed in L.leaves('PC', prefix):
        f = p[len(prefix):]
        if f.startswith('.Stats'):
            v = pick(rnd, 3, 18, (0, 1, 19, 25, 255))
        elif f.startswith('.Skills'):
            v = rnd.choice([0, 0, 0, pick(rnd, 1, 100, (99, 100, 255))])
        elif f == '.Class':
            v = rnd.randint(0, 13)
        elif f == '.Race':
            v = rnd.randint(0, 10)
        elif f == '.Sex':
            v = rnd.randint(0, 1)
        elif f == '.Level':
            v = pick(rnd, 1, 20, (0, 1, 255, 32767))
        elif size == 1:
            v = pick(rnd, 0, 30, (0, 255, 127, 128)) if not signed else pick(rnd, -10, 40, (-128, 127))
        elif size == 2:
            v = pick(rnd, 0, 300, (0, 1, -1, 32767, -32768))
        else:
            v = pick(rnd, 0, 100000, (0, -1, 0x7fffffff))
        s[prefix + f] = v
    return s


def newpc(rnd):
    s = pc(rnd, 'newPC')
    s['bonusPoints'] = pick(rnd, 0, 20, (-1, 0, 21, 100))
    for c in range(14):
        s['classEligible[%d]' % c] = rnd.randint(0, 1)
    return s


def mkn(args=lambda r: []):
    return lambda rnd: (newpc(rnd), args(rnd))


pcmk_9341 = Spec('WPCMK', 0x9341, mkn(), PCMK_UI, void=True)
pcmk_7274 = Spec('WPCMK', 0x7274, mkn(), PCMK_UI, void=True)
pcmk_73e9 = Spec('WPCMK', 0x73e9, mkn(lambda r: [r.randint(0, 13)]), PCMK_UI, void=True)
pcmk_7532 = Spec('WPCMK', 0x7532, mkn(lambda r: [r.randint(0, 10)]), PCMK_UI, void=True)
pcmk_75d2 = Spec('WPCMK', 0x75d2, mkn(lambda r: [r.randint(0, 1)]), PCMK_UI, void=True)
pcmk_7e92 = Spec('WPCMK', 0x7e92, mkn(), PCMK_UI, void=True)


def _f81ad(rnd):
    s = newpc(rnd)
    s['newPC.ItemCount'] = rnd.randint(0, 5)
    return s, []


pcmk_81ad = Spec('WPCMK', 0x81ad, _f81ad, PCMK_UI, void=True)


def _f55ad(rnd):
    masks = [''.join(rnd.choice('01') for _ in range(n)) for n in (10, 7, 5, 8)]
    raw, ptrs, o = {}, [], SCRATCH
    for m in masks:
        raw[o] = m.encode() + b'\0'
        ptrs.append(o)
        o += 16
    return newpc(rnd), [int(c) for m in masks for c in m], ptrs, raw


pcmk_55ad = Spec('WPCMK', 0x55ad, _f55ad, PCMK_UI, void=True)
pcmk_66ea = Spec('WPCMK', 0x66ea, lambda r: (lambda k: (newpc(r), [k], [k, SCRATCH]))(r.randint(0, 6)), PCMK_UI)
