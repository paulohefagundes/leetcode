#include "0461_hammingDistance.cpp"
#include "catch.hpp"

TEST_CASE("hammingDistance")
{
    Solution solution = Solution();

    REQUIRE(solution.hammingDistance(1, 4) == 2);
    REQUIRE(solution.hammingDistance(3, 4) == 3);
}