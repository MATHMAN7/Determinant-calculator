cmake_minimum_required(VERSION 3.30)
project(det_A_)

set(CMAKE_CXX_STANDARD 20)

add_executable(det_A_ main.cpp
        row-swap-matrix.cpp
        minor.cpp
        determinant.cpp
        determinant.h
        minor.h
)
