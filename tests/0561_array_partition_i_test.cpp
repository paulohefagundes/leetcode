#include "0561_array_partition_i.cpp"
#include <doctest.h>

TEST_CASE("arrayPairSum")
{
    // setup
    Solution solution = Solution();

    std::vector<int> list{1, 4, 3, 2};
    REQUIRE(solution.arrayPairSum(list) == 4);

    list = std::vector{7, 3, 1, 0, 0, 6};
    REQUIRE(solution.arrayPairSum(list) == 7);
}
