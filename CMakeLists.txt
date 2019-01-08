cmake_minimum_required(VERSION 3.13)

# force use of the clang compiler. this needs to appear before the project() macro
set(CMAKE_C_COMPILER "clang")
set(CMAKE_CXX_COMPILER "clang++")

project(leetcode VERSION 1.0
                 DESCRIPTION "my leetcode solutions"
                 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Including custom cmake rules
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")
include(clang-cxx-dev-tools)

add_subdirectory(algorithms)
add_subdirectory(third-party)
enable_testing()
add_subdirectory(tests)
