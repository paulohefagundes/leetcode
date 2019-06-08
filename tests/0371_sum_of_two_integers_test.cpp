#include "0371_sum_of_two_integers.cpp"
#include <doctest.h>

TEST_CASE("getSum")
{
    Solution s = Solution();
    CHECK(s.getSum(0, 0) == 0);
    CHECK(s.getSum(-1, 1) == 0);
    CHECK(s.getSum(1, -1) == 0);
    CHECK(s.getSum(1, 2) == 3);
    CHECK(s.getSum(3, 2) == 5);
    CHECK(s.getSum(7, 3) == 10);
    CHECK(s.getSum(-2, 3) == 1);
    CHECK(s.getSum(-10, 1) == -9);
}
