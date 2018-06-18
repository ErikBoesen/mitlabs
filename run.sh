#!/bin/bash
name="$1"
g++ $name.cpp -o $name.out && ./$name.out
