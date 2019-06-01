#include <array>
#include <string>

/*
 * 242. Valid Anagram
 *
 * Given two strings s and t , write a function to determine if t is an anagram of s.
 *
 * Example 1:
 *
 * Input: s = "anagram", t = "nagaram"
 * Output: true
 * Example 2:
 *
 * Input: s = "rat", t = "car"
 * Output: false
 * Note:
 * You may assume the string contains only lowercase alphabets.
 *
 * Follow up:
 * What if the inputs contain unicode characters? How would you adapt your solution to such case?
 **/

class Solution
{
  public:
    // time:  O(n)
    // space: O(1)
    bool isAnagram(std::string s, std::string t)
    {
        if (s.size() != t.size())
            return false;

        std::array<int, 26> table{};
        for (char c : s)
        {
            table[static_cast<std::size_t>(c - 'a')]++;
        }

        for (char c : t)
        {
            const auto idx = static_cast<std::size_t>(c - 'a');
            table[idx]--;
            if (table[idx] < 0)
            {
                return false;
            }
        }

        return true;
    }
};
