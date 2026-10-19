#!/bin/bash
# dosrun.sh WORKDIR "cmd1" "cmd2" ...  -- runs DOS commands in DOSBox-X with Aztec 4.2b on the path.
# C: = WORKDIR, D: = Aztec root. Output of each command goes to WORKDIR/OUT.TXT.
W=$(cd "$1" && pwd); shift
AZ=$HOME/Projects/wiz6-re/tc/aztec42b/dl/AztecC86
CONF=$(mktemp -t dosrun).conf
{
  echo "[sdl]"; echo "output=surface"
  echo "[dosbox]"; echo "memsize=16"; echo "quit warning=false"
  echo "[cpu]"; echo "cycles=max"
  echo "[autoexec]"
  echo "mount c \"$W\""; echo "mount d \"$AZ\""
  echo "c:"; echo "set PATH=D:\\BIN"; echo "set INCLUDE=D:\\INCLUDE"; echo "set CLIB=D:\\LIB\\"
  echo "echo. > OUT.TXT"
  for c in "$@"; do echo "$c >> OUT.TXT"; done
  echo "exit"
} > "$CONF"
# SIGKILL: a SIGTERM makes DOSBox-X pop up a quit confirmation that blocks forever
SDL_VIDEODRIVER=dummy timeout -s KILL ${DOSRUN_TIMEOUT:-300} dosbox-x -conf "$CONF" -nogui -nomenu -exit >/dev/null 2>&1
rm -f "$CONF"
tr -d '\r' < "$W/OUT.TXT"
