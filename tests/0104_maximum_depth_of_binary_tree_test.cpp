#include "0104_maximum_depth_of_binary_tree.cpp"
#include <doctest.h>

TEST_CASE("maxDepth")
{
    auto t = tree::make_tree({3, 9, 20, std::nullopt, std::nullopt, 15, 7});

    Solution s = Solution();
    REQUIRE(s.maxDepth(t[0].get()) == 3);
}
