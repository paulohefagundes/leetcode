#include "0001_two_sum.cpp"
#include <doctest.h>

TEST_CASE("SimpleTest")
{
    Solution solution = Solution();
    REQUIRE(solution.twoSum({2, 7, 11, 15}, 9) == std::vector{0, 1});
    REQUIRE(solution.twoSum({3, 2, 4}, 6) == std::vector{1, 2});
}
