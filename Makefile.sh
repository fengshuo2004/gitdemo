#!/usr/bin/env bash

gcc -Wall favourite.c -o bin/favourite \
&& echo "Build Succeeded" || exit $?
