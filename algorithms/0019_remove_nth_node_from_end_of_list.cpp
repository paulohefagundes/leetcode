#include "list_node.hpp"

/*
  19. Remove Nth Node From End of List

  Given a linked list, remove the n-th node from the end of list and return its head.

  Example:
    Given linked list: 1->2->3->4->5, and n = 2.
    After removing the second node from the end, the linked list becomes 1->2->3->5.

  Note:
    Given n will always be valid.

  Follow up:
    Could you do this in one pass?
 */
class Solution
{
  public:
    // time:  O(n)
    // space: O(1)
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        auto dummy = std::make_unique<ListNode>(0);
        dummy->next = head;
        auto fast = dummy.get();
        auto slow = dummy.get();

        for (int i = 0; i <= n; i++)
        {
            fast = fast->next;
        }

        while (fast != nullptr)
        {
            fast = fast->next;
            slow = slow->next;
        }

        slow->next = slow->next->next;
        return dummy->next;
    }

    // time:  O(n)
    // space: O(n)
    ListNode* removeNthFromEndFirstAttempt(ListNode* head, int n)
    {
        if (n <= 0)
        {
            return head;
        }
        else if (head->next == nullptr && n == 1)
        {
            return nullptr;
        }

        std::vector<ListNode*> v;

        while (head)
        {
            v.push_back(head);
            head = head->next;
        }

        int i = v.size() - n - 1;
        if (i < 0)
            return v[1];

        v[i]->next = v[i]->next->next;
        return v[0];
    }
};
