#include <limits>
#include <vector>

class Solution
{
  public:
    // kadane's algorithm
    // time: O(n)
    // space: O(1)
    int maxSubArray(const std::vector<int>& nums)
    {
        int current = nums[0];
        int result = current;
        for (size_t i = 1; i < nums.size(); i++)
        {
            current = std::max(nums[i], current + nums[i]);
            result = std::max(result, current);
        }

        return result;
    }
};
