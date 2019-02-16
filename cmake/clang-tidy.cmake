#
# this module enables clang-tidy if it is installed
#
# clang-tidy static analysis is automatically executed when a target is compiled
#

option(ENABLE_CLANG_TIDY   "Perform clang-tidy static analysis automatically on builds and add custom targets for fixing warnings" ON)

set(HINT_LLVM_BIN_PATHS
  "C:/Program Files/LLVM/bin"       # windows
  "C:/Program Files (x86)/LLVM/bin" # windows
  "/usr/local/opt/llvm/bin"         # macOS (through homebrew)
  "/usr/lib/llvm-7/bin/"            # ubuntu
  "/usr/lib/llvm-6.0/bin"           # ubuntu
)

set(HINT_LLVM_SHARE_PATHS
  "C:/Program Files/LLVM/share/clang"       # windows
  "C:/Program Files (x86)/LLVM/share/clang" # windows
  "/usr/local/opt/llvm/share/clang"         # macOS (through homebrew)
  "/usr/share/clang"                        # archlinux
  "/usr/lib/llvm-7/share/clang"             # ubuntu
  "/usr/lib/llvm-6.0/share/clang"           # ubuntu
)

# clang-tidy
if(ENABLE_CLANG_TIDY)
  find_program(CLANG_TIDY
    NAMES
      clang-tidy
      clang-tidy-7
    HINTS ${HINT_LLVM_BIN_PATHS}
    DOC "clang-tidy executable")
  if(CLANG_TIDY)
    # setting this will enable automatically running clang-tidy when building
    set(CMAKE_CXX_CLANG_TIDY "${CLANG_TIDY}")
    # generates json compilation database - compile_commands.json
    set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

    if(NOT TARGET clang-tidy-modernize-all)
      # enable a couple of custom targets for fixing clang-tidy warnings
      find_package(Python3)
      if(Python3_FOUND)
        find_program(RUN_CLANG_TIDY_PY
          NAMES "run-clang-tidy.py"
          HINTS ${HINT_LLVM_SHARE_PATHS}
          DOC "run-clang-tidy.py script"
          NO_DEFAULT_PATH
          NO_CMAKE_PATH
          NO_CMAKE_ENVIRONMENT_PATH
          NO_SYSTEM_ENVIRONMENT_PATH
          NO_CMAKE_SYSTEM_PATH)
        if(RUN_CLANG_TIDY_PY)
          # clang-tidy-modernize-all -> allows clang-tidy to modernize the code
          add_custom_target(
            clang-tidy-modernize-all
            COMMAND
              ${Python3_EXECUTABLE} ${RUN_CLANG_TIDY_PY}
              -header-filter="${CMAKE_SOURCE_DIR}"
              -checks="-*,modernize-*"
              -fix
              -format
              ${CMAKE_SOURCE_DIR}
            COMMENT "Modernizing all source files according to .clang-tidy config. After this is done, try building again to make sure nothing broke")

          # clang-tidy-rename-all -> allows clang-tidy to apply naming changes
          # warning! this command is dangerous! users should try to rebuild the project to make sure we didn't break things
          add_custom_target(
            clang-tidy-rename-all
            COMMAND
              ${Python3_EXECUTABLE} ${RUN_CLANG_TIDY_PY}
              -header-filter="${CMAKE_SOURCE_DIR}"
              -checks="-*,readability-*"
              -fix
              -format
              ${CMAKE_SOURCE_DIR}
            COMMENT "Renaming all source files according to .clang-tidy config. After this is done, try building again to make sure nothing broke")

          # clang-tidy-fix-all -> allows clang-tidy to apply fixes for all warnings it can fix
          # warning! this command is dangerous! users should try to rebuild the project to make sure we didn't break things
          add_custom_target(
            clang-tidy-fix-all
            COMMAND
              ${Python3_EXECUTABLE} ${RUN_CLANG_TIDY_PY}
              -header-filter="${CMAKE_SOURCE_DIR}"
              -fix
              -format
              ${CMAKE_SOURCE_DIR}
            COMMENT "Fixing clang-tidy reported warnings. After this is done, try building again to make sure nothing broke")
        else()
          message(AUTHOR_WARNING "run-clang-tidy.py not found in the PATH")
        endif(RUN_CLANG_TIDY_PY)
      else()
        message(AUTHOR_WARNING "python3 not found in the PATH")
      endif(Python3_FOUND)
    endif(NOT TARGET clang-tidy-modernize-all)
  else()
    message(AUTHOR_WARNING "clang-tidy not found in the PATH")
  endif()
endif(ENABLE_CLANG_TIDY)
