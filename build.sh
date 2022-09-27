#!/usr/bin/env bash

cmake .
cmake --build . --target clean
make
clear
./c_review