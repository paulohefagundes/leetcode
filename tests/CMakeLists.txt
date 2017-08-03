cmake_minimum_required(VERSION 3.5)
project(leetcode_test)

# Prepare "Catch" library for other executables
set(CATCH_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)
add_library(Catch INTERFACE)
target_include_directories(Catch INTERFACE ${CATCH_INCLUDE_DIR})

# add the implementation files
set(IMPL_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/../algorithms/include)
set(IMPL_SOURCES ${IMPL_SOURCES} ${CMAKE_CURRENT_SOURCE_DIR}/../algorithms/461_Hamming_Distance/)
set(IMPL_SOURCES ${IMPL_SOURCES} ${CMAKE_CURRENT_SOURCE_DIR}/../algorithms/617_merge_two_binary_trees/)
include_directories(${IMPL_SOURCES})

# add the test files
set(TEST_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/hammingDistanceTest.cpp)
set(TEST_SOURCES ${TEST_SOURCES} ${CMAKE_CURRENT_SOURCE_DIR}/mergeTwoBinaryTreesTest.cpp)

# Make test executable
add_executable(tests main.cpp ${TEST_SOURCES})
target_link_libraries(tests Catch)
