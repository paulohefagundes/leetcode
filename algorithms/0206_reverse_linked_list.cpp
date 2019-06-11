#include "list_node.hpp"

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
  public:
    // time:  O(n)
    // space: O(1)
    ListNode* reverseList(ListNode* head)
    {
        ListNode* prev = nullptr;
        auto curr = head;
        while (curr != nullptr)
        {
            auto next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    // time:  O(n)
    // space: O(n)
    ListNode* reverseListR(ListNode* head)
    {
        if (head == nullptr || head->next == nullptr)
        {
            return head;
        }

        auto p = reverseList(head->next);
        head->next->next = head;
        head->next = nullptr;
        return p;
    }
};
