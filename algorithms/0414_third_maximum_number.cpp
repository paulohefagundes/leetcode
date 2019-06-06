#include <algorithm>
#include <set>
#include <vector>

/*
 * 414. Third Maximum Number
 *
 * Given a non-empty array of integers, return the third maximum number in this array. If it does not exist, return the
 * maximum number. The time complexity must be in O(n).
 *
 * Example 1:
 *   Input: [3, 2, 1]
 *   Output: 1
 *   Explanation: The third maximum is 1.
 *
 * Example 2:
 *   Input: [1, 2]
 *   Output: 2
 *   Explanation: The third maximum does not exist, so the maximum (2) is returned instead.
 *
 * Example 3:
 *   Input: [2, 2, 3, 1]
 *   Output: 1
 *   Explanation: Note that the third maximum here means the third maximum distinct number.
 *   Both numbers with value 2 are both considered as second maximum.
 **/

class Solution
{
  public:
    // time: O(n) - set with 3 elements = O(nlog(3)) => O(n)
    // space: O(1) - set has 3 or 4 items always at the most
    int thirdMax(std::vector<int>& nums)
    {
        constexpr const int max = 3;
        std::set<int> set;
        for (auto n : nums)
        {
            set.insert(n);
            if (set.size() > max)
            {
                set.erase(set.begin());
            }
        }

        return set.size() == max ? *set.begin() : *set.rbegin();
    }

    // time: O(nlogn) - make_heap
    // space: O(1)
    int thirdMaxFirstAttempt(std::vector<int>& nums)
    {
        std::make_heap(nums.begin(), nums.end());
        int first = nums.front(); // max
        int second = first;
        int third;
        if (nums.size() > 1)
        {
            while (second == first)
            {
                std::pop_heap(nums.begin(), nums.end());
                nums.pop_back();
                second = nums.front();
                if (nums.empty())
                {
                    return first;
                }
            }
            third = second;
            while (third == second)
            {
                std::pop_heap(nums.begin(), nums.end());
                nums.pop_back();
                third = nums.front();
                if (nums.empty())
                {
                    return first;
                }
            }
            return third;
        }
        return first;
    }
};
