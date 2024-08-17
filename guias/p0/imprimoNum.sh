#! /usr/bin/bash

n=$1
texto=$2

# Capture the output of the Python script
resultado=$(python3 invierte.py "$n" "$texto")

# Print the result
echo "$resultado"