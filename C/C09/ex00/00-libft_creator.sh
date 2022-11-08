#!/bin/bash

gcc -c *.c
ar -rc 00-libft.a *.o
ranlib 00-libft.a
rm *.o