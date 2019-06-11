#include "0100_same_tree.cpp"
#include <doctest.h>

TEST_CASE("isSameTreeTest1")
{
    auto p = tree::make_tree({1, 2, 3});

    Solution s;
    REQUIRE(s.isSameTree(p[0].get(), p[0].get()));
}

TEST_CASE("isSameTreeTest2")
{
    auto p = tree::make_tree({1, 2});
    auto q = tree::make_tree({1, std::nullopt, 2});

    Solution s;
    REQUIRE_FALSE(s.isSameTree(p[0].get(), q[0].get()));
}

TEST_CASE("isSameTreeTest3")
{
    auto p = tree::make_tree({1, 2, 1});
    auto q = tree::make_tree({1, 1, 2});

    Solution s;
    REQUIRE_FALSE(s.isSameTree(p[0].get(), q[0].get()));
}

TEST_CASE("isSameTreeTest4")
{
    auto p = tree::make_tree({10, 5, 15});
    auto q = tree::make_tree({10, 5, std::nullopt, std::nullopt, 15});

    Solution s;
    REQUIRE_FALSE(s.isSameTree(p[0].get(), q[0].get()));
}
