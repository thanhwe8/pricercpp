cmake_minimum_required(VERSION 4.2)
project(pricercpp)

set(CMAKE_CXX_STANDARD 11)

add_executable(pricercpp main.cpp
        src/application/yieldcurve/main.cpp)
