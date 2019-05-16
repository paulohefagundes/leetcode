#include <cctype>
#include <string>

/*
 * 125. valid palindrome
 *
 * Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.
 *
 * Note: For the purpose of this problem, we define empty string as valid palindrome.
 *
 * Example 1:
 *   Input: "A man, a plan, a canal: Panama"
 *   Output: true
 *
 * Example 2:
 *   Input: "race a car"
 *   Output: false
 */

class Solution
{
  public:
    // time:  O(n)
    // space: O(1)
    bool isPalindrome(std::string s)
    {
        auto left = s.begin();
        auto right = s.end();

        while (left < right)
        {
            while (!std::isalnum(*left) && left < right)
                left++;
            while (!std::isalnum(*right) && left < right)
                right--;

            if (tolower(*left) != tolower(*right))
                return false;

            left++;
            right--;
        }

        return true;
    }

    bool isPalindromeFirstAttempt(std::string s)
    {
        int i = 0;
        int j = s.size() - 1;

        while (i < j)
        {
            if (!std::isalnum(s[i]))
            {
                i++;
                continue;
            }

            if (!std::isalnum(s[j]))
            {
                j--;
                continue;
            }

            if (tolower(s[i]) != tolower(s[j]))
            {
                return false;
            }

            i++;
            j--;
        }

        return true;
    }
};
