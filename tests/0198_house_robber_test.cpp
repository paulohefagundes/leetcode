#include "0198_house_robber.cpp"
#include <doctest.h>

TEST_CASE("rob")
{
    Solution s = Solution();
    std::vector<int> v{1, 2, 3, 1};
    CHECK(s.rob(v) == 4); // 1+3

    v = {2, 7, 9, 3, 1};
    CHECK(s.rob(v) == 12); // 2+9+1

    v = {3, 1, 3, 1, 1, 10};
    CHECK(s.rob(v) == 16); // 3+3+10

    v = {3, 1, 3, 1, 1, 10, 1, 1, 20};
    CHECK(s.rob(v) == 36); // 3+3+10+20

    v = {2, 5, 17, 3, 9, 28, 19, 29, 5, 7, 31};
    CHECK(s.rob(v) == 107); // 2+17+28+29+31
}
