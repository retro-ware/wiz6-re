"""Treasure, NPC and monster-action (WTREA, WMNPC, WPOPS) case specs."""
import layout as L
from emu import scenario_record
from specs import pick, Spec, STUB_FX, SCRATCH
from specs_combat import base, rich, MONSTERS, ITEMS

L.OVL_GLOBALS.setdefault('WPOPS', {}).update({   # overlay BSS: per overlay (it aliases WMEXE's)
    'wpopsTargetTaken': (0x5043, '[64]uint8'),   # WPOPS g5043
})

# WPOPS overlay functions that only draw, animate, wait or poll input.
POPS_UI = ()


def _pops(rnd):
    s = rich(rnd)
    if rnd.random() < 0.5:
        s['monsterGroups[6].Count'] = 0
    for g in range(7):
        for i in range(9):
            c = 'monsterGroups[%d].Members[%d].' % (g, i)
            s[c + 'B41'] = pick(rnd, -3, 10, (-128, 127))
            s[c + 'B35[1]'] = rnd.choice([0, 0, 1, -1])
        s['monsterGroups[%d].Members[0].Condition' % g] = 0   # a living target (the C loops otherwise)
    return s


pops_8a45 = Spec('WPOPS', 0x8a45, lambda r: (_pops(r), []), POPS_UI, void=True)


def _f5dbb(rnd):
    s = _pops(rnd)
    for k in range(64):
        s['wpopsTargetTaken[%d]' % k] = rnd.choice([0, 0, 1])
    g = rnd.randint(1, 6)
    placed = rnd.random() < 0.8
    for i in range(9):
        r, c = rnd.randint(0, 1), rnd.randint(0, 4)
        s['monsterGroups[%d].Members[%d].Pos' % (g, i)] = r * 10 + c if placed else -1
        if placed:
            s['viewPosGroup[%d][%d]' % (r, c)] = g   # the C loops if no member is in view
    return s, [rnd.randint(0, 5), g]


pops_5dbb = Spec('WPOPS', 0x5dbb, _f5dbb, POPS_UI)


# --- WTREA
L.OVL_GLOBALS.setdefault('WTREA', {}).update({
    'chestTrap': (0x5192, 'int16'),
    'lootItem': (0x51d6, '[6]int16'),
    'lootQty': (0x51e2, '[6]int16'),
    'lootIcon': (0x525a, '[6]int16'),
    'lootWeight': (0x5268, '[6]int16'),
    'lootImportant': (0x5274, '[6]int16'),
    'lootCount': (0x5266, 'int16'),
    'trRow': (0x50c8, 'int16'),
    'trChestOpen': (0x501e, 'int16'),
    'trTrapAnim': (0x5028, 'int16'),
    'trTrapMember': (0x502a, 'int16'),
})
L.GLOBALS.update({
    'treasureID': (0x43c4, 'int16'),
    'returnCmd': (0x4fce, 'int16'),
    'gameState': (0x363a, 'int16'),
    'gameStateArg': (0x363c, 'int16'),
})

TREA_UI = (0x45b8, 0x45de, 0x4695, 0x4811, 0x48df, 0x4950, 0x4a03, 0x4a31, 0x4b36, 0x4bb5,
           0x4c2f, 0x4cd5, 0x4db6, 0x5097, 0x512e, 0x5169, 0x5604, 0x5649, 0x59e9,
           0x6a40, 0x74a4, 0x74cd, 0x74f6, 0x7549, 0x75c7, 0x75ed, 0x76c0, 0x78aa, 0x796a,
           0x8848, 0x88a9, 0x8952, 0x90d4, 0x9105, 0x9cd3)
NOCHEST = [i for i in range(300) if scenario_record(7, i)[39] == 0]


def _trea(rnd):
    s = _party(rnd)
    s['trRow'] = rnd.randint(0, 4)
    return s


def _party(rnd):
    s = rich(rnd)
    s['gameStateArg'] = rnd.randint(0, 13)
    for m in range(6):
        p = 'party[%d].' % m
        s[p + 'Exp'] = rnd.randint(0, 100000)
        s[p + 'Gold'] = rnd.randint(0, 100000)
        s[p + 'SwagCount'] = rnd.choice([0, rnd.randint(0, 12), 12])
        for k in range(10, 10 + s[p + 'SwagCount']):
            iid = rnd.choice(ITEMS)
            rec = scenario_record(1, iid)
            q = p + 'Items[%d].' % k
            s[q + 'ID'], s[q + 'Type'], s[q + 'Qty'] = iid, rec[60], pick(rnd, 1, 20, (0, 250))
    return s


trea_5f49 = Spec('WTREA', 0x5f49, lambda r: (_trea(r), [r.randint(0, 15), r.randint(0, 5)]), TREA_UI, void=True)


def _f66b1(rnd):
    traps = bytes(rnd.choice([0, 0, rnd.randint(0, 255)]) for _ in range(3))
    return _trea(rnd), list(traps), [SCRATCH], {SCRATCH + 36: traps}


trea_66b1 = Spec('WTREA', 0x66b1, _f66b1, TREA_UI, void=True)


def _f8583(rnd):
    s = _trea(rnd)
    for k in range(6):
        iid = rnd.choice(ITEMS)
        if rnd.random() < 0.4:     # one the member has
            m = rnd.randint(0, 5)
            n = s.get('party[%d].ItemCount' % m, 0)
            if n:
                iid = s['party[%d].Items[%d].ID' % (m, rnd.randint(0, n - 1))]
        s['lootItem[%d]' % k] = iid
        s['lootQty[%d]' % k] = pick(rnd, 1, 50, (0, 250, 255))
    return s, [rnd.randint(0, 5), rnd.randint(0, 5)]


trea_8583 = Spec('WTREA', 0x8583, _f8583, TREA_UI)


def _f9ab6(rnd):
    s = _trea(rnd)
    s['combatGold'] = pick(rnd, 0, 100000, (0, 0x7fffffff, -1))
    s['party[0].Condition'] = 0
    return s, []


trea_9ab6 = Spec('WTREA', 0x9ab6, _f9ab6, TREA_UI, void=True)


def _f9601(rnd):
    s = _trea(rnd)
    s['treasureID'] = rnd.choice(NOCHEST)
    s['returnCmd'] = rnd.choice([0, 5, 15])
    return s, []


trea_9601 = Spec('WTREA', 0x9601, _f9601, TREA_UI, void=True)


# --- WMNPC
_wares = {}
for _i in range(30):
    _wares.update({'npcWares[%d].ID' % _i: (0x5856 + 2 * _i, 'int16'),
                   'npcWares[%d].Type' % _i: (0x56d0 + _i, 'uint8'),
                   'npcWares[%d].Qty' % _i: (0x56ee + 2 * _i, 'int16'),
                   'npcWares[%d].Icon' % _i: (0x572a + _i, 'uint8'),
                   'npcWares[%d].Class' % _i: (0x5748 + 2 * _i, 'uint16'),
                   'npcWares[%d].Race' % _i: (0x5784 + 2 * _i, 'uint16'),
                   'npcWares[%d].Sex' % _i: (0x57c0 + _i, 'uint8'),
                   'npcWares[%d].Price' % _i: (0x57de + 4 * _i, 'int32')})
L.OVL_GLOBALS.setdefault('WMNPC', {}).update(_wares, **{
    'npcRec': (0x5146, 'NPCRec'),
    'npcID': (0x5274, 'int16'),
    'npcCharm': (0x52d0, 'int16'),
    'npcPilfered': (0x5892, 'int16'),
    'npcGoldGiven': (0x52cc, 'int32'),
    'npcShowGold': (0x527a, 'int16'),
    'npcLeaves': (0x5276, 'int16'),
    'npcTarget': (0x5322, 'int16'),
    'npcFlags': (0x5278, '[2]uint8'),
    'dtWareCount': (0x54b2, 'int16'),      # npcWareList (a Go slice): the test copies it
    'dtWareList': (0x54b4, '[30]int16'),
})

MNPC_UI = (0x4572, 0x46b8, 0x49db, 0x4ecb, 0x4f73, 0x5078, 0x541a, 0x5488, 0x5508, 0x55dc,
           0x5690, 0x56a1, 0x578c, 0x57ac, 0x5994, 0x5a1e, 0x5a69, 0x5af3, 0x5b21, 0x5d0c,
           0x62ee, 0x6d9d, 0x6de9, 0x6e0e, 0x97c6, 0x9827, 0x9a42, 0x9fcf, 0xa378, 0x8a3e,
           0x8ce8, 0xd53a, 0xc7d9)
NPCS = list(range(32))
REACTS = [i for i in NPCS if any(scenario_record(5, i)[16 + 6 * k + 4] for k in range(8))]


def _mnpc(rnd):
    s = _party(rnd)
    nid = rnd.choice(NPCS)
    s['npcID'] = nid
    s.update(L.decode('NPCRec', scenario_record(5, nid), 'npcRec'))
    s['npcRec.Gold'] = pick(rnd, 0, 5000, (0, 0x7fffffff))
    s['npcCharm'] = pick(rnd, -20, 20, (32767, -32768))
    s['npcPilfered'] = pick(rnd, 0, 50, (0, 200))
    s['npcFlags[0]'], s['npcFlags[1]'] = rnd.randint(0, 255), rnd.randint(0, 255)
    s['npcGoldGiven'] = pick(rnd, 0, 5000, (0,))
    for m in range(6):
        s['party[%d].NPCAttitude[%d]' % (m, nid)] = pick(rnd, -100, 100, (-128, 127))
    n = 0
    for i in range(30):
        iid = rnd.choice(ITEMS) if rnd.random() < 0.7 else 0
        s['npcWares[%d].ID' % i] = iid
        rec = scenario_record(1, iid)
        s['npcWares[%d].Type' % i] = rec[60]
        s['npcWares[%d].Qty' % i] = pick(rnd, 1, 20, (0, -1, 250))
        s['npcWares[%d].Price' % i] = pick(rnd, 0, 5000, (0, 100000))
        if iid:
            s['dtWareList[%d]' % n] = i
            n += 1
    s['dtWareCount'] = n
    return s


npc_b805 = Spec('WMNPC', 0xb805, lambda r: (_mnpc(r), []), MNPC_UI, void=True, texts=True)


def _fa69b(rnd):
    s = _mnpc(rnd)
    return s, [rnd.randint(0, 5), rnd.randint(0, max(0, s['dtWareCount'] - 1))]


npc_a69b = Spec('WMNPC', 0xa69b, _fa69b, MNPC_UI, void=True, texts=True)
npc_b047 = Spec('WMNPC', 0xb047, lambda r: (_mnpc(r), [r.randint(0, 5)]), MNPC_UI, void=True, texts=True)


def _f7f76(rnd):
    s = _mnpc(rnd)
    kind = rnd.choice([1, 2, 3, 4, 6, 7, 10, rnd.randint(0, 12)])
    a = rnd.choice([0, rnd.choice(ITEMS), rnd.randint(0, 300)])
    if rnd.random() < 0.8:   # one of the NPC's reactions, so its script runs
        s['npcID'] = nid = rnd.choice(REACTS)
        s.update(L.decode('NPCRec', scenario_record(5, nid), 'npcRec'))
        es = [k for k in range(8) if s['npcRec.Entries[%d].B[2]' % k]] or [0]
        e = rnd.choice(es)
        kind = s['npcRec.Entries[%d].B[2]' % e]
        a = s['npcRec.Entries[%d].A' % e] if rnd.random() < 0.7 else 0
        s['npcGoldGiven'] = rnd.choice([0, 100000])
        return s, [rnd.randint(0, 5), kind, a] + [s['npcRec.Entries[%d].B[%d]' % (e, k)] * rnd.randint(0, 1) for k in (0, 1)]
    return s, [rnd.randint(0, 5), kind, a, rnd.choice([0, rnd.randint(0, 255)]), rnd.choice([0, rnd.randint(0, 255)])]


npc_7f76 = Spec('WMNPC', 0x7f76, _f7f76, MNPC_UI, texts=True)
npc_817e = Spec('WMNPC', 0x817e, lambda r: (_mnpc(r), [r.randint(0, 5), r.choice([50, 56, r.randint(0, 81)]), r.randint(1, 7), r.randint(0, 5)]), MNPC_UI, void=True, texts=True)
