#!/usr/bin/bash
gcc -fPIC -shared -L. *.c -o liball.so
