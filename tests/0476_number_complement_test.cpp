#include "0476_number_complement.cpp"
#include <doctest.h>

TEST_CASE("numberComplement")
{
    // setup
    Solution solution = Solution();

    REQUIRE(solution.findComplement(5) == 2);
    REQUIRE(solution.findComplement(2) == 1);
    REQUIRE(solution.findComplement(1) == 0);
    REQUIRE(solution.findComplement(0) == 0);
}
