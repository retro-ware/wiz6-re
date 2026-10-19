"""List function starts per image: 55 8B EC prologues + near call targets; flag disagreements."""
import os, sys, json
sys.path.insert(0, os.path.dirname(__file__))
from blobutil import insns, ovl, ovl_names, call_targets, ROOT_GAME_END, OVL_BASE, R

def game_code(name):
    if name == 'ROOT':
        return open(R + '/orig/wroot.img', 'rb').read()[:ROOT_GAME_END], 0
    hdr, code, _ = ovl(name)
    return code[:hdr[6] - OVL_BASE], OVL_BASE

out = {}
for name in ['ROOT'] + ovl_names():
    code, org = game_code(name)
    pro = set()
    i = code.find(b'\x55\x8b\xec')
    while i >= 0:
        pro.add(org + i); i = code.find(b'\x55\x8b\xec', i + 1)
    calls = set()
    for img in ['ROOT'] + ovl_names():
        c, o = game_code(img)
        if img != name and name != 'ROOT':
            continue
        for a, t in call_targets(c, o, (0xe8,)):
            if org <= t < org + len(code):
                calls.add(t)
    starts = sorted(pro)
    odd = sorted(calls - pro)
    print('%-6s %4d prologues, %4d call targets, %d call targets without prologue %s' %
          (name, len(pro), len(calls), len(odd), [hex(x) for x in odd[:10]]))
    out[name] = starts
json.dump(out, open(R + '/work/fn/funcs.json', 'w'))
