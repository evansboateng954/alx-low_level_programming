#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
ar -rc liball.a *.o
ranlib liball.c
ar -t liball.a
