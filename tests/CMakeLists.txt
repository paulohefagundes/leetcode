add_executable(unit_tests)

target_sources(unit_tests
  PRIVATE
    main.cpp
    0461_hammingDistanceTest.cpp
    0476_numberComplementTest.cpp
    0500_keyboardRowTest.cpp
    0561_arrayPartitionITest.cpp
    0617_mergeTwoBinaryTreesTest.cpp)


target_include_directories(unit_tests
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/../algorithms/include
    ${CMAKE_CURRENT_SOURCE_DIR}/../algorithms/
)

target_link_libraries(unit_tests Catch2)
target_compile_definitions(unit_tests PRIVATE UNIT_TEST) # similar to -D UNIT_TEST
target_compile_options(unit_tests PRIVATE
  $<$<CXX_COMPILER_ID:GNU>:-Wall -pedantic -Wextra>
  $<$<CXX_COMPILER_ID:Clang>:-Wall -Wextra>
)

add_test(NAME "run_unit_tests"
  COMMAND $<TARGET_FILE:unit_tests>
  USES_TERMINAL
  WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
