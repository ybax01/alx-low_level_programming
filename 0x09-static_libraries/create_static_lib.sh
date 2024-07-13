#!/bin/bash
gcc -c *.c
ac rc liball.a *.o
ranlib liball.a
rm *.o

