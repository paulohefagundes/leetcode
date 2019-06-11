#include "list_node.hpp"
#include <iostream>

namespace list
{

std::vector<std::unique_ptr<ListNode>> make_list(std::initializer_list<int> values)
{
    std::vector<std::unique_ptr<ListNode>> v;
    std::size_t i = 0;

    for (auto val : values)
    {
        v.emplace_back(std::make_unique<ListNode>(val));
        if (i > 0)
        {
            v[i - 1].get()->next = v[i].get();
        }
        i++;
    }

    return v;
}

bool same_values(ListNode* head, std::initializer_list<int> values)
{
    for (auto val : values)
    {
        if (head == nullptr || head->val != val)
        {
            return false;
        }
        head = head->next;
    }

    return head == nullptr;
}

void print_list(ListNode* list)
{
    while (list != nullptr)
    {
        std::cerr << list->val << "->";
        list = list->next;
    }
    std::cerr << "null\n";
}

} // namespace list
