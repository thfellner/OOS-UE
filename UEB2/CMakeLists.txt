cmake_minimum_required(VERSION 3.13)
project(UEB2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(UEB2
        asciiimage.h
        test.cpp main.cpp asciiimage.cpp)
