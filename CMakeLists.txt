cmake_minimum_required(VERSION 4.0)
project(C_Primer_Plus_Exercise C)

set(CMAKE_C_STANDARD 11)

add_library(C_Primer_Plus_Exercise STATIC
        c2/03.c
        c4/01.c)
