#include "0191_number_of_1_bits.cpp"
#include <doctest.h>

TEST_CASE("hammingWeight")
{
    Solution solution = Solution();

    REQUIRE(solution.hammingWeight(0b00000000000000000000000010000000) == 1);
    REQUIRE(solution.hammingWeight(0b00000000000000000000000000000001) == 1);
    REQUIRE(solution.hammingWeight(0b00000000000000000000000000001011) == 3);
    REQUIRE(solution.hammingWeight(0b11111111111111111111111111111101) == 31);
}
