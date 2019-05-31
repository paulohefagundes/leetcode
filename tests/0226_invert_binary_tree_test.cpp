#include "0226_invert_binary_tree.cpp"
#include <doctest.h>
#include <memory>

TEST_CASE("invertTree")
{
    auto t0 = std::make_unique<TreeNode>(4);
    auto t1 = std::make_unique<TreeNode>(2);
    auto t2 = std::make_unique<TreeNode>(7);
    auto t3 = std::make_unique<TreeNode>(1);
    auto t4 = std::make_unique<TreeNode>(3);
    auto t5 = std::make_unique<TreeNode>(6);
    auto t6 = std::make_unique<TreeNode>(9);
    t0->left = t1.get();
    t0->right = t2.get();
    t1->left = t3.get();
    t1->right = t4.get();
    t2->left = t5.get();
    t2->right = t6.get();

    Solution s;
    auto r = s.invertTree(t0.get());

    REQUIRE(r != nullptr);
    REQUIRE(r->left != nullptr);
    REQUIRE(r->right != nullptr);
    REQUIRE(r->left->val == 7);
    REQUIRE(r->right->val == 2);
    REQUIRE(r->left->left != nullptr);
    REQUIRE(r->left->right != nullptr);
    REQUIRE(r->left->left->val == 9);
    REQUIRE(r->left->right->val == 6);
    REQUIRE(r->right->left != nullptr);
    REQUIRE(r->right->right != nullptr);
    REQUIRE(r->right->left->val == 3);
    REQUIRE(r->right->right->val == 1);
}
