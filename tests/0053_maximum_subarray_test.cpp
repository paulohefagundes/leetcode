#include "0053_maximum_subarray.cpp"
#include <catch2/catch.hpp>

TEST_CASE("maxSubArrayTest")
{
    Solution s;

    std::vector<int> v{-2, 1, -3, 4, -1, 2, 1, -5, 4};
    CHECK(s.maxSubArray(v) == 6); // [4,-1,2,1]

    v = {-1, -2, -3, 3, -2};
    CHECK(s.maxSubArray(v) == 3); // [3]

    v = {-1, 2, -1, 1, 1, -4, -5};
    CHECK(s.maxSubArray(v) == 3); // [2, -1, 1, 1]]
}
