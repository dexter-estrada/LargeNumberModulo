cmake_minimum_required(VERSION 3.21)
project(LargeNumberModulo C)

set(CMAKE_C_STANDARD 99)

add_executable(LargeNumberModulo main.c)

target_link_libraries(LargeNumberModulo m)