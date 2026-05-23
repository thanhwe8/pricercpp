cmake_minimum_required(VERSION 4.1.2)
project(pricercpp)

set(CMAKE_CXX_STANDARD 11)

add_executable(pricercpp main.cpp
        src/application/yieldcurve/main.cpp
        src/application/deposit/RateModel.cpp
        src/application/deposit/RateModel.hpp
        src/application/deposit/BetaModel.cpp
        src/application/deposit/BetaModel.hpp)
