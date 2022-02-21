cmake_minimum_required(VERSION 3.19)
project(zgqtool)

set(CMAKE_CXX_STANDARD 11)

set(TO src/to.h src/to.cpp src/delay.cpp src/delay.h src/zgq.h)

add_executable(zgqtool ${TO} main.cpp main.cpp)