#
# this module provides the project_warnings target that can be
#   linked against targets to provide compilation warnings
#

option(ENABLE_COMPILER_WARNINGS "Enable compiler warnings" ON)

# Link this 'library' to use the following warnings
add_library(project_warnings INTERFACE)

if(ENABLE_COMPILER_WARNINGS)
  target_compile_options(project_warnings INTERFACE
    # MSVC warnings
    $<$<CXX_COMPILER_ID:MSVC>:
      /W4
    >
    # Clang OR GNU
    $<$<OR:$<CXX_COMPILER_ID:Clang>,$<CXX_COMPILER_ID:GNU>>:
      -Wall
      -Wextra              # reasonable and standard
      -Wshadow             # warn the user if a variable declaration shadows one from a parent context
      -Wnon-virtual-dtor   # warn the user if a class with virtual functions has a non-virtual destructor.
                           # This helps catch hard to track down memory errors
      -Wold-style-cast     # warn for c-style casts
      -Wcast-align         # warn for potential performance problem casts
      -Wunused             # warn on anything being unused
      -Woverloaded-virtual # warn if you overload (not override) a virtual function
      -Wpedantic           # warn if non-standard C++ is used
      -Wconversion         # warn on type conversions that may lose data
      -Wsign-conversion    # warn on sign conversions
      -Wnull-dereference   # warn if a null dereference is detected
      -Wdouble-promotion   # warn if float is implicit promoted to double
      -Wformat=2           # warn on security issues around functions that format output (ie printf)

      # disabling these
      -Wno-c++98-compat
      -Wno-c++98-compat-pedantic
      -Wno-c99-extensions
    >
    # Clang specific
    $<$<CXX_COMPILER_ID:Clang>:
      # -Weverything # enables every warning!
      # -Wlifetime   # shows object lifetime issues
    >
    # GNU specific
    $<$<CXX_COMPILER_ID:GNU>:
      -Wduplicated-cond        # warn if if / else chain has duplicated conditions
      -Wduplicated-branches    # warn if if / else branches have duplicated code
      -Wlogical-op             # warn about logical operations being used where bitwise were probably wanted
      -Wmisleading-indentation # warn if identation implies blocks where blocks do not exist
      -Wuseless-cast           # warn if you perform a cast to the same type
    >
  )
endif(ENABLE_COMPILER_WARNINGS)
