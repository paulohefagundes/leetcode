add_executable(unit_tests)

target_sources(unit_tests
  PRIVATE
    main.cpp
    0461_hammingDistanceTest.cpp
    0476_numberComplementTest.cpp
    0500_keyboardRowTest.cpp
    0561_arrayPartitionITest.cpp
    0617_mergeTwoBinaryTreesTest.cpp)

add_dependencies(unit_tests Catch)
target_compile_definitions(unit_tests PRIVATE UNIT_TEST) # similar to -D UNIT_TEST
target_compile_options(unit_tests PRIVATE -Wall -pedantic -Wextra)
target_include_directories(unit_tests PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../algorithms/include)
target_include_directories(unit_tests PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../algorithms/)
target_include_directories(unit_tests SYSTEM PRIVATE ${EXTERNAL_CATCH_INCLUDE_DIR})

add_test(NAME "catch_tests"
  COMMAND $<TARGET_FILE:unit_tests>
  USES_TERMINAL
  WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
