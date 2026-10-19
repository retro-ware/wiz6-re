#!/bin/sh
# Full relift: liftloop on every image, render src/, sbuild all 12; commit with message $1 only if
# every step succeeded and all 12 files are byte-identical.
cd "$(dirname "$0")/.." || exit 1
IMGS="ROOT WINIT WBASE WMELE WDOPT WPCMK WPOPS WTREA WMAZE WMEXE WMNPC WPCVW"
.venv/bin/python -c "import sys; sys.path.insert(0, 'tools'); import lift, cprint, liftloop, render" || exit 1
for d in $IMGS; do rm -rf "work/lift/$d"; done
printf '%s\n' $IMGS | xargs -P 4 -I{} sh -c 'timeout -s KILL 5400 .venv/bin/python tools/liftloop.py {} > work/{}.loop.log 2>&1'
tail -qn1 work/*.loop.log
n=$(grep -l ' functions, ' work/*.loop.log | wc -l)
[ "$n" -eq 12 ] || { echo "only $n of 12 loops reported"; exit 1; }
grep -h ' functions, ' work/*.loop.log | awk '{ok += $4; gsub(/\(/, "", $6); free += $6} END {print ok " in C, " free " asm-free"}'
.venv/bin/python tools/render.py > work/render.log 2>&1 || { tail -5 work/render.log; exit 1; }
tail -3 work/render.log
tools/sbuild.sh $IMGS || exit 1
echo ALLOK
git add -A && git -c user.email=felix@1kloc.com commit -qm "$1" && echo COMMITTED
git grep -c '^#asm' HEAD -- src | awk -F: '{s += $NF} END {print "asm blocks", s}'
