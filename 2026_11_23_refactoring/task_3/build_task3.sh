#!/bin/bash

if [ ! -d bin ]; then
    mkdir bin
fi

g++ -finput-charset=UTF-8 task3.cpp -o bin/task3 || exit 1

./bin/task3
