#include "0217_contains_duplicate.cpp"
#include <doctest.h>

TEST_CASE("reverseList")
{
    Solution s;
    std::vector<int> v;
    REQUIRE_FALSE(s.containsDuplicate(v));

    v = {1, 2, 3, 4, 5};
    REQUIRE_FALSE(s.containsDuplicate(v));

    v = {1, 2, 3, 1};
    REQUIRE(s.containsDuplicate(v));
}
