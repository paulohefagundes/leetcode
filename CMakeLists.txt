cmake_minimum_required(VERSION 3.5)
project(leetcode)

set (CMAKE_CXX_STANDARD 11)

# Including custom cmake rules
include(cmake/clang-cxx-dev-tools.cmake)

add_subdirectory(algorithms)
add_subdirectory(tests)
