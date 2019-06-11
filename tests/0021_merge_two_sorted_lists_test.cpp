#include "0021_merge_two_sorted_lists.cpp"
#include <doctest.h>

TEST_CASE("mergeTwoListsTest1")
{
    auto l = list::make_list({1, 2, 4});
    auto r = list::make_list({1, 3, 4});

    Solution s = Solution();
    auto result = s.mergeTwoLists(l[0].get(), r[0].get());

    // result = 1->1->2->3->4->4
    REQUIRE(list::same_values(result, {1, 1, 2, 3, 4, 4}));
}

TEST_CASE("mergeTwoListsTest2")
{
    auto l = list::make_list({2, 3, 4});
    auto r = list::make_list({1, 2, 5});

    Solution s = Solution();
    auto result = s.mergeTwoLists(l[0].get(), r[0].get());

    // result = 1->2->2->3->4->5
    REQUIRE(list::same_values(result, {1, 2, 2, 3, 4, 5}));
}

TEST_CASE("mergeTwoListsTest3")
{
    auto l = list::make_list({2, 3, 4});
    auto r = list::make_list({5, 6, 7});

    Solution s = Solution();
    auto result = s.mergeTwoLists(l[0].get(), r[0].get());

    // result = 2->3->4->5->6->7
    REQUIRE(list::same_values(result, {2, 3, 4, 5, 6, 7}));
}

TEST_CASE("mergeTwoListsTest4")
{
    auto l = list::make_list({4, 5, 6});
    auto r = list::make_list({1, 2, 3});

    Solution s = Solution();
    auto result = s.mergeTwoLists(l[0].get(), r[0].get());

    // result = 1->2->3->4->5->6
    REQUIRE(list::same_values(result, {1, 2, 3, 4, 5, 6}));
}
