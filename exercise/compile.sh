#!/bin/bash

number=$1
src=ex$number.cpp

# on macOS, use clang++ for cpp instead of clang (to enable -lc++)
# or just use g++
# -v: to enable verbose compiling/linking output
g++ -std=c++11 -o $src.out $src
