# Additional targets to perform clang-format/clang-tidy

# clang-tidy
find_program(CLANG_TIDY_EXE
  NAMES "clang-tidy"
  DOC "Path to clang-tidy executable")
if(CLANG_TIDY_EXE)
  set(CMAKE_CXX_CLANG_TIDY "${CLANG_TIDY_EXE}")
endif()

# clang-format
find_program(CLANG_FORMAT "clang-format")
if(CLANG_FORMAT)
  # make a list of all source files
  file(GLOB_RECURSE
    ALL_CXX_SOURCE_FILES
    *.[ch]pp *.[ch]xx *.cc *.hh *.[ch])

  # remove all of the third-party/* and build/* files from the list
  foreach(SOURCE_FILE IN LISTS ALL_CXX_SOURCE_FILES)
    string(FIND ${SOURCE_FILE} third-party THIRD_PARTY_DIR_FOUND)
    string(FIND ${SOURCE_FILE} ${CMAKE_BINARY_DIR} BUILD_DIR_FOUND)
    if((NOT ${THIRD_PARTY_DIR_FOUND} EQUAL -1) OR (NOT ${BUILD_DIR_FOUND} EQUAL -1))
      list(REMOVE_ITEM ALL_CXX_SOURCE_FILES ${SOURCE_FILE})
    endif()
  endforeach()

  # add the clang-format custom target
  add_custom_target(
    clang-format
    COMMAND /usr/bin/clang-format
    -i
    -style=file
    ${ALL_CXX_SOURCE_FILES}
    )
endif()
