#include "0242_valid_anagram.cpp"
#include <doctest.h>

TEST_CASE("isAnagram")
{
    Solution s = Solution();
    CHECK(s.isAnagram("rat", "tar"));
    CHECK(s.isAnagram("anagram", "nagaram"));
    CHECK_FALSE(s.isAnagram("ab", "a"));
    CHECK_FALSE(s.isAnagram("ac", "bb"));
    CHECK_FALSE(s.isAnagram("rat", "car"));
}
