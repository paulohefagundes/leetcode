#include "0572_subtree_of_another_tree.cpp"
#include <doctest.h>
//#include <initializer_list>
#include <memory>

TEST_CASE("isSubTree - same tree")
{
    auto s = tree::make_tree({3, 4, 5, 1, 2});

    Solution sol = Solution();
    CHECK(sol.isSubtree(s[0].get(), s[0].get()));
    CHECK(sol.isSubtree(s[0].get(), s[1].get()));
}

TEST_CASE("isSubTree1")
{
    auto s = tree::make_tree({3, 4, 5, 1, 2});
    auto t = tree::make_tree({4, 1, 2});

    Solution sol = Solution();
    CHECK(sol.isSubtree(s[0].get(), t[0].get()));
}

TEST_CASE("isSubTree2")
{
    auto s0 = tree::make_tree({1, 1});
    auto t0 = std::make_unique<TreeNode>(1);

    Solution s = Solution();
    CHECK(s.isSubtree(s0[0].get(), t0.get()));
}

TEST_CASE("isSubTree3")
{
    auto s = tree::make_tree({3, 4, 5, 1, 2, std::nullopt, std::nullopt, 0});
    auto t = tree::make_tree({4, 1, 2});

    Solution sol = Solution();
    CHECK_FALSE(sol.isSubtree(s[0].get(), t[0].get()));
}

TEST_CASE("isSubTree4")
{
    auto s = tree::make_tree({3, 4, 5, 1, std::nullopt, 2});
    auto t = tree::make_tree({3, 1, 2});

    Solution sol = Solution();
    CHECK_FALSE(sol.isSubtree(s[0].get(), t[0].get()));
}

TEST_CASE("isSubTree5")
{
    auto s = tree::make_tree({1, std::nullopt,
                              1, std::nullopt,
                              1, std::nullopt,
                              1, std::nullopt,
                              1, std::nullopt,
                              1, std::nullopt,
                              1, std::nullopt,
                              1, std::nullopt,
                              1, std::nullopt,
                              1, std::nullopt,
                              1, 2});
    auto t =
        tree::make_tree({1, std::nullopt, 1, std::nullopt, 1, std::nullopt, 1, std::nullopt, 1, std::nullopt, 1, 2});

    Solution sol = Solution();
    CHECK(sol.isSubtree(s[0].get(), t[0].get()));
}
