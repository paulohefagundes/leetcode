#include "0268_missing_number.cpp"
#include <doctest.h>

TEST_CASE("ValidParenthesesTests")
{
    std::vector<int> nums{3, 0, 1};
    Solution s = Solution();
    CHECK(s.missingNumber(nums) == 2);

    nums = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    CHECK(s.missingNumber(nums) == 8);
}
