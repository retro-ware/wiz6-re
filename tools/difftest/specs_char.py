"""Character (WPCMK, WPCVW, WBASE, root helpers) case specs."""
import layout as L
from specs import pick, Spec, STUB_FX, SCRATCH
from specs_combat import ITEMS

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


# ---- WPCVW: character view, level up, equipping
PCVW_UI = (0xe8b6, 0x8817, 0x8891, 0x8d3a, 0x93f8, 0x54ab, 0xb1e5, 0x53fa, 0x49c9, 0x6ac3,
           0x4ca8, 0x48e8, 0x8dd4, 0x8ea4, 0x9fa8, 0xa8ab, 0xa78d, 0xd331, 0x8937, 0x4595, 0x45d0)


def _choose_spell(m):
    """choose_spell stub: the lowest spell set in the member's known spells (learn_new_spell
    sets them to the offered ones)."""
    b = m.rd(0x43e8 + 432 * m._arg(2) + 0x188, 12)
    bits = [i for i in range(82) if b[i >> 3] >> (i & 7) & 1]
    m.stub_ret[0x780a] = bits[0] if bits else -1


STUB_FX['WPCVW'] = {0x780a: _choose_spell}
PCVW_UI += (0x780a,)


def party6(rnd):
    s = {}
    for m in range(6):
        s.update(pc(rnd, 'party[%d]' % m))
        p = 'party[%d].' % m
        s[p + 'MaxLoad'] = pick(rnd, 1, 3000, (1, 32767))
        n = s[p + 'ItemCount'] = pick(rnd, 1, 10, (1, 10))
        s[p + 'SwagCount'] = pick(rnd, 1, 12, (1, 12))
        for k in range(8):
            s[p + 'Equipped[%d]' % k] = rnd.choice([255, 255, rnd.randint(0, n - 1)])
        for k in range(22):
            s[p + 'Items[%d].ID' % k] = rnd.choice(ITEMS)
            s[p + 'Items[%d].Type' % k] = rnd.randint(0, 17)
            s[p + 'Items[%d].Icon' % k] = rnd.choice([11, 12, 13, 22, 23, 83, rnd.randint(0, 100)])
            s[p + 'Items[%d].Qty' % k] = pick(rnd, 0, 20, (0, 1, 255))
    s['partyCount'] = rnd.randint(1, 6)
    for c in range(14):
        s['pvClassAllowed[%d]' % c] = rnd.randint(0, 1)
    return s


def mkp(args, cargs=None):
    def make(rnd):
        m = rnd.randint(0, 5)
        st = party6(rnd)
        a = args(rnd, m, st)
        return (st, a) + ((cargs(a),) if cargs else ())
    return make


M = lambda r, m, s: [m]
win2 = lambda a: [0, 0] + a     # sheet, menu window pointers first in the C
pcvw_f6e6 = Spec('WPCVW', 0xf6e6, mkp(M), PCVW_UI, void=True)
pcvw_f568 = Spec('WPCVW', 0xf568, mkp(M, win2), PCVW_UI, void=True)
pcvw_ed21 = Spec('WPCVW', 0xed21, mkp(M, win2), PCVW_UI, void=True)
pcvw_eff8 = Spec('WPCVW', 0xeff8, mkp(M), PCVW_UI, void=True)
pcvw_ea8d = Spec('WPCVW', 0xea8d, mkp(M), PCVW_UI, void=True)
pcvw_ea25 = Spec('WPCVW', 0xea25, mkp(lambda r, m, s: [m, pick(r, 0, 25, (0, 255)), r.choice([1, 2, 3, 4]), r.choice([1, 2, 3]), r.randint(0, 29)]), PCVW_UI)
pcvw_f201 = Spec('WPCVW', 0xf201, mkp(M), PCVW_UI, void=True)
pcvw_c8c2 = Spec('WPCVW', 0xc8c2, mkp(lambda r, m, s: [m, r.randint(0, 7)], lambda a: a + [SCRATCH]), PCVW_UI)
pcvw_cdb3 = Spec('WPCVW', 0xcdb3, mkp(M), PCVW_UI, void=True)
pcvw_c726 = Spec('WPCVW', 0xc726, mkp(M), PCVW_UI, void=True)
pcvw_5370 = Spec('WPCVW', 0x5370, mkp(M), PCVW_UI, void=True)
pcvw_a1f9 = Spec('WPCVW', 0xa1f9, mkp(M), PCVW_UI, void=True)
pcvw_76ee = Spec('WPCVW', 0x76ee, mkp(lambda r, m, s: [m, r.randint(0, 6)], lambda a: a + [SCRATCH]), PCVW_UI)
pcvw_5c24 = Spec('WPCVW', 0x5c24, mkp(lambda r, m, s: [m, r.randint(0, 1)]), PCVW_UI, void=True)
pcvw_5d5b = Spec('WPCVW', 0x5d5b, mkp(lambda r, m, s: [m, r.randint(0, s['party[%d].ItemCount' % m] - 1)]), PCVW_UI, void=True)
pcvw_5ec7 = Spec('WPCVW', 0x5ec7, mkp(lambda r, m, s: [m, r.randint(0, s['party[%d].SwagCount' % m] - 1)]), PCVW_UI, void=True)
pcvw_5f53 = Spec('WPCVW', 0x5f53, mkp(lambda r, m, s: [m, r.randint(0, s['party[%d].ItemCount' % m] - 1)]), PCVW_UI, void=True)
pcvw_6aec = Spec('WPCVW', 0x6aec, mkp(lambda r, m, s: [pick(r, 0, 50, (0, -1)), pick(r, -100, 100, (0, 32767, -32768)), r.choice([0, 1, 2])]), PCVW_UI)


def _a11b(rnd):
    s = party6(rnd)
    t = ''.join(chr(65 + rnd.randint(0, 20)) for _ in range(8))
    m, lower = rnd.randint(0, 5), rnd.randint(0, 1)
    return s, [m, lower] + [ord(c) - 65 for c in t], [m, SCRATCH, lower], {SCRATCH: t.encode() + b'\0'}


pcvw_a11b = Spec('WPCVW', 0xa11b, _a11b, PCVW_UI, void=True)


def _6b3c(rnd):
    s = party6(rnd)
    for k in range(6):
        s['partyCounters[%d].A' % k] = pick(rnd, 0, 500, (0, 32767, -1))
        s['partyCounters[%d].B' % k] = pick(rnd, 0, 100, (0, -1, 32767))
    for m in range(6):
        s['party[%d].Condition' % m] = rnd.choice([0, 0, 2, 3, rnd.randint(0, 8)])
    a = [rnd.randint(0, 5), rnd.choice([53, 68, 41, 30, 38, 70, 10, 15, 26, 46, 57, 51, 64, 77, 80, 81, 73, rnd.randint(0, 81)]),
         pick(rnd, 1, 7, (0, 1, 7, 255)), rnd.randint(0, 5)]
    if a[1] == 54:     # choose_item: UI
        a[1] = 53
    return s, a, a + [0, 0]


pcvw_6b3c = Spec('WPCVW', 0x6b3c, _6b3c, PCVW_UI, void=True)


def _8353(rnd):
    s = party6(rnd)
    m = rnd.randint(0, 5)
    s['party[%d].SpellsLearn[0]' % m] = s['party[%d].SpellsLearn[1]' % m] = 1
    a = [m, rnd.randint(0, 3)]
    return s, a, [0, 0] + a


pcvw_8353 = Spec('WPCVW', 0x8353, _8353, PCVW_UI, void=True)
pcvw_a4b1 = Spec('WPCVW', 0xa4b1, mkp(lambda r, m, s: [m, r.randint(0, 10)]), PCVW_UI, void=True)
pcvw_a368 = Spec('WPCVW', 0xa368, mkp(lambda r, m, s: [m, r.randint(0, 13)]), PCVW_UI, void=True)
RECIPES = [(390, 396), (407, 407), (408, 408), (393, 440), (393, 441), (442, 441), (443, 440), (444, 446), (448, 405)]


def _9c8e(rnd):
    s = party6(rnd)
    m = rnd.randint(0, 5)
    p = 'party[%d].' % m
    n = s[p + 'ItemCount'] = rnd.randint(2, 10)
    a, b = rnd.sample(range(n), 2)
    if rnd.random() < 0.7:
        x, y = rnd.choice(RECIPES)
        if rnd.random() < 0.5:
            x, y = y, x
        s[p + 'Items[%d].ID' % a], s[p + 'Items[%d].ID' % b] = x, y
    for k in range(8):
        s[p + 'Equipped[%d]' % k] = rnd.choice([255, 255, rnd.randint(0, n - 1)])
    return s, [m, a, b], [0, m, a, b]


pcvw_9c8e = Spec('WPCVW', 0x9c8e, _9c8e, PCVW_UI)


# ---- WBASE: party management
BASE_UI = (0x6091, 0x5072, 0x4617, 0x469f, 0x473a, 0x4785, 0x47c0, 0x6be6, 0x63f7, 0x6475)


def base_party(rnd):
    s = {k: v for k, v in party6(rnd).items() if not k.startswith('pv')}
    s['partyCount'] = rnd.randint(1, 6)
    for m in range(6):
        s['memberPcfileIndex[%d]' % m] = rnd.randint(0, 15)
        s['memberPortrait[%d]' % m] = rnd.randint(0, 5)
    for k in range(16):
        s['rosterSlotUsed[%d]' % k] = rnd.randint(0, 2)
    return s


base_6b30 = Spec('WBASE', 0x6b30, lambda r: (lambda s: (s, [r.randint(0, s['partyCount'] - 1)]))(base_party(r)), BASE_UI, void=True)
base_6fd4 = Spec('WBASE', 0x6fd4, lambda r: (base_party(r), []), BASE_UI, void=True)
base_5190 = Spec('WBASE', 0x5190, lambda r: (base_party(r), [r.randint(0, 6)]), BASE_UI)


# ---- ROOT helpers (run in any overlay; the buffer is party[0].Skills, 30 bytes)
SKILLS0 = 0x43e8 + 0x134


def _bits(rnd):
    return {'party[0].Skills[%d]' % k: rnd.randint(0, 255) for k in range(30)}


def _bf(rnd, val=False):
    w = rnd.choice([1, 2, 3, 4, 5, 6, 7, 8])
    i = rnd.randint(0, (28 * 8 - w) // w)
    a = [i, w] + ([pick(rnd, 0, (1 << w) - 1, (-1, 255, 1 << w))] if val else [])
    return _bits(rnd), a, [SKILLS0] + a


root_09e2 = Spec('WPCMK', 0x09e2, lambda r: ({}, [pick(r, 1, 100, (0, 1, -1, 2, 32767, -32768, 1000))]))
root_2556 = Spec('WPCMK', 0x2556, lambda r: ({}, []))
root_2881 = Spec('WPCMK', 0x2881, lambda r: (lambda a: (_bits(r), a, [SKILLS0] + a))([r.randint(0, 239), r.randint(0, 1)]), void=True)
root_28af = Spec('WPCMK', 0x28af, lambda r: (lambda a: (_bits(r), a, [SKILLS0] + a))([r.randint(0, 239)]))
root_28da = Spec('WPCMK', 0x28da, lambda r: _bf(r, True), void=True)
root_2925 = Spec('WPCMK', 0x2925, _bf)
root_2962 = Spec('WPCMK', 0x2962, lambda r: ({}, [pick(r, 0, 65535, (0, -1, 32767, -32768)), r.randint(0, 15), r.randint(1, 15)]))
