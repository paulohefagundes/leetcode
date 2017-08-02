cmake_minimum_required(VERSION 3.5)
project(cpp_leetcode)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_executable(tinyURL algorithms/535_Encode_and_Decode_TinyURL/tinyURL.cpp)
