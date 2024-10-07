cmake_minimum_required(VERSION 3.29)
project(lang)

set(CMAKE_CXX_STANDARD 14)

add_executable(lang
    main.cpp
        token/token.h)
