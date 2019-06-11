#include "0206_reverse_linked_list.cpp"
#include <doctest.h>

TEST_CASE("reverseList")
{
    // l = 1->2->3->4->5->null
    auto l = list::make_list({1, 2, 3, 4, 5});

    Solution s;
    auto r = s.reverseList(l[0].get());
    REQUIRE(list::same_values(r, {5, 4, 3, 2, 1}));
}
