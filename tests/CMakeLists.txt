add_executable(unit_tests)

target_sources(unit_tests
  PRIVATE
    main.cpp
    0001_two_sum_test.cpp
    0020_valid_parentheses_test.cpp
    0461_hamming_distance_test.cpp
    0476_number_complement_test.cpp
    0500_keyboard_row_test.cpp
    0561_array_partition_i_test.cpp
    0617_merge_two_binary_trees_test.cpp)

target_include_directories(unit_tests
  PRIVATE
    ../algorithms)

find_package(Catch2 REQUIRED CONFIG)

target_link_libraries(unit_tests
  PRIVATE
    Catch2::Catch2
    project_warnings)

target_compile_definitions(unit_tests PRIVATE UNIT_TEST) # similar to -D UNIT_TEST

add_test(NAME "run_unit_tests"
  COMMAND $<TARGET_FILE:unit_tests>
  WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
