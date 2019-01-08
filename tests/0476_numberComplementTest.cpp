#include "0476_numberComplement.hpp"
#include <catch2/catch.hpp>

TEST_CASE("numberComplement")
{
    // setup
    Solution solution = Solution();

    REQUIRE(solution.findComplement(5) == 2);
    REQUIRE(solution.findComplement(2) == 1);
    REQUIRE(solution.findComplement(1) == 0);
    REQUIRE(solution.findComplement(0) == 0);
}
