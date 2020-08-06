#!/bin/bash

for file in *.txt; do
    [ -f "$file" ] || continue
    ./test.sh "$file"
done
