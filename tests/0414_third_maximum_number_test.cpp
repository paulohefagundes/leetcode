#include "0414_third_maximum_number.cpp"
#include <doctest.h>

TEST_CASE("thirdMax")
{
    Solution s = Solution();
    std::vector<int> nums{3, 2, 1};
    CHECK(s.thirdMax(nums) == 1);

    nums = {1, 2};
    CHECK(s.thirdMax(nums) == 2);

    nums = {2, 2, 3, 1};
    CHECK(s.thirdMax(nums) == 1);
}
