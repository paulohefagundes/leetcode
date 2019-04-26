#include "0021_merge_two_sorted_lists.cpp"
#include "listNode.hpp"
#include <catch2/catch.hpp>
#include <iostream>

void print_list(ListNode* list)
{
    while (list)
    {
        std::cerr << list->val << "->";
        list = list->next;
    }
    std::cerr << "null\n";
}

TEST_CASE("mergeTwoListsTest1")
{
    // l1 = 1->2->4
    ListNode* l1 = new ListNode(1);
    l1->next = new ListNode(2);
    l1->next->next = new ListNode(4);
    // l2 = 1->3->4
    ListNode* l2 = new ListNode(1);
    l2->next = new ListNode(3);
    l2->next->next = new ListNode(4);

    Solution s = Solution();
    auto result = s.mergeTwoLists(l1, l2);

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
    // l1 = 2->3->4
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(3);
    l1->next->next = new ListNode(4);
    // l2 = 1->2->5
    ListNode* l2 = new ListNode(1);
    l2->next = new ListNode(2);
    l2->next->next = new ListNode(5);

    Solution s = Solution();
    auto result = s.mergeTwoLists(l1, l2);

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
    // l1 = 2->3->4
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(3);
    l1->next->next = new ListNode(4);
    // l2 = 5->6->7
    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(7);

    Solution s = Solution();
    auto result = s.mergeTwoLists(l1, l2);

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
    // l1 = 4->5->6
    ListNode* l1 = new ListNode(4);
    l1->next = new ListNode(5);
    l1->next->next = new ListNode(6);
    // l2 = 1->2->3
    ListNode* l2 = new ListNode(1);
    l2->next = new ListNode(2);
    l2->next->next = new ListNode(3);

    Solution s = Solution();
    auto result = s.mergeTwoLists(l1, l2);

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
