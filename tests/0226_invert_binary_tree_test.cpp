#include "0226_invert_binary_tree.cpp"
#include <doctest.h>

TEST_CASE("invertTree")
{
    auto t = tree::make_tree({4, 2, 7, 1, 3, 6, 9});

    Solution s;
    auto r = s.invertTree(t[0].get());

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
