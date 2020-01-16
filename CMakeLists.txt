cmake_minimum_required(VERSION 3.3)
project(l06_zombie)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror")

set(SOURCE_FILES main.c)
add_executable(l06_zombie ${SOURCE_FILES})