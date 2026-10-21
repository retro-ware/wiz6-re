#!/bin/sh
# hb.sh IMAGE [ADDR]: render (hand/ overrides) and build one image; on a mismatch diff ADDR
cd "$(dirname "$0")/.."
.venv/bin/python tools/render.py $1 > work/render.log 2>&1 || { tail -3 work/render.log; exit 1; }
tools/sbuild.sh ROOT $1 && exit 0
[ -n "$2" ] && .venv/bin/python tools/hdiff.py $1 $2 | grep '^[-+]' | head -${N:-40}
exit 1
