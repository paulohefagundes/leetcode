cmake_minimum_required(VERSION 3.5)
project(leetcode_algorithm)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_CLANG_TIDY "clang-tidy;-fix")

add_executable(tinyURL 0535_tinyURL.cpp)
