cmake_minimum_required(VERSION 3.21)
project(c_review C)

set(CMAKE_C_STANDARD 99)

add_executable(c_review main.c snake.h snake.c _assert.c _assert.h _ctype.c _ctype.h _io.c _io.h _math.c _math.h)
