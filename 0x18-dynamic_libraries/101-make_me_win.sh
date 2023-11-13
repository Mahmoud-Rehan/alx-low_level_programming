#!/bin/bash
wget -P /tmp https://github.com/Mahmoud-Rehan/alx-low_level_programming/0x18-dynamic_libraries/libwin.so
export LD_PRELOAD=/tmp/libwin.so
