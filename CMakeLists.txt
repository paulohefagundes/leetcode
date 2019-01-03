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

find_program(CLANG_TIDY_EXE
  NAMES "clang-tidy"
  DOC "Path to clang-tidy executable")
set(CMAKE_CXX_CLANG_TIDY "${CLANG_TIDY_EXE}")

# Including custom cmake rules
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
include(clang-cxx-dev-tools)

add_subdirectory(algorithms)
add_subdirectory(third-party)
enable_testing()
add_subdirectory(tests)
