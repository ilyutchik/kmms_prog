#!/bin/bash

MAIN=main
EXE=example

g++ $CHARSET "$MAIN.cpp" -o "$EXE" || exit 1

./"$EXE"
