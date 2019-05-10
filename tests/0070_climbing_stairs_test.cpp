#include "0070_climbing_stairs.cpp"
#include <doctest.h>

TEST_CASE("climbStairs")
{
    Solution s;
    REQUIRE(s.climbStairs(1) == 1);
    REQUIRE(s.climbStairs(2) == 2);
    REQUIRE(s.climbStairs(3) == 3);
    REQUIRE(s.climbStairs(4) == 5);
    REQUIRE(s.climbStairs(5) == 8);
    REQUIRE(s.climbStairs(6) == 13);
    REQUIRE(s.climbStairs(7) == 21);
    REQUIRE(s.climbStairs(8) == 34);
    REQUIRE(s.climbStairs(9) == 55);
    REQUIRE(s.climbStairs(10) == 89);
    REQUIRE(s.climbStairs(11) == 144);
    REQUIRE(s.climbStairs(12) == 233);
    REQUIRE(s.climbStairs(13) == 377);
    REQUIRE(s.climbStairs(14) == 610);
    REQUIRE(s.climbStairs(15) == 987);
}
