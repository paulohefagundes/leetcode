#include "0141_linked_list_cycle.cpp"
#include "listNode.hpp"
#include <catch2/catch.hpp>
#include <memory>

TEST_CASE("hasCycle = true")
{
    // head = [3,2,0,-4], pos = 1 => true
    auto l0 = std::make_unique<ListNode>(3);
    auto l1 = std::make_unique<ListNode>(2);
    auto l2 = std::make_unique<ListNode>(0);
    auto l3 = std::make_unique<ListNode>(-4);
    l0->next = l1.get();
    l1->next = l2.get();
    l2->next = l3.get();
    l3->next = l1.get();

    Solution s;
    REQUIRE(s.hasCycle(l0.get()));
}

TEST_CASE("hasCycle2 = true")
{
    // head = [1, 2], pos = 0 => true
    auto l0 = std::make_unique<ListNode>(1);
    auto l1 = std::make_unique<ListNode>(2);
    l0->next = l1.get();
    l1->next = l0.get();

    Solution s;
    REQUIRE(s.hasCycle(l0.get()));
}

TEST_CASE("hasCycle = false")
{
    // head = [1], pos = -1 => false
    auto l0 = std::make_unique<ListNode>(1);

    Solution s;
    REQUIRE_FALSE(s.hasCycle(l0.get()));
}
