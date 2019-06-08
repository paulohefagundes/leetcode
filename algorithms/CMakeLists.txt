add_library(tree_util OBJECT)
target_sources(tree_util PRIVATE tree_node.cpp)
target_include_directories(tree_util PUBLIC .)
