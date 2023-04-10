#!/bin/bash
gcc -Wall -Werror -pedantic -Wextra -std=gnu89 *.c
ar -rc liball.a *.o
