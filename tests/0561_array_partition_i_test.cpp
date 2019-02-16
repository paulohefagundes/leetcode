#include "0561_array_partition_i.cpp"
#include <catch2/catch.hpp>

TEST_CASE("arrayPairSum")
{
    // setup
    std::vector<int> list{1, 4, 3, 2};
    Solution solution = Solution();

    REQUIRE(solution.arrayPairSum(list) == 4);

    list.clear();
    list.push_back(7);
    list.push_back(3);
    list.push_back(1);
    list.push_back(0);
    list.push_back(0);
    list.push_back(6);
    REQUIRE(solution.arrayPairSum(list) == 7);
}
