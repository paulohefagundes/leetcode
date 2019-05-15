#include "0104_maximum_depth_of_binary_tree.cpp"
#include "treeNode.hpp"
#include <doctest.h>
#include <memory>

TEST_CASE("maxDepth")
{
    // [3,9,20,null,null,15,7]
    auto t0 = std::make_unique<TreeNode>(3);
    auto t1 = std::make_unique<TreeNode>(9);
    auto t2 = std::make_unique<TreeNode>(20);
    auto t5 = std::make_unique<TreeNode>(15);
    auto t6 = std::make_unique<TreeNode>(7);
    t0->left = t1.get();
    t0->right = t2.get();
    t2->left = t5.get();
    t2->right = t6.get();

    Solution s = Solution();
    REQUIRE(s.maxDepth(t0.get()) == 3);
}
