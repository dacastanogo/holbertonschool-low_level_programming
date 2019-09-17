#!/bin/bash
wget -P /tmp https://github.com/dacastanogo/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/libwinner.so
export LD_PRELOAD=/tmp/libwinner.so
