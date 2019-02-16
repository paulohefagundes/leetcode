cmake_minimum_required(VERSION 3.13)

project(leetcode VERSION 1.0
                 DESCRIPTION "my leetcode solutions"
                 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Including custom cmake rules
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")
include(clang-format)
include(clang-tidy)
include(compiler-warnings)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup(TARGETS)

enable_testing()
add_subdirectory(tests)
