# Additional targets to perform clang-format/clang-tidy
# Get all project files
file(GLOB_RECURSE
     ALL_CXX_SOURCE_FILES
     *.[chi]pp *.[chi]xx *.cc *.hh *.ii *.[CHI]
     )

# remove the catch.hpp from the list -> we don't want to clang-format it
list(REMOVE_ITEM ALL_CXX_SOURCE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/tests/include/catch.hpp")

# Adding clang-format target if executable is found
find_program(CLANG_FORMAT "clang-format")
if(CLANG_FORMAT)
  # this custom target can be invoked with `make clang-format`
  add_custom_target(
    clang-format
    COMMAND /usr/bin/clang-format
    -i
    -style=file
    ${ALL_CXX_SOURCE_FILES}
    )
endif()
