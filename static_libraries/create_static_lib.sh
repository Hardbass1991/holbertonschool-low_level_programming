#!/bin/bash
gcc -c -Wall -Werror -Wextra *.c
ar -rcsf liball.a *.o
