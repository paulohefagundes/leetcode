#include "0572_subtree_of_another_tree.cpp"
#include <doctest.h>
//#include <initializer_list>
#include <memory>

TEST_CASE("isSubTree - same tree")
{
    auto s0 = std::make_unique<TreeNode>(3);
    auto s1 = std::make_unique<TreeNode>(4);
    auto s2 = std::make_unique<TreeNode>(5);
    auto s3 = std::make_unique<TreeNode>(1);
    auto s4 = std::make_unique<TreeNode>(2);
    s0->left = s1.get();
    s0->right = s2.get();
    s1->left = s3.get();
    s1->right = s4.get();

    Solution s = Solution();
    CHECK(s.isSubtree(s0.get(), s0.get()));
    CHECK(s.isSubtree(s0.get(), s1.get()));
}

TEST_CASE("isSubTree1")
{
    auto s0 = std::make_unique<TreeNode>(3);
    auto s1 = std::make_unique<TreeNode>(4);
    auto s2 = std::make_unique<TreeNode>(5);
    auto s3 = std::make_unique<TreeNode>(1);
    auto s4 = std::make_unique<TreeNode>(2);
    s0->left = s1.get();
    s0->right = s2.get();
    s1->left = s3.get();
    s1->right = s4.get();

    auto t0 = std::make_unique<TreeNode>(4);
    auto t1 = std::make_unique<TreeNode>(1);
    auto t2 = std::make_unique<TreeNode>(2);
    t0->left = t1.get();
    t0->right = t2.get();

    Solution s = Solution();
    CHECK(s.isSubtree(s0.get(), t0.get()));
}

TEST_CASE("isSubTree2")
{
    auto s0 = std::make_unique<TreeNode>(1);
    auto s1 = std::make_unique<TreeNode>(1);
    s0->left = s1.get();

    auto t0 = std::make_unique<TreeNode>(1);

    Solution s = Solution();
    CHECK(s.isSubtree(s0.get(), t0.get()));
}

TEST_CASE("isSubTree3")
{
    auto s0 = std::make_unique<TreeNode>(3);
    auto s1 = std::make_unique<TreeNode>(4);
    auto s2 = std::make_unique<TreeNode>(5);
    auto s3 = std::make_unique<TreeNode>(1);
    auto s4 = std::make_unique<TreeNode>(2);
    auto s7 = std::make_unique<TreeNode>(0);
    s0->left = s1.get();
    s0->right = s2.get();
    s1->left = s3.get();
    s1->right = s4.get();
    s4->left = s7.get();

    auto t0 = std::make_unique<TreeNode>(4);
    auto t1 = std::make_unique<TreeNode>(1);
    auto t2 = std::make_unique<TreeNode>(2);
    t0->left = t1.get();
    t0->right = t2.get();

    Solution s = Solution();
    CHECK_FALSE(s.isSubtree(s0.get(), t0.get()));
}

TEST_CASE("isSubTree4")
{
    // [3,4,5,1,null,2]
    auto s0 = std::make_unique<TreeNode>(3);
    auto s1 = std::make_unique<TreeNode>(4);
    auto s2 = std::make_unique<TreeNode>(5);
    auto s3 = std::make_unique<TreeNode>(1);
    auto s5 = std::make_unique<TreeNode>(2);
    s0->left = s1.get();
    s0->right = s2.get();
    s1->left = s3.get();
    s2->left = s5.get();

    auto t0 = std::make_unique<TreeNode>(3);
    auto t1 = std::make_unique<TreeNode>(1);
    auto t2 = std::make_unique<TreeNode>(2);
    t0->left = t1.get();
    t0->right = t2.get();

    Solution s = Solution();
    CHECK_FALSE(s.isSubtree(s0.get(), t0.get()));
}

TEST_CASE("isSubTree5")
{
    // inputs:
    // [1,null,1,null,1,null,1,null,1,null,1,null,1,null,1,null,1,null,1,null,1,2]
    // [1,null,1,null,1,null,1,null,1,null,1,2]
    // expected: true
    // TODO: implement this test case - maybe create a make_tree() function
    //       https://www.geeksforgeeks.org/construct-complete-binary-tree-given-array/
}
