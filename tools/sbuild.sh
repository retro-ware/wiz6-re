#!/bin/bash
# sbuild.sh IMAGE... -- compile src/IMAGE/*.c in DOSBox-X and link it (ROOT first: overlays need WROOT.RSM).
# Output in build/IMAGE/ (log in LOG.TXT); compares the result with the original file.
cd "$(dirname "$0")/.."
fail=0
for img in "$@"; do
  b=build/$img
  rm -rf $b; mkdir -p $b
  cp src/$img/*.c src/$img/link.lst $b/
  for f in $b/*.c; do printf 'cc -n -L500 %s >> log.txt\r\n' $(basename $f); done > $b/COMP.BAT
  if [ $img = ROOT ]; then
    printf 'ln -R -t +C b80e +D 2000 -o wroot.exe -f link.lst d:\\lib\\ovld.o -lc >> log.txt\r\n' > $b/LINK.BAT
    out=WROOT.EXE
  else
    cp build/ROOT/WROOT.RSM $b/
    printf 'ln -o %s.ovr -f link.lst d:\\lib\\ovbgn.o wroot.rsm -lc >> log.txt\r\n' $img > $b/LINK.BAT
    out=$img.OVR
  fi
  tools/dosrun.sh $b "call comp.bat" "call link.bat" > /dev/null
  grep -iE 'error|undefined|multiply' $b/LOG.TXT | head -20
  if cmp -s $b/$out gog/x/app/$out; then echo "OK   $out"; else echo "DIFF $out"; fail=1; fi
done
exit $fail
