#include "0121_best_time_to_buy_and_sell_stock.cpp"
#include <catch2/catch.hpp>

#include <iostream>

TEST_CASE("foo")
{
    Solution s;

    std::vector<int> v{7, 1, 5, 3, 6, 4};
    CHECK(s.maxProfit(v) == 5); // 6-1

    v = {7, 6, 4, 3, 1};
    CHECK(s.maxProfit(v) == 0);

    v = {4, 3, 0, 7};
    CHECK(s.maxProfit(v) == 7); // 7-0

    v = {10, 9, 2, 6};
    CHECK(s.maxProfit(v) == 4); // 6-2

    v = {4, 10, 2, 1, 1, 2, 3, 4, 5, 6};
    CHECK(s.maxProfit(v) == 6); // 10-4

    v = {4, 10, 2, 1, 1, 2, 3, 8, 5, 6};
    CHECK(s.maxProfit(v) == 7); // 8-1
}
