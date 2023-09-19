#!/bin/bash
wget -p /tmp https://github.com/MoedCode/alx-low_level_programming/tree/master/0x18-dynamic_libraries/libgiga.so
exports LD_PRELOAD=/tmp/libgiga.so
