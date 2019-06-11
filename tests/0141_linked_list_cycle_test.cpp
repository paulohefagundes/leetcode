#include "0141_linked_list_cycle.cpp"
#include <doctest.h>

TEST_CASE("hasCycle = true")
{
    // head = [3,2,0,-4], pos = 1 => true
    auto l = list::make_list({3, 2, 0, -4});
    l[3]->next = l[1].get();

    Solution s;
    REQUIRE(s.hasCycle(l[0].get()));
}

TEST_CASE("hasCycle2 = true")
{
    // head = [1, 2], pos = 0 => true
    auto l = list::make_list({1, 2});
    l[1]->next = l[0].get();

    Solution s;
    REQUIRE(s.hasCycle(l[0].get()));
}

TEST_CASE("hasCycle = false")
{
    // head = [1], pos = -1 => false
    auto l0 = std::make_unique<ListNode>(1);

    Solution s;
    REQUIRE_FALSE(s.hasCycle(l0.get()));
}
