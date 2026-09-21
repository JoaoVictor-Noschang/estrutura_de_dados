cmake_minimum_required(VERSION 4.3)
project(aula04_0109 C)

set(CMAKE_C_STANDARD 11)

add_executable(aula04_0109 main.c
        switch.c
        logicos.c
)
add_executable(new1 switch.c)
add_executable(new2 case.c)
add_executable(new3 logicos.c)
