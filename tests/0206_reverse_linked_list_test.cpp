#include "0206_reverse_linked_list.cpp"
#include "listNode.hpp"
#include <doctest.h>
#include <memory>

TEST_CASE("reverseList")
{
    // l = 1->2->3->4->5->null
    auto l0 = std::make_unique<ListNode>(1);
    auto l1 = std::make_unique<ListNode>(2);
    auto l2 = std::make_unique<ListNode>(3);
    auto l3 = std::make_unique<ListNode>(4);
    auto l4 = std::make_unique<ListNode>(5);
    l0->next = l1.get();
    l1->next = l2.get();
    l2->next = l3.get();
    l3->next = l4.get();

    Solution s;
    auto r = s.reverseList(l0.get());
    for (auto i : {5, 4, 3, 2, 1})
    {
        REQUIRE(r != nullptr);
        REQUIRE(r->val == i);
        r = r->next;
    }
    REQUIRE(r == nullptr);
}
