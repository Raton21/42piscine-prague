#!/bin/bash

find . -type f -o -type d | wc -l

#find . -type f -printf "\n"
#"f\n" -o -type d -printf "d\n" | sort | uniq -c

