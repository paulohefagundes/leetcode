#include "0617_mergeTwoBinaryTrees.cpp"
#include "catch.hpp"
#include "treeNode.hpp"

TEST_CASE("the tree merges properly")
{
    // setup
    TreeNode* t1 = new TreeNode(1);
    t1->left = new TreeNode(3);
    t1->right = new TreeNode(2);
    t1->left->left = new TreeNode(5);

    TreeNode* t2 = new TreeNode(2);
    t2->left = new TreeNode(1);
    t2->right = new TreeNode(3);
    t2->left->right = new TreeNode(4);
    t2->right->right = new TreeNode(7);

    // call the function we're going to test
    Solution solution = Solution();
    TreeNode* t3 = solution.mergeTrees(t1, t2);

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
