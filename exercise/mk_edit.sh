#!/bin/bash

number=$1
src=ex$number.cpp

if [ -z "$1" ]; then
    echo "missing a suffix for ex cpp ..."
    echo "aborting..."
    exit 1
fi

if [ ! -f "$src" ]; then
    cp main.cpp $src
    vi $src
else 
    echo "$src exists!"
    vi $src
fi
