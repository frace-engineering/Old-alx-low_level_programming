#!/bin/bash
gcc -C ./*.c -o *.o
ar rc liball.a *o
