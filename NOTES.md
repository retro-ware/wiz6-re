# Wizardry 6 (Bane of the Cosmic Forge) decomp notes

## Source
- GOG installer `gog/setup_wizardry6_2.2.0.18.exe`, extracted with innoextract to `gog/x/app/`.
- `orig/wroot.img` = WROOT.EXE without its 512-byte MZ header.
- File dates: most overlays 1991-02-17; WROOT.EXE 1996, WBASE.OVR 1998, WMEXE.OVR 2010 (later patches?).
- Ghidra 12.1.4: /opt/homebrew/Cellar/ghidra/12.1.4/libexec; MCP headless server: ~/tools/ghidra-mcp/run-headless.sh.
- Reference (data formats only): `ref/martydill`.

## Toolchain
- **Manx Aztec C86 4.2b (9/1989)**, small model: `tc/aztec42b/dl/AztecC86` (BIN, LIB, INCLUDE; no lib sources).
  Its C.LIB `$begin` matches WROOT's startup byte for byte except relocation slots.
- Aztec 5.2A (`tc/aztec52a`, has lib *sources* in x/d5) does NOT match: its begin calls `_exitinit_`
  and exits via `push ax; call _exit_`. Use its sources only as a reading aid.
- Aztec .o/.LIB are not OMF; format decoded in `tools/aztobj.py` (validated: all 140 C.LIB modules
  give the header's code/data sizes). 4.2b ships OBD.EXE (object dump), LB.EXE (librarian), AZ2OMF.EXE.
  Local labels are 0-based (`.0`, `.1` …) and also appear as absolute words in switch tables.
- **Compiler flags: `cc -n`** (default codegen; -n only drops sdb debug records). The tools report
  Pass1 4.10d 10-25-88, Pass2 4.10d, AS 4.10d, LN/OBD/LB 4.10c. First two root functions (0000-00EA,
  incl. a 22-case jump-table switch) match byte for byte (work/flags/T.C).
- Codegen notes: `if (long)` tests high word then low; long args pushed high then low; switch →
  `mov ax,x; jmp test` at the top, `cmp ax,N; jnb default; xchg ax,bx; shl bx,1; jmp cs:[bx+tbl]` at the end.

## WROOT.EXE
- Not packed. 1 relocation. Entry 0000:4072 ($begin), SS=0FD8 SP=AFEE. Image 66622 bytes.
- Layout: root code 0000:0000-4572; overlay code area 4572-FD80 (zero-filled in file);
  DGROUP at para 0FD8: 0x6BE bytes init data, BSS to 4FEE, overlay data/bss from 4FEE, stack top AFEE.
- RTL (4.2b C.LIB, 22 modules, contiguous): 37FA bdos, csread, sprintf, movblock, setmem, strcat,
  strcpy, lmalloc, malloc, format, open, lsubs, strlen, sys, sbegin (406E), croot, io, ttyio, movmem,
  isatty, ssbrk -> 4572. Game code = 0000-37FA. Overlays end with their own copies (strcmp, swapmem,
  atol, strncpy). Scan: `tools/rtlscan.py LIB...` -> work/rtl42b.txt.

## Overlays (Aztec overlay format)
Header, 7 words: magic 00F2, code base 4572, code size, data base 4FEE, data size, bss size, ? (checksum?).
Code at file offset 14; file length = 14 + code + data. Entry = code base (4572).

## Ghidra
- `tools/ghidra/Wiz6Setup.java` (pre-script): splits the raw image, adds BSS/STACK, adds each OVR as
  overlay blocks `<NAME>_C` at 0000:4572 and `<NAME>_D` at 0FD8:4FEE.
- Project `ghidra/wiz6` (program wroot.img). Rebuild:
  `analyzeHeadless ghidra wiz6 -overwrite -import orig/wroot.img -loader BinaryLoader -loader-baseAddr 0000:0000
   -processor "x86:LE:16:Real Mode" -scriptPath tools/ghidra -preScript Wiz6Setup.java gog/x/app`

## Tools
- `tools/dosrun.sh DIR "cmd" ...` runs DOS commands in DOSBox-X (C: = DIR, D: = Aztec 4.2b, PATH/INCLUDE/CLIB set).
- `tools/cmpobj.py FILE.O ROOT|WMAZE|... ADDR` compares a compiled object with the original at ADDR
  (own labels resolved, external fixups masked).
- Batch loops in DOSBox: put `for %%f in (...) do call x.bat %%f` in a .BAT; redirect inside x.bat.

## Linking (blob relink: all 12 files byte-identical, `tools/build.sh`)
- Root: `ln -R -t +C b80e +D 2000 -o wroot.exe root.o d:\lib\ovld.o -lc` (-R writes WROOT.RSM for the
  overlays, -t a .SYM map; +C/+D reserve overlay code/data space, hex).
- Overlay: `ln -o X.ovr X.o d:\lib\ovbgn.o wroot.rsm -lc`. OVR header word 7 = entry ($ovbgn).
  `ovmain_` is the first game function except in WMEXE (0x7230; the 2010-dated file).
- ln reserves 2 bytes at DS:0; game root data = DS 0002-0636. Lib data follows in module order
  (ovld, malloc, sbegin @065E, croot, stksiz, io, ttyio -> 06BE).
- BSS: all modules' *static* (local) BSS first, in module order (ovld's ovname_ at 06BE), then
  uninitialized globals (sym type 7, flags 0x4a, value = size). ln allocates commons in the order it
  first *meets each name* (an extern reference in an earlier module counts), so bss.o goes first in
  link.lst. cc writes its own commons in hashed order: emit them from `#asm` as
  `global gXXXX_:byte,N` lines (as keeps source order). ln word-aligns even-sized commons, so a cut at
  an odd address splits off a 1-byte common first (tools/promote.py).
  Game root globals: 07D2-4FEC; _TTrem_ (ttyio) at 4FEC.
- Duplicate `int x;` in two modules = "multiply defined" (no common merging).
- Overlay data = game data, then OVBGN's 10 bytes, then lib tail data (atol pulls ctype: 0x82 bytes).
- Game root never touches library data directly; it calls 19 lib functions. 70 root addresses are
  called from overlays (published as fn_XXXX by the blob).
- Blob generators: tools/mkroot.py, tools/mkovl.py (shared: tools/blobutil.py; object writer in aztobj.py).

## Per-function build (`tools/sbuild.sh`; all 12 files byte-identical)
- src/IMG/fXXXX.c per function (asm skeleton from tools/skel.py, or lifted C), data.c (#asm db blob
  with public gXXXX_ labels), bss.c (#asm globals), link.lst (bss.o, data.o, functions).
- DOSBox-X automation: `quit warning=false` and `timeout -s KILL` (SIGTERM pops a modal quit dialog).

## Lifter (asm -> C): tools/lift.py (statements), cprint.py (C text), liftloop.py (compile/compare)
- Loop: lift every function, cc it, compare the object with the original (cmpobj), demote the
  statements behind errors/mismatches to #asm, repeat. State in work/lift/IMG/state.json; matching
  C is copied into src/ by tools/promote.py (which also regenerates data.c/bss.c labels).
- cgen facts the lifter relies on (probed in work/probe/T):
  - x*K by constant: strength-reduced to mov dx,ax / shl / add / sub (printed back as `x * K`).
  - x+1..x+3 -> inc ax (x3), x+4 -> add ax,4.
  - `c = a<b ? A : B` with simple values: `mov ax,B; cmp; jcc L; mov ax,A; L:`; complex arms use
    `jcc T; ...; jmp J; T: ...; J:`. `&&` conditions jump each failing test to the false arm.
  - Registers are cached across statements and labels (bx = &array[i] reused); the lifter keeps
    register state and meets it at labels (all incoming edges must be known and agree).
  - Local arrays: `add bx,bp; [bx-d]`. Scalars right above an array are its elements.
  - `(unsigned char)(expr)` on a word: `sub ah,ah`. Opcode 98/99 are cbw/cwd (capstone says cwde/cdq).
  - `x << 8` on a word: `xchg ah,al; sub al,al`.
  - Longs (dx:ax): load `mov ax,X; mov dx,X+2`, store `mov [X+2],dx; mov [X],ax`; `(long)int` = cwd;
    shifts `mov cx,N; L: shl ax,1; rcl dx,1; loop L`; add/adc, sub/sbb pairs; relational compare
    `cmp H; jS F; jne T; cmp L; jU T; F:`, equality `cmp H; jne X; cmp L; X: je/jne T`; / % via
    helpers $ldv $lrm $lud $lum (dx:ax op bx:cx); long args pushed `push dx; push ax`.
  - Frame: the prologue/epilogue are `ifdef $20004` etc. (first function of a file: $20001 locals,
    $20002 di, $20003 si, $20004 bp). cgen drops bp if the C never touches a param/local (e.g. params
    read only inside #asm); the printer then emits `#asm $20004 equ 1 #endasm`. An unused local
    still costs `add sp,-2`, and dummy param references emit code.
  - The epilogue is placed at the first `return`; later returns `jmp` to it. At the end of the
    function cgen adds `jmp epilogue` only if it thinks the end is reachable (after #asm: always),
    and the epilogue itself if no return came before. A final #asm `jmp T` is therefore printed as
    C (`goto T` / `return`). cgen emits code for unreachable statements (dead `jmp` after a switch).
  - A regvar assigned while call args are pushed: `f(a, (si = x))`.
  - A label must be followed by a statement (`L: ;` before #asm), else ERROR 69.
  - cgen's reachability ignores jumps inside #asm: code reached only from an asm jump needs a C label
    (else no epilogue after a final goto). A label on the epilogue after a C return adds a stray jmp.
  - Ternary `c ? A : B`: `mov ax,B; <test>; j!c skip; mov ax,A; skip:`. With `!x ? A : B` cgen uses
    the other shape (`j!c T; mov ax,A; jmp J; T: mov ax,B; J:`), so the first shape prints `x == 0`.
  - `(char *)g43a8[i] + rsi + 4` compiles to `mov bx,[bx+43a8]; [bx+si+4]`: a small disp on a loaded
    pointer is a field offset, not a global.
  - `cc -L500`: big functions otherwise stop with "Local table full!" (no code change).
  - as mis-resolves some short jumps to labels inside one #asm block: skel.py keeps in-block jumps raw.
  - as loses an extern now and then ("gXXXX_ is undefined", then a garbled "fXXXX_" at link). It depends
    on the whole symbol set incl. the module (file) name: the same source compiles as abc.c, fails as
    abcd.c, compiles as abcdefgh.c. A rename can trigger it; renaming one of the file's symbols
    (WMEXE fc66e: g3644 -> anim_cycle) clears it. sbuild catches it.
- Functions only reached through pointers and without a prologue are added by hand
  (x86dis.EXTRA_FUNCS; WPOPS 51c8). Changing the function list needs new skeletons + link.lst entry.
- Big switches can also compile to an inline `repne scasw` lookup in a cs: table (WMELE 4858): not lifted.
- Hand-written asm modules exist in the root (prologue saves ds/es, lcall thunks, port I/O): kept as asm.
