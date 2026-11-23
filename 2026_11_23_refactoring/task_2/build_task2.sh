#!/bin/bash

if [ ! -d bin ]; then
    mkdir bin
fi

g++ -finput-charset=UTF-8 task2.cpp -o bin/task2 || exit 1

./bin/task2
