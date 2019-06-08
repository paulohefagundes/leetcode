#include "0235_lowest_common_ancestor_of_a_binary_search_tree.cpp"
#include <doctest.h>
#include <memory>

TEST_CASE("lowestCommonAncestor1")
{
    auto v = tree::make_tree({6, 2, 8, 0, 4, 7, 9, std::nullopt, std::nullopt, 3, 5});

    Solution s = Solution();
    CHECK(s.lowestCommonAncestor(v[0].get(), v[1].get(), v[2].get()) == v[0].get());
    CHECK(s.lowestCommonAncestor(v[0].get(), v[2].get(), v[1].get()) == v[0].get());

    CHECK(s.lowestCommonAncestor(v[0].get(), v[1].get(), v[4].get()) == v[1].get());
    CHECK(s.lowestCommonAncestor(v[0].get(), v[4].get(), v[1].get()) == v[1].get());
}
