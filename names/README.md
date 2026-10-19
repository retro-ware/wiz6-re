# Readable names

`names/IMAGE.json` (ROOT, WINIT, WBASE, WMELE, WDOPT, WPCMK, WPOPS, WTREA, WMAZE, WMEXE, WMNPC,
WPCVW) gives readable names to the symbols the generators print. Nothing in `src/` is edited by
hand: `tools/render.py` regenerates `src/` from the lift state with these names, and
`tools/sbuild.sh` must still print OK for all 12 images (names never change code bytes).

```json
{
  "func":  {"45d0": "draw_member_list"},
  "doc":   {"45d0": "Draw the party member list in a window, one 25-char row per member."},
  "data":  {"0526": "class_hp_table"},
  "local": {"45d0": {"p4": "win", "p6": "first", "l4": "row", "l409": "rows", "rsi": "i"}}
}
```

* Keys are the hex address in the current name (`f45d0` -> `"45d0"`, `g0526` -> `"0526"`).
* `local` keys are the current spelling inside that function: `pN` params, `lN` locals,
  `rsi`/`rdi` register variables. `xN` padding arrays are not named.
* `data` (globals) only in `ROOT.json`: the root and every overlay share one data segment.
  Proposals for globals from overlay work go to `names/proposed/IMAGE-data.json`, same format,
  to be merged into ROOT.json.
* Function names of the root are seen by all overlays: overlay names must not reuse them.
  Overlays may reuse each other's names (they are linked separately), but avoid it.

Conventions:

* snake_case, verbs for functions (`draw_`, `print_`, `get_`, `set_`, `is_`, `find_`,
  `load_`, `save_`, `handle_`, `do_`), nouns for data and variables.
* Only name what the code shows. A cautious accurate name beats a guess: `get_item_flags` over
  `get_cursed_flag` unless the code proves it. Unknown stays unnamed.
* A local must not reuse the name of a function or global the same function uses.
* Never C keywords or library names (strlen, open, ...): `tools/symnames.py` checks.
* `doc` is one line; it is printed as a comment above the function.

Check a file with:

    .venv/bin/python -c "import sys; sys.path.insert(0, 'tools'); import symnames; symnames.table()"
