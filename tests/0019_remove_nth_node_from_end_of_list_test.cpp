#include "0019_remove_nth_node_from_end_of_list.cpp"
#include <doctest.h>

TEST_CASE("removeNthFromEnd1")
{
    Solution s = Solution();
    auto l = list::make_list({1, 2, 3, 4, 5});
    auto r = s.removeNthFromEnd(l[0].get(), 1);
    CHECK(list::same_values(r, {1, 2, 3, 4}));
}

TEST_CASE("removeNthFromEnd1 v2")
{
    Solution s = Solution();
    auto l = std::make_unique<ListNode>(1);
    auto r = s.removeNthFromEnd(l.get(), 1);
    CHECK(list::same_values(r, {}));
}

TEST_CASE("removeNthFromEnd1 v3")
{
    Solution s = Solution();
    auto l = list::make_list({1, 2});
    auto r = s.removeNthFromEnd(l[0].get(), 1);
    CHECK(list::same_values(r, {1}));
}

TEST_CASE("removeNthFromEnd2")
{
    Solution s = Solution();
    auto l = list::make_list({1, 2, 3, 4, 5});
    auto r = s.removeNthFromEnd(l[0].get(), 2);
    CHECK(list::same_values(r, {1, 2, 3, 5}));
}

TEST_CASE("removeNthFromEnd3")
{
    Solution s = Solution();
    auto l = list::make_list({1, 2, 3});
    auto r = s.removeNthFromEnd(l[0].get(), 3);
    CHECK(list::same_values(r, {2, 3}));
}
