cmake_minimum_required(VERSION 3.27)
project(Caculator C)

set(CMAKE_C_STANDARD 23)

add_executable(Caculator main.c
        FuntionsCalculator.c
        FuntionsCalculator.h)
