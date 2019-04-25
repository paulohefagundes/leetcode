#include <unordered_map>
#include <vector>

/*******************************************************************************
 * Source: https://leetcode.com/problems/two-sum/
 *
 * Given an array of integers, return indices of the two numbers such that they
 * add up to a specific target.
 *
 * You may assume that each input would have exactly one solution, and you may
 * not use the same element twice.
 *******************************************************************************/

class Solution
{
  public:
    /*
    // brute force algorithm
    // time:  O(n^2)
    // space: O(1)
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

        return {};
    }
    */

    // one-pass hash table
    // time:  O(n)
    // space: O(n)
    std::vector<int> twoSum(const std::vector<int>& nums, int target)
    {
        std::unordered_map<int, int> map;
        int i = 0;
        for (auto n : nums)
        {
            if (map.find(n) != map.end())
            {
                return {map[n], i};
            }
            map[target - n] = i++;
        }
        return {};
    }
};
