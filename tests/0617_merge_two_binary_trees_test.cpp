#include "0617_merge_two_binary_trees.cpp"
#include <doctest.h>
#include <memory>

TEST_CASE("the tree merges properly")
{
    // setup
    auto l = tree::make_tree({1, 3, 2, 5});
    auto r = tree::make_tree({2, 1, 3, std::nullopt, 4, std::nullopt, 7});

    // call the function we're going to test
    Solution solution = Solution();
    TreeNode* t3 = solution.mergeTrees(l[0].get(), r[0].get());

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
