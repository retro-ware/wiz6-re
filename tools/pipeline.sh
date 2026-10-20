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
# no function may gain #asm or lose its C body against HEAD (a byte-identical build can still
# lose C); FORCE=1 overrides
# (#asm blocks holding code: a header of extrn lines alone does not count)
code='/^#asm/ {i = 1; c = 0; next} /^#endasm/ {i = 0; n += c} i && !/^\textrn / {c = 1} END {print n + 0}'
worse=$(git diff --name-only HEAD -- src | while read f; do
	a=$(git show "HEAD:$f" 2>/dev/null | awk "$code"); b=$(awk "$code" "$f" 2>/dev/null); a=${a:-0}; b=${b:-0}
	[ "$b" -gt "$a" ] && echo "$f $a -> $b"
	c=$(git show "HEAD:$f" 2>/dev/null | grep -c '^{'); d=$(grep -c '^{' "$f" 2>/dev/null); d=${d:-0}
	[ "$d" -lt "$c" ] && echo "$f lost its C body"; done)
if [ -n "$worse" ] && [ -z "$FORCE" ]; then echo "REGRESSED"; echo "$worse"; exit 1; fi
git add -A && git -c user.email=felix@1kloc.com commit -qm "$1" \
	-m "Claude-Session: https://claude.ai/code/session_01HyK6uYWNzMXj2iihpndVuo" && echo COMMITTED
git grep -c '^#asm' HEAD -- src | awk -F: '{s += $NF} END {print "asm blocks", s}'
