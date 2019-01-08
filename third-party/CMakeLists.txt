find_package(Git REQUIRED)

# include(ExternalProject)
# ExternalProject_Add(
#     Catch
#     PREFIX ${CMAKE_CURRENT_SOURCE_DIR}/catch2
#     GIT_REPOSITORY https://github.com/catchorg/Catch2.git
#     # disables auto update on every build
#     UPDATE_DISCONNECTED 1
#     # disable the following
#     CONFIGURE_COMMAND ""
#     BUILD_COMMAND ""
#     INSTALL_DIR ""
#     INSTALL_COMMAND ""
# )
# add_library(Catch2::Catch IMPORTED INTERFACE)
# set(CATCH_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/catch2/src/Catch/single_include/")
# message("catch include dir: ${CATCH_INCLUDE_DIR}")
# target_include_directories(Catch2::Catch INTERFACE ${CATCH_INCLUDE_DIR})
# # Update Catch target
# add_custom_target(external-catch-update
#     COMMENT "Updated Catch"
#     WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/Catch/src/Catch
#     COMMAND ${GIT_EXECUTABLE} pull
#     DEPENDS Catch)


include(FetchContent)
FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
)

FetchContent_GetProperties(Catch2)
if(NOT Catch2_POPULATED)
  FetchContent_Populate(Catch2)
  add_subdirectory(${catch2_SOURCE_DIR} ${catch2_BINARY_DIR})
endif()
