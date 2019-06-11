#include "list_node.hpp"

/*******************************************************************************
 * Source: https://leetcode.com/problems/merge-two-sorted-lists/
 *
 * Merge two sorted linked lists and return it as a new list.
 * The new list should be made by splicing together the nodes of the first two lists.
 *
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
    // recursive solution
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
    {
        if (!l1)
            return l2;
        if (!l2)
            return l1;

        if (l1->val <= l2->val)
        {
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        }
        else
        {
            l2->next = mergeTwoLists(l2->next, l1);
            return l2;
        }
    }

    // iterative solution
    // time: O(n)
    // space: O(1)
    ListNode* mergeTwoListsIterative(ListNode* l1, ListNode* l2)
    {
        if (!l1)
        {
            return l2;
        }
        else if (!l2)
        {
            return l1;
        }

        ListNode* head = nullptr;

        // add the first element
        if (l1->val <= l2->val)
        {
            head = l1;
            l1 = l1->next;
        }
        else
        {
            head = l2;
            l2 = l2->next;
        }
        ListNode* tail = head;

        // iterate through the lists
        while (l1 && l2)
        {
            if (l1->val <= l2->val)
            {
                tail->next = l1;
                l1 = l1->next;
            }
            else
            {
                tail->next = l2;
                l2 = l2->next;
            }
            tail = tail->next;
        }

        // add the rest
        tail->next = (l1 ? l1 : l2);

        return head;
    }
};
