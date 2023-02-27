cmake_minimum_required(VERSION 3.24)
project(ga1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ga1 ArgumentManager.h main.cpp)
