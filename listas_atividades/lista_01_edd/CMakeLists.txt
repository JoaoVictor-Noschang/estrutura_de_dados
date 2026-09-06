cmake_minimum_required(VERSION 4.3)
project(lista_01_edd C)

set(CMAKE_C_STANDARD 11)

add_executable(lista_01_edd ex01.c
        ex02.c
        ex03.c
        ex04.c
        ex05.c
        ex06.c)
add_executable(new1 ex02.c)
add_executable(new2 ex03.c)
add_executable(new3 ex04.c)
add_executable(new4 ex05.c)
add_executable(new5 ex06.c)
