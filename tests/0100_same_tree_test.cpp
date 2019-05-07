#include "0100_same_tree.cpp"
#include <doctest.h>
#include <memory>

TEST_CASE("isSameTreeTest1")
{
    // p = [1, 2, 3]
    auto p0 = std::make_unique<TreeNode>(1);
    auto p1 = std::make_unique<TreeNode>(2);
    auto p2 = std::make_unique<TreeNode>(3);
    p0->left = p1.get();
    p0->right = p2.get();

    Solution s;
    REQUIRE(s.isSameTree(p0.get(), p0.get()));
}

TEST_CASE("isSameTreeTest2")
{
    // p = [1, 2]
    auto p0 = std::make_unique<TreeNode>(1);
    auto p1 = std::make_unique<TreeNode>(2);
    p0->left = p1.get();
    p0->right = nullptr;

    // q = [1, null, 2]
    auto q0 = std::make_unique<TreeNode>(1);
    auto q2 = std::make_unique<TreeNode>(2);
    q0->left = nullptr;
    q0->right = q2.get();

    Solution s;
    REQUIRE_FALSE(s.isSameTree(p0.get(), q0.get()));
}

TEST_CASE("isSameTreeTest3")
{
    // p = [1, 2, 1]
    auto p0 = std::make_unique<TreeNode>(1);
    auto p1 = std::make_unique<TreeNode>(2);
    auto p2 = std::make_unique<TreeNode>(1);
    p0->left = p1.get();
    p0->right = p2.get();

    // q = [1, 1, 2]
    auto q0 = std::make_unique<TreeNode>(1);
    auto q1 = std::make_unique<TreeNode>(1);
    auto q2 = std::make_unique<TreeNode>(2);
    q0->left = q1.get();
    q0->right = q2.get();

    Solution s;
    REQUIRE_FALSE(s.isSameTree(p0.get(), q0.get()));
}

TEST_CASE("isSameTreeTest4")
{
    // p = [10, 5, 15]
    auto p0 = std::make_unique<TreeNode>(10);
    auto p1 = std::make_unique<TreeNode>(5);
    auto p2 = std::make_unique<TreeNode>(15);
    p0->left = p1.get();
    p0->right = p2.get();

    // q = [10, 5, null, null, 15]
    auto q0 = std::make_unique<TreeNode>(10);
    auto q1 = std::make_unique<TreeNode>(5);
    auto q4 = std::make_unique<TreeNode>(15);
    q0->left = q1.get();
    q0->right = nullptr;
    q1->left = nullptr;
    q1->right = q4.get();

    Solution s;
    REQUIRE_FALSE(s.isSameTree(p0.get(), q0.get()));
}
