#include "list_node.hpp"
#include <doctest.h>

TEST_CASE("make_list")
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

    auto l = list::make_list({1, 2, 3, 4, 5});
    REQUIRE(l.size() == 5);

    for (int i : {1, 2, 3, 4, 5})
    {
        REQUIRE(l[static_cast<std::size_t>(i) - 1].get() != nullptr);
        REQUIRE(l[static_cast<std::size_t>(i) - 1]->val == i);
        if (i < 4)
            REQUIRE(l[static_cast<std::size_t>(i)]->next == l[static_cast<std::size_t>(i) + 1].get());
    }
    REQUIRE(l[4]->next == nullptr);
}

TEST_CASE("same_values")
{
    auto values1 = {1, 2, 3, 4};
    auto values2 = {1, 2, 3, 4, 5};
    auto list1 = list::make_list(values1);
    auto list2 = list::make_list(values2);
    CHECK(list::same_values(list1[0].get(), values1));
    CHECK(list::same_values(list2[0].get(), values2));
    CHECK_FALSE(list::same_values(list1[0].get(), values2));
    CHECK_FALSE(list::same_values(list2[0].get(), values1));
}
