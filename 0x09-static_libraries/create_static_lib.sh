#!/bin/bash
gcc -c *.c
ac rc liball.a *.o
rm *.o
