#include "0125_valid_palindrome.cpp"
#include <doctest.h>

TEST_CASE("ValidParenthesesTests")
{
    Solution s = Solution();
    CHECK(s.isPalindrome("A man, a plan, a canal: Panama"));
    CHECK(s.isPalindrome(""));
    CHECK(s.isPalindrome("s"));
    CHECK(s.isPalindrome("ss"));
    CHECK(s.isPalindrome("sAs"));
    CHECK_FALSE(s.isPalindrome("race a car"));
}
