add_executable(unit_tests)

target_sources(unit_tests
  PRIVATE
    main.cpp
    0001_two_sum_test.cpp
    0020_valid_parentheses_test.cpp
    0021_merge_two_sorted_lists_test.cpp
    0053_maximum_subarray_test.cpp
    0121_best_time_to_buy_and_sell_stock_test.cpp
    0141_linked_list_cycle_test.cpp
    0461_hamming_distance_test.cpp
    0476_number_complement_test.cpp
    0500_keyboard_row_test.cpp
    # 0535_tiny_url_test.cpp
    0561_array_partition_i_test.cpp
    0617_merge_two_binary_trees_test.cpp)

target_include_directories(unit_tests
  PRIVATE
    ../algorithms)

target_link_libraries(unit_tests
  PRIVATE
    CONAN_PKG::doctest
    project_warnings)

target_compile_definitions(unit_tests PRIVATE DOCTEST_CONFIG_SUPER_FAST_ASSERTS)

add_test(NAME "run_unit_tests"
  COMMAND $<TARGET_FILE:unit_tests>
  WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
