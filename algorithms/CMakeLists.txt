add_library(util OBJECT)
target_sources(util PRIVATE list_node.cpp tree_node.cpp)
target_include_directories(util PUBLIC .)
