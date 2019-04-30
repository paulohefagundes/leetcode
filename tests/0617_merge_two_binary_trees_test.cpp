#include "0617_merge_two_binary_trees.cpp"
#include "treeNode.hpp"
#include <catch2/catch.hpp>
#include <memory>

TEST_CASE("the tree merges properly")
{
    // setup
    auto l0 = std::make_unique<TreeNode>(1);
    auto l1 = std::make_unique<TreeNode>(3);
    auto l2 = std::make_unique<TreeNode>(2);
    auto l3 = std::make_unique<TreeNode>(5);
    l0->left = l1.get();
    l0->right = l2.get();
    l1->left = l3.get();

    auto r0 = std::make_unique<TreeNode>(2);
    auto r1 = std::make_unique<TreeNode>(1);
    auto r2 = std::make_unique<TreeNode>(3);
    auto r3 = std::make_unique<TreeNode>(4);
    auto r4 = std::make_unique<TreeNode>(7);
    r0->left = r1.get();
    r0->right = r2.get();
    r1->right = r3.get();
    r2->right = r4.get();

    // call the function we're going to test
    Solution solution = Solution();
    TreeNode* t3 = solution.mergeTrees(l0.get(), r0.get());

    // assert we've got the correct results
    REQUIRE(t3 != nullptr);
    REQUIRE(t3->val == 3);
    REQUIRE(t3->left->val == 4);
    REQUIRE(t3->right->val == 5);
    REQUIRE(t3->left->left->val == 5);
    REQUIRE(t3->left->right->val == 4);
    REQUIRE(t3->left->left->left == nullptr);
    REQUIRE(t3->left->left->right == nullptr);
    REQUIRE(t3->right->val == 5);
    REQUIRE(t3->right->left == nullptr);
    REQUIRE(t3->right->right->val == 7);
    REQUIRE(t3->right->right->right == nullptr);
}
