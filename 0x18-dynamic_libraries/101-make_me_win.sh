#!/bin/bash
wget -P /tmp https://github.com/belboukayyoub/alx-low_level_programming/raw/master/0x18-dynamic_libraries/rand.so
export LD_PREOAD=/tmp/rand.so
