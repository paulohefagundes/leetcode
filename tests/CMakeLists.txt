add_executable(unit_tests)

target_sources(unit_tests
  PRIVATE
    main.cpp
    0001_two_sum_test.cpp
    0019_remove_nth_node_from_end_of_list_test.cpp
    0020_valid_parentheses_test.cpp
    0021_merge_two_sorted_lists_test.cpp
    0053_maximum_subarray_test.cpp
    0070_climbing_stairs_test.cpp
    0100_same_tree_test.cpp
    0104_maximum_depth_of_binary_tree_test.cpp
    0121_best_time_to_buy_and_sell_stock_test.cpp
    0125_valid_palindrome_test.cpp
    0141_linked_list_cycle_test.cpp
    0190_reverse_bits_test.cpp
    0191_number_of_1_bits_test.cpp
    0198_house_robber_test.cpp
    0206_reverse_linked_list_test.cpp
    0217_contains_duplicate_test.cpp
    0226_invert_binary_tree_test.cpp
    0235_lowest_common_ancestor_of_a_binary_search_tree_test.cpp
    0242_valid_anagram_test.cpp
    0268_missing_number_test.cpp
    0371_sum_of_two_integers_test.cpp
    0414_third_maximum_number_test.cpp
    0461_hamming_distance_test.cpp
    0476_number_complement_test.cpp
    0500_keyboard_row_test.cpp
    # 0535_tiny_url_test.cpp
    0561_array_partition_i_test.cpp
    0572_subtree_of_another_tree_test.cpp
    0617_merge_two_binary_trees_test.cpp
    list_node_test.cpp
    tree_node_test.cpp)

target_include_directories(unit_tests
  PRIVATE
    ../algorithms)

target_link_libraries(unit_tests
  PRIVATE
    CONAN_PKG::doctest
    util
    project_warnings)

# MemorySanitizer
# target_link_options(unit_tests
#   PRIVATE
#     -fsanitize=memory
#     -fno-optimize-sibling-calls
#     -fsanitize-memory-track-origins=2
#     -fno-omit-frame-pointer)

# AddressSanitizer
target_link_options(unit_tests
  PRIVATE
  -fsanitize=address
  -fno-optimize-sibling-calls
  -fsanitize-address-use-after-scope
  -fno-omit-frame-pointer)

target_compile_definitions(unit_tests PRIVATE DOCTEST_CONFIG_SUPER_FAST_ASSERTS)

add_test(NAME "run_cpp_tests"
  COMMAND $<TARGET_FILE:unit_tests>
  WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

# python tests
find_package(Python3 COMPONENTS Interpreter)
if(Python3_Interpreter_FOUND)
  add_test(NAME "run_python_tests"
    COMMAND Python3::Interpreter -m pytest
    WORKING_DIRECTORY ${PROJECT_SOURCE_DIR})
endif()
