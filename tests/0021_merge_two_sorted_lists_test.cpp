#include "0021_merge_two_sorted_lists.cpp"
#include "listNode.hpp"
#include <catch2/catch.hpp>
#include <iostream>
#include <memory>

void print_list(ListNode* list)
{
    while (list != nullptr)
    {
        std::cerr << list->val << "->";
        list = list->next;
    }
    std::cerr << "null\n";
}

TEST_CASE("mergeTwoListsTest1")
{
    // l = 1->2->4
    auto l0 = std::make_unique<ListNode>(1);
    auto l1 = std::make_unique<ListNode>(2);
    auto l2 = std::make_unique<ListNode>(4);
    l0->next = l1.get();
    l1->next = l2.get();

    // r = 1->3->4
    auto r0 = std::make_unique<ListNode>(1);
    auto r1 = std::make_unique<ListNode>(3);
    auto r2 = std::make_unique<ListNode>(4);
    r0->next = r1.get();
    r1->next = r2.get();

    Solution s = Solution();
    auto result = s.mergeTwoLists(l0.get(), r0.get());

    // result = 1->1->2->3->4->4
    REQUIRE(result != nullptr);
    REQUIRE(result->val == 1);
    REQUIRE(result->next != nullptr);
    REQUIRE(result->next->val == 1);
    REQUIRE(result->next->next != nullptr);
    REQUIRE(result->next->next->val == 2);
    REQUIRE(result->next->next->next != nullptr);
    REQUIRE(result->next->next->next->val == 3);
    REQUIRE(result->next->next->next->next != nullptr);
    REQUIRE(result->next->next->next->next->val == 4);
    REQUIRE(result->next->next->next->next->next != nullptr);
    REQUIRE(result->next->next->next->next->next->val == 4);
    REQUIRE(result->next->next->next->next->next->next == nullptr);
}

TEST_CASE("mergeTwoListsTest2")
{
    // l = 2->3->4
    auto l0 = std::make_unique<ListNode>(2);
    auto l1 = std::make_unique<ListNode>(3);
    auto l2 = std::make_unique<ListNode>(4);
    l0->next = l1.get();
    l1->next = l2.get();

    // l = 1->2->5
    auto r0 = std::make_unique<ListNode>(1);
    auto r1 = std::make_unique<ListNode>(2);
    auto r2 = std::make_unique<ListNode>(5);
    r0->next = r1.get();
    r1->next = r2.get();

    Solution s = Solution();
    auto result = s.mergeTwoLists(l0.get(), r0.get());

    // result = 1->2->2->3->4->5
    REQUIRE(result != nullptr);
    REQUIRE(result->val == 1);
    REQUIRE(result->next->val == 2);
    REQUIRE(result->next->next->val == 2);
    REQUIRE(result->next->next->next->val == 3);
    REQUIRE(result->next->next->next->next->val == 4);
    REQUIRE(result->next->next->next->next->next->val == 5);
    REQUIRE(result->next->next->next->next->next->next == nullptr);
}

TEST_CASE("mergeTwoListsTest3")
{
    // l = 2->3->4
    auto l0 = std::make_unique<ListNode>(2);
    auto l1 = std::make_unique<ListNode>(3);
    auto l2 = std::make_unique<ListNode>(4);
    l0->next = l1.get();
    l1->next = l2.get();

    // l2 = 5->6->7
    auto r0 = std::make_unique<ListNode>(5);
    auto r1 = std::make_unique<ListNode>(6);
    auto r2 = std::make_unique<ListNode>(7);
    r0->next = r1.get();
    r1->next = r2.get();

    Solution s = Solution();
    auto result = s.mergeTwoLists(l0.get(), r0.get());

    // result = 2->3->4->5->6->7
    REQUIRE(result != nullptr);
    REQUIRE(result->val == 2);
    REQUIRE(result->next->val == 3);
    REQUIRE(result->next->next->val == 4);
    REQUIRE(result->next->next->next->val == 5);
    REQUIRE(result->next->next->next->next->val == 6);
    REQUIRE(result->next->next->next->next->next->val == 7);
    REQUIRE(result->next->next->next->next->next->next == nullptr);
}

TEST_CASE("mergeTwoListsTest4")
{
    // l = 4->5->6
    auto l0 = std::make_unique<ListNode>(4);
    auto l1 = std::make_unique<ListNode>(5);
    auto l2 = std::make_unique<ListNode>(6);
    l0->next = l1.get();
    l1->next = l2.get();

    // r = 1->2->3
    auto r0 = std::make_unique<ListNode>(1);
    auto r1 = std::make_unique<ListNode>(2);
    auto r2 = std::make_unique<ListNode>(3);
    r0->next = r1.get();
    r1->next = r2.get();

    Solution s = Solution();
    auto result = s.mergeTwoLists(l0.get(), r0.get());

    // result = 1->2->3->4->5->6
    REQUIRE(result != nullptr);
    REQUIRE(result->val == 1);
    REQUIRE(result->next->val == 2);
    REQUIRE(result->next->next->val == 3);
    REQUIRE(result->next->next->next->val == 4);
    REQUIRE(result->next->next->next->next->val == 5);
    REQUIRE(result->next->next->next->next->next->val == 6);
    REQUIRE(result->next->next->next->next->next->next == nullptr);
}
