#!/bin/bash

make pack
make unpack
install ./pack /bin/pack
install ./unpack /bin/unpack
rm pack unpack
