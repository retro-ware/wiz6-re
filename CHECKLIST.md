# Wizardry 6 decomp checklist

## Setup
- [x] Extract GOG installer, isolate WROOT.EXE + 11 overlays
- [x] Identify toolchain: Aztec C86 4.2b (cc 4.10d), small model, `cc -n`
- [x] Ghidra project with root + overlays at their load addresses
- [x] Aztec object format parser/writer (tools/aztobj.py)
- [x] RTL fingerprint: root 36DC-4572 = OVLD + 21 C.LIB modules; overlay tails = OVBGN + lib copies
- [x] Blob relink of all 12 files byte-identical (tools/build.sh)

## Lifting infrastructure
- [x] Function list for root and every overlay (x86dis.Image.funcs: prologues + recursive call targets; 1061 functions)
- [x] Asm skeleton: every function as #asm in src/IMAGE/fXXXX.c, DATA.C, BSS.C; tools/sbuild.sh builds all 12 files byte-identical without blobs
- [~] Source-file (module) boundaries: moot for now (one file per function links identically)
- [x] Mixed build: C modules + blob modules in one link (src/root/MODS; first module R0000.C)
- [x] Automatic lifter (asm -> C) with compile/compare loop (tools/lift.py, cprint.py, liftloop.py)
- [x] Promotion of matching C into src/ with data/bss labels (tools/promote.py); build stays byte-identical
- [~] Lifter coverage: longs (dx:ax pairs, add/adc, shift loops, compare chains, $ldv/$lrm/$lud/$lum) done; long returns, string literals/data, struct-ish locals ("locals beyond frame") open
- [ ] Shrink #asm islands inside "ok" functions (raw statements left)

## Root (WROOT.EXE game code 0000-36DC)
- [~] all root C-able functions in C (38/105 ok; ~45 are hand-written asm: ds/es, lcall, in/out; 5 are frameless fragments on the caller's frame)

## Overlays (functions in C / total; all 12 files still byte-identical after promotion)
- [~] WINIT 15/16
- [x] WBASE 46/46 (570a needs cc -L500: "Local table full"; now used for every compile)
- [~] WMELE 57/60
- [~] WDOPT 67/69
- [~] WPCMK 74/75
- [x] WPOPS 61/61 (51c8 split off f511c: a frameless routine after its epilogue)
- [~] WTREA 79/84
- [~] WMAZE 123/128
- [x] WMEXE 92/92
- [~] WMNPC 133/139
- [~] WPCVW 99/101
- [x] Promoted run 1: 733 functions in C, sbuild all 12 OK
- [x] Promoted run 2 (global-array typing): 773 functions in C, sbuild all 12 OK
- [x] Promoted run 4 (overlapping locals, void-call flush): 797 functions in C (327 asm-free), sbuild all 12 OK
- [x] Promoted run 5 (signed tests vs 0, inc/dec flags): 801 functions in C (338 asm-free), sbuild all 12 OK
- [x] Promoted run 7 (long ops, embedded regvar '=', post-epilogue switch tables): 818 functions in C (329 asm-free), sbuild all 12 OK
- [x] Promoted run 8 (cwd of a pending call result, register remap after long stores): 819 functions in C, sbuild all 12 OK
- [x] Promoted run 9 (strength-reduced x*K on any operand): 821 functions in C (335 asm-free), sbuild all 12 OK
- [x] Promoted run 10 (x << 8, final asm jmp printed as C goto/return, raw in-block jumps): 828 functions in C (334 asm-free), sbuild all 12 OK
- [x] Promoted run 11 (frame kept via '$20004 equ 1' when params are read only in #asm): 839 functions in C (334 asm-free), sbuild all 12 OK
- [x] Promoted run 12 (unconsumed void calls flushed before the next statement): 843 functions in C (353 asm-free), sbuild all 12 OK
- [x] Promoted run 13 (WPOPS 51c8 split, dead trailing jmp as goto, label before #asm): 847 functions in C (354 asm-free), sbuild all 12 OK
- [x] Promoted run 16 (C labels where #asm jumps forward, incl. the epilogue when no C return placed it; lone final jmp as return): 860 functions in C (354 asm-free), sbuild all 12 OK
- [x] Promoted run 17 (overlapping locals merged into one char array; & of a merged member): 866 functions in C (357 asm-free), sbuild all 12 OK
- [x] Promoted WBASE 570a: 867 functions in C, sbuild all 12 OK
- [x] Promoted run 18 (cc -L500; arrays indexed with a folded negative constant): 868 functions in C (357 asm-free), sbuild all 12 OK
- [x] Promoted run 19 (no fall-through after a mid-function epilogue keeps jump register state): 868 functions in C (363 asm-free; 2887 #asm statements left inside ok functions), sbuild all 12 OK
- [x] Promoted run 21 (ternary arm order + 'x == 0 ?' form, struct fields via loaded pointers, (*(char **)x) parens): 869 functions in C (385 asm-free; 1911 #asm statements left), sbuild all 12 OK
- [x] Promoted run 22 (x*K through 'shl ax,cl'): 869 functions in C (417 asm-free; 1827 #asm statements left), sbuild all 12 OK
- [x] Promoted run 23 (nested ternaries; `rsi = a + b + c` stored twice): 869 functions in C (425 asm-free), sbuild all 12 OK
- [x] Promoted run 25 (nested ternaries/boolean chains inside ternary arms; liftloop stops when a demote makes no progress): 870 functions in C (437 asm-free), sbuild all 12 OK
- [x] Readable names: names/*.json for every image (676 functions, 149 globals, docs, params/locals), applied by tools/render.py; build stays byte-identical
- [x] Promoted run 27 (scratch si/di index registers, with a register-variable retry when the prologue differs; `break` for returns in a switch right before the epilogue): 884 functions in C (472 asm-free), sbuild all 12 OK
- [x] Promoted runs 28/29 (struct-by-value call arguments; `char == -1` byte compares): 884 functions in C (475 asm-free), sbuild all 12 OK
- [x] Promoted run 30 (value-scan `repne scasw` switches): 889 functions in C (479 asm-free), sbuild all 12 OK

## Finish
- [x] Build needs no original files: a copy of only src/ + tools/ (no gog/, orig/, work/) builds all 12 byte-identical
- [~] Smoke test: rebuilt WROOT.EXE + overlays over the GOG data boot headless in DOSBox-X and stay running (no crash to DOS in 25 s); not played interactively (files are byte-identical to the originals)
