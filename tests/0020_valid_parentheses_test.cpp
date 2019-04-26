#include "0020_valid_parentheses.cpp"
#include <catch2/catch.hpp>

TEST_CASE("ValidParenthesesTests")
{
    Solution s = Solution();
    CHECK(s.isValid("()"));
    CHECK(s.isValid("()[]{}"));
    CHECK_FALSE(s.isValid("(]"));
    CHECK_FALSE(s.isValid("([)]"));
    CHECK(s.isValid("{[]}"));
    CHECK(s.isValid(""));
    CHECK_FALSE(s.isValid("}"));
    CHECK_FALSE(s.isValid("(])"));
}
