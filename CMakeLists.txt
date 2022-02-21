cmake_minimum_required(VERSION 3.19)
project(zgqtool)

set(CMAKE_CXX_STANDARD 11)

set(TO src/to.h src/to.cpp)
set(DELAY src/delay.h src/delay.cpp)

message(${TO})

add_executable(zgqtool
        ${TO}
        ${DELAY}
        src/zgq.h
        main.cpp )