#!/bin/bash
gcc -fpic -c 0x18.c 
gcc -shared 0x18.o -o gm
