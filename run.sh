#!/bin/bash
name="$1"
shift  # Get past name so we can use $@
g++ $name.cpp -o $name.out && ./$name.out $@
