#include <unordered_set>
#include <vector>

/*
 * Given an array of integers, find if the array contains any duplicates.
 *
 * Your function should return true if any value appears at least twice in the array,
 *   and it should return false if every element is distinct.
 *
 * Example 1:
 *   Input: [1,2,3,1]
 *   Output: true
 *
 * Example 2:
 *   Input: [1,2,3,4]
 *   Output: false
 *
 * Example 3:
 *   Input: [1,1,1,3,3,4,3,2,4,2]
 *   Output: true
 */

class Solution
{
  public:
    // time: O(n)
    // space: O(n)
    bool containsDuplicate(const std::vector<int>& nums)
    {
        const std::unordered_set<int> set{nums.begin(), nums.end()};
        return nums.size() != set.size();
    }
};
