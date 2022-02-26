#!/bin/bash
gcc -Werror -pedantic -Werror -Wextra -c *.c
ar -rc liball.a *.o
