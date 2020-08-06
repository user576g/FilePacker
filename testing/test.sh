#!/bin/bash

pack < $1 > $1.rle
unpack < $1.rle > $1unpacked.txt
cmp $1 $1unpacked.txt
rm $1.rle $1unpacked.txt
