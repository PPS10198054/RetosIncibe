#!/bin/sh
GREEN='\033[0;32m'
RED='\033[0;31m'
NC='\033[0m'

CC=${CC:-gcc}
CFLAGS="${CFLAGS:--Wall -Wextra -Werror}"
SRC="starter.c test_challenge05.c"
OUT="test_challenge05"

if ! $CC $CFLAGS -o "$OUT" $SRC 2>&1; then
    printf "${RED}FAILED: compilation error${NC}\n"
    exit 1
fi

if ./"$OUT"; then
    printf "${GREEN}PASSED${NC}\n"
    exit 0
else
    printf "${RED}FAILED${NC}\n"
    exit 1
fi