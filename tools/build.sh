#!/bin/bash
# Full build: compile the C modules, generate blob objects for the rest, link WROOT.EXE +
# overlays with Aztec 4.2b ln, compare with gog/.
set -e
cd "$(dirname "$0")/.."
OVLS="WBASE WDOPT WINIT WMAZE WMELE WMEXE WMNPC WPCMK WPCVW WPOPS WTREA"
mkdir -p build
rm -f build/*.O build/*.OVR build/WROOT.EXE
cp src/root/*.C build/
cmds=()
for f in src/root/*.C; do cmds+=("cc -n $(basename "$f")"); done
tools/dosrun.sh build "${cmds[@]}" | grep -iE 'error|warning' || true
python3 tools/mkroot.py
for n in $OVLS; do python3 tools/mkovl.py $n; done
{
  printf 'ln -R -t +C b80e +D 2000 -o wroot.exe %s d:\\lib\\ovld.o -lc\r\n' "$(cat build/ROOT.LNK)"
  for n in $OVLS; do printf 'ln -o %s.ovr %s.o d:\\lib\\ovbgn.o wroot.rsm -lc\r\n' $n $n; done
} > build/LINK.BAT
tools/dosrun.sh build "call link.bat" | grep -E 'ERROR|Undefined|multiply|Multiply' || true
fail=0
for f in WROOT.EXE $(for n in $OVLS; do echo $n.OVR; done); do
  if cmp -s build/$f gog/x/app/$f; then echo "OK   $f"; else echo "DIFF $f"; fail=1; fi
done
exit $fail
