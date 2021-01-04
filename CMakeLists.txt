cmake_minimum_required(VERSION 3.14)
project(c_struct C)

set(CMAKE_C_STANDARD 99)

add_executable(c_struct main.c arr_list.c arr_list.h)