cmake_minimum_required(VERSION 3.17)
project(awesomeCJson C)

set(CMAKE_C_STANDARD 11)

file(GLOB SOURCES
        include/*.h
        *.c)
add_executable(awesomeCJson main.c ${SOURCE_FILES} ${SOURCES})