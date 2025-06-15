cmake_minimum_required(VERSION 3.31)
project(algorithms)

set(CMAKE_CXX_STANDARD 20)

add_executable(algorithms main.cpp
        boj/bronze/10809.cpp
        boj/bronze/2675.cpp
        boj/bronze/test.cpp
        boj/silver/1181.cpp
        boj/silver/9461.cpp
        boj/silver/20291.cpp
        boj/gold/5430.cpp)
