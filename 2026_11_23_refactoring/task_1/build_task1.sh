#!/bin/bash

if [ ! -d bin ]; then
    mkdir bin
fi

g++ -finput-charset=UTF-8 task1.cpp -o bin/task1 || exit 1

./bin/task1
