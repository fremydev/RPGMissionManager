#!/bin/bash

cc -O3 -Wall -Wextra -o RPGMissionManager src/main.c -lm -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
