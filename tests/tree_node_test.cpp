#include "tree_node.hpp"
#include <doctest.h>
#include <memory>

TEST_CASE("make_tree1")
{
    auto v = tree::make_tree({6, 2, 8, 0, 4, 7, 9, -1, -1, 3, 5});

    // [6,2,8,0,4,7,9,null,null,3,5]
    auto s0 = std::make_unique<TreeNode>(6);
    auto s1 = std::make_unique<TreeNode>(2);
    auto s2 = std::make_unique<TreeNode>(8);
    auto s3 = std::make_unique<TreeNode>(0);
    auto s4 = std::make_unique<TreeNode>(4);
    auto s5 = std::make_unique<TreeNode>(7);
    auto s6 = std::make_unique<TreeNode>(9);
    auto s7 = std::make_unique<TreeNode>(-1);
    auto s8 = std::make_unique<TreeNode>(-1);
    auto s9 = std::make_unique<TreeNode>(3);
    auto s10 = std::make_unique<TreeNode>(5);
    s0->left = s1.get();
    s0->right = s2.get();
    s1->left = s3.get();
    s1->right = s4.get();
    s2->left = s5.get();
    s2->right = s6.get();
    s3->left = s7.get();
    s3->right = s8.get();
    s4->left = s9.get();
    s4->right = s10.get();

    REQUIRE(v.size() == 11);
    CHECK(v[0]->val == s0->val);
    CHECK(v[1]->val == s1->val);
    CHECK(v[2]->val == s2->val);
    CHECK(v[3]->val == s3->val);
    CHECK(v[4]->val == s4->val);
    CHECK(v[5]->val == s5->val);
    CHECK(v[6]->val == s6->val);
    CHECK(v[7]->val == s7->val);
    CHECK(v[8]->val == s8->val);
    CHECK(v[9]->val == s9->val);
    CHECK(v[10]->val == s10->val);
}

TEST_CASE("make_tree with nullptrs")
{
    auto v = tree::make_tree({6, 2, 8, 0, 4, 7, 9, std::nullopt, std::nullopt, 3, 5});

    // [6,2,8,0,4,7,9,null,null,3,5]
    auto s0 = std::make_unique<TreeNode>(6);
    auto s1 = std::make_unique<TreeNode>(2);
    auto s2 = std::make_unique<TreeNode>(8);
    auto s3 = std::make_unique<TreeNode>(0);
    auto s4 = std::make_unique<TreeNode>(4);
    auto s5 = std::make_unique<TreeNode>(7);
    auto s6 = std::make_unique<TreeNode>(9);
    auto s9 = std::make_unique<TreeNode>(3);
    auto s10 = std::make_unique<TreeNode>(5);
    s0->left = s1.get();
    s0->right = s2.get();
    s1->left = s3.get();
    s1->right = s4.get();
    s2->left = s5.get();
    s2->right = s6.get();
    s4->left = s9.get();
    s4->right = s10.get();

    REQUIRE(v.size() == 11);
    CHECK(v[0]->val == s0->val);
    CHECK(v[1]->val == s1->val);
    CHECK(v[2]->val == s2->val);
    CHECK(v[3]->val == s3->val);
    CHECK(v[4]->val == s4->val);
    CHECK(v[5]->val == s5->val);
    CHECK(v[6]->val == s6->val);
    CHECK(v[3]->left == nullptr);  // v7 = nullptr
    CHECK(v[3]->right == nullptr); // v8 = nullptr
    CHECK(v[9]->val == s9->val);
    CHECK(v[10]->val == s10->val);
}
