#include <vector>

// Source : https://leetcode.com/problems/two-sum/
// time complexity: O(n^2)
// space complexity: O(1)

/*******************************************************************************
 * Given an array of integers, return indices of the two numbers such that they
 * add up to a specific target.
 *
 * You may assume that each input would have exactly one solution, and you may
 * not use the same element twice.
 *******************************************************************************/

class Solution
{
  public:
    std::vector<int> twoSum(const std::vector<int>& nums, int target)
    {

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                    return std::vector{i, j};
            }
        }

        return std::vector<int>();
    }
};
