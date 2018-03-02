#!/bin/bash

clang++ "$@" test.cpp -Xclang -load -Xclang ./PrintFunctionNames.so -Xclang -add-plugin -Xclang print-fns
