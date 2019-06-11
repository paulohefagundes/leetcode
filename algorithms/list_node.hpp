#pragma once

#include <memory>
#include <vector>

struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

namespace list
{
std::vector<std::unique_ptr<ListNode>> make_list(std::initializer_list<int> values);
bool same_values(ListNode* head, std::initializer_list<int> values);
} // namespace list
