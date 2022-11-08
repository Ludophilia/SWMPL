#!/bin/bash
cat /etc/passwd | sed '/^#/d' | sed -n '2~2p' | awk -F ':' '{ print $1 }' | rev | sort -r \
| awk -v FT_LINE1=$FT_LINE1 -v FT_LINE2=$FT_LINE2 'NR==FT_LINE1, NR==FT_LINE2 { print $0 }'\
| tr '\n' ' ' | sed 's/ /, /g' | sed 's/, $/./'
