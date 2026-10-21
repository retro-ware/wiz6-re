"""Per-function case specs: overlay, address, stubbed overlay functions, and make(rnd)
-> (state {field path: value}, args)."""


def pick(rnd, lo, hi, edges=()):
    """Mostly uniform in lo..hi, sometimes an edge value."""
    if edges and rnd.random() < 0.15:
        return rnd.choice(edges)
    return rnd.randint(lo, hi)


def cond(rnd):
    return 0 if rnd.random() < 0.6 else pick(rnd, 0, 5, (-1, 127, -128))


def base(rnd):
    """A combat: a party of 1..6 and 1..4 monster groups, with randomized fields."""
    s = {}
    pc = rnd.randint(1, 6)
    ng = rnd.randint(1, 4)
    s['partyCount'] = pc
    s['monsterGroupCount'] = ng
    s['g4fc8'] = pick(rnd, 0, 10, (0, 1, 3, 32767))
    s['actGroup'] = rnd.choice([0, 0, 1, 2, 3, 6])
    s['actMember'] = pick(rnd, 0, 8, (-1, 9))
    s['animCycle'] = rnd.randint(0, 2)
    for r in range(2):
        for c in range(5):
            s['viewPosGroup[%d][%d]' % (r, c)] = rnd.randint(0, ng)
            s['monsterJitterX[%d][%d]' % (r, c)] = rnd.randint(0, 7)
            s['monsterJitterY[%d][%d]' % (r, c)] = rnd.randint(0, 7)
            s['mexeEffect[%d][%d]' % (r, c)] = rnd.randint(-1, 3)
    for m in range(6):
        p = 'party[%d].' % m
        s[p + 'Sex'] = rnd.randint(0, 1)
        s[p + 'Kills'] = pick(rnd, 0, 500, (0, 0x7fffffff, -1))
        s[p + 'HP'] = pick(rnd, 0, 150, (0, -5, 32767))
        s[p + 'HPMax'] = pick(rnd, 1, 150)
        for k in range(14):
            s[p + 'Resist[%d]' % k] = pick(rnd, 0, 100, (0, 100, 255, 127, 128))
        c = 'monsterGroups[0].Members[%d].' % m
        s[c + 'HP'] = pick(rnd, 0, 150, (0, 1, -1, 32767, -32768))
        s[c + 'HPMax'] = s[p + 'HPMax']
        s[c + 'Condition'] = cond(rnd)
        s[c + 'Toggle'] = rnd.choice([0] * 10 + [1, -1])
        s[c + 'Pos'] = -1
        s[c + 'Level'] = pick(rnd, 1, 20)
        s[c + 'Stamina'] = rnd.randint(0, 100)
        for k in range(10):
            s[c + 'Status[%d]' % k] = rnd.choice([0, 0, 0, rnd.randint(1, 10), 240, 250, 255])
    for k in range(6):
        s['monsterGroups[0].B396[%d]' % k] = pick(rnd, 0, 100, (0, 127, -128, -1))
    s['monsterGroups[0].Count'] = pc
    for g in range(1, 7):
        gp = 'monsterGroups[%d].' % g
        cnt = rnd.randint(1, 9)
        s[gp + 'Count'] = cnt
        s[gp + 'B412'] = rnd.randint(0, 1)
        for i in range(9):
            c = gp + 'Members[%d].' % i
            s[c + 'Level'] = pick(rnd, 1, 20)
            s[c + 'HP'] = pick(rnd, 0, 200, (0, 1, -1, 32767, -32768))
            s[c + 'HPMax'] = pick(rnd, 1, 200)
            s[c + 'Condition'] = cond(rnd)
            s[c + 'Toggle'] = rnd.choice([0] * 10 + [1, -1])
            s[c + 'Pos'] = rnd.choice([-1, rnd.randint(0, 1) * 10 + rnd.randint(0, 4)])
            for k in range(4):
                s[c + 'B24[%d]' % k] = rnd.randint(-3, 9)
            s[c + 'Stamina'] = rnd.randint(0, 100)
            s[c + 'B35[1]'] = rnd.randint(-3, 9)
            s[c + 'B35[2]'] = rnd.randint(-3, 9)
            for k in range(10):
                s[c + 'Status[%d]' % k] = rnd.choice([0, 0, 0, rnd.randint(1, 10), 240, 250, 255])
        for k in range(6):
            s[gp + 'B396[%d]' % k] = pick(rnd, 0, 100, (0, 127, -128, -1))
    for g in range(7):
        r = 'groupMonsterRec[%d].' % g
        for k in range(14):
            s[r + 'Resist[%d]' % k] = pick(rnd, 0, 100, (0, 100, 255, 127, 128))
        s[r + 'Flags'] = rnd.randint(0, 255)
        s[r + 'Unk211[7]'] = rnd.randint(0, 159)
        s[r + 'Unk64'] = pick(rnd, 0, 2000, (-1, 32767))
        s[r + 'Unk66'] = pick(rnd, 0, 3, (-1, 0x7fff))
    return s


class Spec:
    def __init__(self, ovl, addr, make, stubs=(), void=False):
        self.ovl, self.addr, self.make, self.stubs, self.void = ovl, addr, make, stubs, void


# WMEXE overlay functions that only draw, animate, wait or poll input.
MEXE_UI = (0x774b,   # combat_delay
           0x765a,   # animate_step
           0x773a,   # reset_animation
           0x7353,   # draw_member_card_x
           0x7272,   # draw_gauge_x
           0x695e,   # play_spell_animation
           0x6339, 0x6742, 0x655c, 0x6239, 0x5fa0)  # sprite queues and drawing


def _f7ddc(rnd):
    s = base(rnd)
    g = rnd.choice([0, 0, 1, 2, 3, 4, 5, 6])
    i = rnd.randint(0, 5 if g == 0 else 8)
    args = [g, i, pick(rnd, 0, 10, (0, -1, 255)), pick(rnd, 0, 20, (0, 1, -1, 255)),
            pick(rnd, 0, 4, (0, -1, 3)), rnd.randint(0, 13), pick(rnd, -50, 50, (0, -128, 127))]
    if rnd.random() < 0.05:    # sums past 32767
        args[2:5] = [255, 255, rnd.randint(1, 3)]
    return s, args


f7ddc = Spec('WMEXE', 0x7ddc, _f7ddc, MEXE_UI)


def _gi(rnd):
    g = rnd.choice([0, 0, 1, 2, 3, 4, 5, 6])
    return g, rnd.randint(0, 5 if g == 0 else 8)


def _who(rnd, g):
    return rnd.choice([rnd.randint(0, 5 if g == 0 else 8), -rnd.randint(1, 10)])


def _mod(rnd):
    return pick(rnd, -50, 50, (0, -128, 127, -100))


def _cnt(rnd):
    return pick(rnd, 0, 8, (0, -1, 1))


def _sides(rnd):
    return pick(rnd, 0, 12, (0, 1, -1, 255))


def _base(rnd):
    return rnd.choice([0, 1, 5, 10, 255, rnd.randint(0, 20)])


def mk(fn):
    """Spec from an args function args(rnd, g, i)."""
    def make(rnd):
        s = base(rnd)
        g, i = _gi(rnd)
        return s, fn(rnd, g, i)
    return make


MSG = lambda rnd: rnd.randint(3400, 3500)
f7af7 = Spec('WMEXE', 0x7af7, mk(lambda r, g, i: [g, pick(r, 0, 300, (0, 1, -1, 32767, -32768)), r.randint(0, 13), _mod(r)]), MEXE_UI)
f7b59 = Spec('WMEXE', 0x7b59, mk(lambda r, g, i: [g, i, MSG(r), r.randint(0, 13), pick(r, 1, 5, (0, 3, 6, -1)), _mod(r), 6, 6, 3408, r.randint(0, 2)]), MEXE_UI, void=True)
f7c5a = Spec('WMEXE', 0x7c5a, mk(lambda r, g, i: [g, i, MSG(r), r.randint(0, 13), r.randint(0, 9), _mod(r), _cnt(r), _sides(r), _base(r), 3408, r.randint(0, 2)]), MEXE_UI, void=True)
f7848 = Spec('WMEXE', 0x7848, mk(lambda r, g, i: [g, i]), MEXE_UI, void=True)
f7a16 = Spec('WMEXE', 0x7a16, mk(lambda r, g, i: [g, i, MSG(r), r.randint(0, 2), r.randint(0, 12)]), MEXE_UI, void=True)
f8064 = Spec('WMEXE', 0x8064, mk(lambda r, g, i: [g, r.randint(0, 5), pick(r, 0, 30, (0, 1, -1, 255)), r.choice([10, 100, 1, 0])]), MEXE_UI)
f80cc = Spec('WMEXE', 0x80cc, mk(lambda r, g, i: [g, r.randint(0, 13), pick(r, 0, 30, (0, 1, -1, 255))]), MEXE_UI)
f8149 = Spec('WMEXE', 0x8149, mk(lambda r, g, i: [g, _who(r, g), _cnt(r), _sides(r), pick(r, 0, 3, (0, -1)), r.randint(0, 13), _mod(r)]), MEXE_UI, void=True)
f825f = Spec('WMEXE', 0x825f, mk(lambda r, g, i: [g, _who(r, g), MSG(r), r.randint(0, 13), r.randint(0, 9), _mod(r), r.randint(0, 2), _cnt(r), _sides(r), _base(r), 0, 0]), MEXE_UI, void=True)
f83f3 = Spec('WMEXE', 0x83f3, mk(lambda r, g, i: [g, _who(r, g), MSG(r), r.randint(0, 13), pick(r, 0, 3, (0, -1)), _mod(r), _cnt(r), _sides(r), r.randint(0, 9), r.randint(0, 2), _cnt(r), _sides(r), _base(r), 0, 0]), MEXE_UI, void=True)
f86aa = Spec('WMEXE', 0x86aa, mk(lambda r, g, i: [g, MSG(r), r.choice([5, 11, r.randint(0, 13)]), r.choice([3, r.randint(0, 9)]), _mod(r), r.randint(0, 2), _cnt(r), _sides(r), _base(r), 0, 0]), MEXE_UI, void=True)
