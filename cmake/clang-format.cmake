#
# this module enables clang-format if it is installed
#
# clang-format-all is a custom target that can be invoked with `cmake --build . --target clang-format-all`
#

option(ENABLE_CLANG_FORMAT "Add the 'clang-format-all' custom target" ON)

set(HINT_LLVM_BIN_PATHS
  "C:/Program Files/LLVM/bin"       # windows
  "C:/Program Files (x86)/LLVM/bin" # windows
  "/usr/local/opt/llvm/bin"         # macOS (through homebrew)
  "/usr/lib/llvm-7/bin/"            # ubuntu
  "/usr/lib/llvm-6.0/bin"           # ubuntu
)

# Adding clang-format target if executable is found
if(ENABLE_CLANG_FORMAT)
  find_program(CLANG_FORMAT
    NAMES
      clang-format
      clang-format-7
    HINTS ${HINT_LLVM_BIN_PATHS}
    DOC "clang-format executable")
  if(CLANG_FORMAT)
    # generates json compilation database - compile_commands.json
    set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

    if(NOT TARGET clang-format-all)
      # Get all project files
      # NOTE: here we could also just whitelist instead of blacklisting below.
      #       example: only look for sources in px-pal/ and subsystem/
      file(GLOB_RECURSE
        ALL_SOURCE_FILES
        *.[ch]pp *.[ch]xx *.cc *.hh *.[ch])

      # remove all of the build/* files from the list
      foreach(SOURCE_FILE IN LISTS ALL_CXX_SOURCE_FILES)
        string(FIND ${SOURCE_FILE} ${CMAKE_BINARY_DIR} BUILD_DIR_FOUND)
        if(NOT ${BUILD_DIR_FOUND} EQUAL -1)
          list(REMOVE_ITEM ALL_CXX_SOURCE_FILES ${SOURCE_FILE})
        endif()
      endforeach()

      # this custom target can be invoked with `cmake --build . -target clang-format`
      add_custom_target(
        clang-format-all
        COMMAND
          ${CLANG_FORMAT}
          -i
          -style=file
          ${ALL_SOURCE_FILES}
        COMMENT "Auto formatting of all source files")
      # an alternative could be to run this command:
      # git ls-files -- '*.cpp' '*.h' | xargs clang-format -i -style=file
    endif(NOT TARGET clang-format-all)
  else()
    message(AUTHOR_WARNING "clang-format not found in the PATH")
  endif(CLANG_FORMAT)
endif(ENABLE_CLANG_FORMAT)
