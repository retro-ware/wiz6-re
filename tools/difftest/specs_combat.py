"""Combat (WMEXE, WMELE) case specs."""
import layout as L
from emu import scenario_record
from specs import pick, Spec, STUB_FX, SCRATCH


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
    s['actMember'] = rnd.randint(0, 8)
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
        s[c + 'StaminaMax'] = rnd.randint(1, 100)
        s[c + 'Stamina'] = rnd.randint(0, s[c + 'StaminaMax'])
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
            s[c + 'StaminaMax'] = rnd.randint(1, 100)
            s[c + 'Stamina'] = rnd.randint(0, s[c + 'StaminaMax'])
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


STUB_FX['WMEXE'] = {0x774b: lambda m: m.w16(0x5116, 1)}   # combat_delay sets g5116


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


def fighter_addr(g, i):
    import layout as L
    return L.PTRS['monsterGroups'][3] + g * 416 + 44 * i


def _f7254(rnd):
    s = base(rnd)
    g, i = _gi(rnd)
    n = pick(rnd, 0, 50, (0, -1, 32767, -32768))
    return s, [g, i, n], [fighter_addr(g, i), n]


f4572 = Spec('WMEXE', 0x4572, mk(lambda r, g, i: [r.randint(0, 1), pick(r, 0, 200, (0, -1, 32767)), pick(r, 1, 200, (1, -1, 32767))]), MEXE_UI)
f77d4 = Spec('WMEXE', 0x77d4, lambda r: (dict(base(r), **{'party[%d].Level' % m: pick(r, 1, 20, (0, -1, 32767)) for m in range(6)},
                                              **{'party[%d].Skills[%d]' % (m, k): pick(r, 0, 100, (0, 99, 100, 127, 128, 255)) for m in range(6) for k in range(30)}),
                                         [r.randint(0, 5), r.randint(0, 29), pick(r, 0, 10, (0, -1, 100))]), MEXE_UI, void=True)
f7254 = Spec('WMEXE', 0x7254, _f7254, MEXE_UI, void=True)
f8861 = Spec('WMEXE', 0x8861, mk(lambda r, g, i: [pick(r, 0, 50, (0, -1)), pick(r, -100, 100, (0, 32767, -32768)), r.choice([0, 1, 2])]), MEXE_UI)
fc4e7 = Spec('WMEXE', 0xc4e7, mk(lambda r, g, i: [pick(r, 0, 5, (6,))]), MEXE_UI)
fc546 = Spec('WMEXE', 0xc546, mk(lambda r, g, i: [g, pick(r, 0, 8, (-1, 9))]), MEXE_UI)
f7816 = Spec('WMEXE', 0x7816, mk(lambda r, g, i: [r.randint(0, 81), pick(r, 1, 6, (0, -1))]), MEXE_UI)



MONSTERS = [i for i in range(256) if scenario_record(4, i)[0] >= 65]
ITEMS = [i for i in range(600) if len(scenario_record(1, i)) == 74 and scenario_record(1, i)[0] >= 65
         and all(32 <= c < 127 for c in scenario_record(1, i)[:16].split(b"\0")[0])
         and scenario_record(1, i)[60] < 18]   # the rest are not real items


def rich(rnd):
    """base() plus equipped party members and real monster records."""
    s = base(rnd)
    for m in range(6):
        p = 'party[%d].' % m
        for k in range(8):
            s[p + 'Stats[%d]' % k] = pick(rnd, 3, 20, (0, 1, 25, 255))
        for k in range(30):
            s[p + 'Skills[%d]' % k] = pick(rnd, 0, 60, (0, 100, 255))
        for k in range(8):
            s[p + 'AC[%d]' % k] = pick(rnd, 0, 10, (0, 255, 128))
        s[p + 'Level'] = pick(rnd, 1, 20, (0, 255))
        s[p + 'Class'] = rnd.randint(0, 13)
        s[p + 'Race'] = rnd.randint(0, 10)
        s[p + 'ToHit'] = pick(rnd, -5, 10, (-128, 127))
        s[p + 'MaxLoad'] = rnd.randint(1, 2000)
        s[p + 'Carried'] = rnd.randint(0, 2500)
        s[p + 'Stamina'] = rnd.randint(0, 100)
        s[p + 'StaminaMax'] = rnd.randint(1, 100)
        s[p + 'Condition'] = s['monsterGroups[0].Members[%d].Condition' % m] & 0xff
        n = rnd.randint(0, 10)
        s[p + 'ItemCount'] = n
        for k in range(n):
            iid = rnd.choice(ITEMS)
            rec = scenario_record(1, iid)
            q = p + 'Items[%d].' % k
            s[q + 'ID'] = iid
            s[q + 'Type'] = rec[60]
            s[q + 'Icon'] = rec[61]
            s[q + 'Qty'] = pick(rnd, 1, 20, (0, 255))
            s[q + 'Flags'] = rnd.choice([0, 1, 8, 9])
        for k in range(8):
            s[p + 'Equipped[%d]' % k] = rnd.randint(0, n - 1) if n and rnd.random() < 0.6 else 255
        for h in range(2):
            q = p + 'Hands[%d].' % h
            e = s[p + 'Equipped[%d]' % h]
            if e != 255:
                rec = scenario_record(1, s[p + 'Items[%d].ID' % e])
                s.update(L.decode('Dice', rec[24:28], q + 'Damage'))
                for k in range(8):
                    s[q + 'Data[%d]' % k] = rec[46 + k]
                s[q + 'B0C'], s[q + 'B0D'] = rec[65], rec[64]
                s[q + 'Flags'] = rec[72]
            else:
                s[q + 'Damage.Base'], s[q + 'Damage.Count'], s[q + 'Damage.Sides'] = 0, 2, 2
                s[q + 'Flags'] = rnd.choice([32, 96])
            s[q + 'ToHit'] = pick(rnd, -5, 10, (-128, 127))
    for g in range(1, 7):
        mid = rnd.choice(MONSTERS)
        s['monsterGroups[%d].MonsterID' % g] = mid
        s.update(L.decode('MonsterRec', scenario_record(4, mid), 'groupMonsterRec[%d]' % g))
    for k in range(6):
        s['partyCounters[%d].A' % k] = rnd.randint(0, 3)
        s['partyCounters[%d].B' % k] = rnd.randint(0, 3)
    s['initiative'] = rnd.randint(1, 100)
    s['g4fcc'] = rnd.choice([0] * 9 + [1])
    s['g4352'] = rnd.randint(0, 1)
    return s


def _f4c48(rnd):
    s = rich(rnd)
    ag = rnd.choice([0, 0, 0, 1, 2, 3, 6])
    am = rnd.randint(0, s['partyCount'] - 1) if ag == 0 else rnd.randint(0, 8)
    s['actGroup'], s['actMember'] = ag, am
    tg = rnd.choice([1, 2, 3]) if ag in (0, 6) else rnd.choice([0, 0, 6])
    a = 'monsterGroups[%d].Members[%d].' % (ag, am)
    s[a + 'B31'] = tg
    s[a + 'B32'] = rnd.randint(0, (s['partyCount'] if tg == 0 else 9) - 1)
    s[a + 'Condition'] = 0
    if ag == 0:
        s['party[%d].Condition' % am] = 0
    t = 'monsterGroups[%d].Members[%d].' % (tg, s[a + 'B32'])
    s[t + 'Condition'] = rnd.choice([0, 0, 0, 1, 2])
    s[t + 'Toggle'] = 0
    slot, kind = rnd.choice([0, 0, 1]), pick(rnd, 0, 8, (3, 4, 6, 8))
    if ag == 0 and kind == 4 and s['party[%d].Equipped[%d]' % (am, slot)] == 255:
        kind = 0   # throwing needs an item (the C would index item 255)
    return s, [slot, kind], [fighter_addr(ag, am), slot, kind]


f4c48 = Spec('WMEXE', 0x4c48, _f4c48, MEXE_UI, void=True)



def _f47a3(rnd):
    s, (slot, kind), (actor, _, _) = _f4c48(rnd)
    ag, am = s['actGroup'], s['actMember']
    a = 'monsterGroups[%d].Members[%d].' % (ag, am)
    g, i = s[a + 'B31'], s[a + 'B32']
    fx = [rnd.choice([0, 0, 0, rnd.randint(1, 100), 100, 255]) for _ in range(9)]
    return s, [g, i] + fx, [actor, SCRATCH, g, i], {SCRATCH + 4: bytes(fx)}


f47a3 = Spec('WMEXE', 0x47a3, _f47a3, MEXE_UI, void=True)


def actor_case(rnd):
    """rich() with an acting fighter aimed at a living target; returns (s, actor addr)."""
    s, _, (actor, _, _) = _f4c48(rnd)
    a = 'monsterGroups[%d].Members[%d].' % (s['actGroup'], s['actMember'])
    s[a + 'W10'] = pick(rnd, 0, 20, (0, 1, 81, -1))
    s[a + 'W12'] = pick(rnd, 0, 6, (0, 1))
    return s, actor


def on_actor(fn=lambda r, s: []):
    def make(rnd):
        s, actor = actor_case(rnd)
        extra = fn(rnd, s)
        return s, extra, [actor] + extra
    return make


f88b1 = Spec('WMEXE', 0x88b1, mk(lambda r, g, i: [g, _who(r, g), _mod(r), pick(r, 1, 30, (0, -1)), r.randint(0, 2)]), MEXE_UI, void=True)
f8bdb = Spec('WMEXE', 0x8bdb, mk(lambda r, g, i: [g, _who(r, g), pick(r, 1, 30, (0, -1)), _mod(r)]), MEXE_UI, void=True)
def _fc064(rnd):   # members 6-8: the C's try_raise_skill corrupts memory past party (Go skips it)
    while True:
        made = on_actor()(rnd)
        if made[0]['actMember'] < 6:
            return made
fc064 = Spec('WMEXE', 0xc064, _fc064, MEXE_UI, void=True)
fc1e4 = Spec('WMEXE', 0xc1e4, on_actor(), MEXE_UI, void=True)
fb934 = Spec('WMEXE', 0xb934, on_actor(), MEXE_UI)
def _cast(r, s):
    a = 'monsterGroups[%d].Members[%d].' % (s['actGroup'], s['actMember'])
    s[a + 'W10'] = pick(r, 1, 6, (0, 7)) << 8 | r.randint(0, 81)
    return []


def _use(r, s):
    a = 'monsterGroups[%d].Members[%d].' % (s['actGroup'], s['actMember'])
    if s['actGroup'] == 0:
        s[a + 'W10'] = r.randint(0, max(s['party[%d].ItemCount' % s['actMember']] - 1, 0))
    else:
        s[a + 'W10'] = pick(r, 1, 6, (0, 7)) << 8 | r.randint(0, 81)
    return []


fb03c = Spec('WMEXE', 0xb03c, on_actor(_cast), MEXE_UI)
fb44d = Spec('WMEXE', 0xb44d, on_actor(_use), MEXE_UI, void=True)
f9405 = Spec('WMEXE', 0x9405, on_actor(lambda r, s: [r.randint(0, 81), pick(r, 1, 6, (0, 7))]), MEXE_UI, void=True)
def _fc3ee(rnd):
    s = rich(rnd)
    s['actGroup'], s['actMember'] = 0, rnd.randint(0, s['partyCount'] - 1)
    return s, [s['actMember'], rnd.randint(0, s['partyCount'] - 1)]


fc3ee = Spec('WMEXE', 0xc3ee, _fc3ee, MEXE_UI, void=True)
f8fa8 = Spec('WMEXE', 0x8fa8, mk(lambda r, g, i: [r.choice(MONSTERS) for _ in range(6)] + [pick(r, 1, 6, (0, 7))]), MEXE_UI, void=True)


def _fc66e(rnd):
    """perform_action: the actor's statuses and chosen action (B24[6])."""
    s, _ = actor_case(rnd)
    a = 'monsterGroups[%d].Members[%d].' % (s['actGroup'], s['actMember'])
    for k in (1, 2, 3, 4, 6, 7, 8):
        s[a + 'Status[%d]' % k] = rnd.choice([0, 0, 0, 0, rnd.randint(1, 20)])
    s[a + 'Condition'] = rnd.choice([0, 0, 0, 0, 1, 2])
    act = rnd.choice([0, 0, 1, 2, 3, 3, 4, 4, 5, 6, 7, 8])
    s[a + 'B24[6]'] = act
    s[a + 'B33'] = rnd.randint(0, 3)
    s[a + 'B24[4]'], s[a + 'B24[5]'] = rnd.randint(0, 1), rnd.randint(0, 1)
    if act == 0:   # attack kinds index the 10 per-kind armour bytes
        s[a + 'W10'], s[a + 'W12'] = rnd.randint(0, 9), rnd.randint(0, 9)
    elif act == 3:
        _cast(rnd, s)
    elif act == 4:
        _use(rnd, s)
    elif act == 5:
        s[a + 'W10'] = rnd.randint(0, s['partyCount'] - 1)
        s['actGroup'] = 0
    if s['actGroup'] == 0:
        s['actMember'] = min(s['actMember'], 5)
    return s, []


fc66e = Spec('WMEXE', 0xc66e, _fc66e, MEXE_UI, void=True)


def _fd109(rnd):
    """run_combat_round: initiatives (B37) and per-slot initiative marks (B24[0..3])."""
    s = rich(rnd)
    s['gameState'] = 13
    for g in range(s['monsterGroupCount'] + 1):
        for i in range(6 if g == 0 else 9):
            a = 'monsterGroups[%d].Members[%d].' % (g, i)
            if a + 'Level' not in s:
                continue
            s[a + 'B35[1]'] = rnd.choice([0, 1, 1, 1])          # +36: acts this round
            s[a + 'B35[2]'] = rnd.choice([0, rnd.randint(1, 100)])  # +37
            s[a + 'B33'] = rnd.randint(0, 3)
            for k in range(4):
                s[a + 'B24[%d]' % k] = rnd.choice([0, rnd.randint(1, 100)])
            s[a + 'B24[6]'] = rnd.choice([0, 0, 1, 1, 5 if g == 0 else 1, 6, 7])
            s[a + 'W10'], s[a + 'W12'] = rnd.randint(0, 9), rnd.randint(0, 9)
            s[a + 'B24[4]'], s[a + 'B24[5]'] = rnd.randint(0, 1), rnd.randint(0, 1)
            if s[a + 'B24[6]'] == 5:
                s[a + 'W10'] = rnd.randint(0, s['partyCount'] - 1)
            s[a + 'Toggle'] = rnd.choice([0, 0, 0, 3])
    for g in range(1, s['monsterGroupCount'] + 1):
        for k in range(4):
            s['monsterGroups[%d].B402[%d]' % (g, k)] = rnd.choice([0, 0, 0, rnd.randint(1, 5)])
        s['monsterGroups[%d].B406' % g] = rnd.randint(1, 100)
    return s, []


fd109 = Spec('WMEXE', 0xd109, _fd109, MEXE_UI, void=True)
