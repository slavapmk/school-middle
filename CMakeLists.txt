cmake_minimum_required(VERSION 3.23)
project(school_middle)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(school_middle
        another.cpp
        base_numbers.cpp
        convertors1.cpp
        convertors2.cpp
        finders.cpp
        middle.h
        utils.cpp)
