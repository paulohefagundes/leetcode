/*******************************************************************************
 * Source: https://leetcode.com/problems/linked-list-cycle/
 *
 * Given a linked list, determine if it has a cycle in it.
 *
 * To represent a cycle in the given linked list, we use an integer pos which represents the position (0-indexed) in the
 * linked list where tail connects to. If pos is -1, then there is no cycle in the linked list.
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include "listNode.hpp"
#include <unordered_set>

class Solution
{
  public:
    // solution using pointers
    // time: O(n)
    // space: O(1)
    bool hasCycle(ListNode* head)
    {
        if (head == nullptr || head->next == nullptr)
            return false;

        ListNode* slow = head;
        ListNode* fast = head->next;

        while (slow != fast)
        {
            if (fast == nullptr || fast->next == nullptr)
                return false;
            slow = slow->next;
            fast = fast->next->next;
        }
        return true;
    }

    // solution using hash table
    // time: O(n)
    // space: O(n)
    bool hasCycleSet(ListNode* head)
    {
        std::unordered_set<ListNode*> pointers;
        ListNode* p = head;
        while (p != nullptr)
        {
            if (pointers.count(p) > 0)
                return true;
            pointers.insert(p);
            p = p->next;
        }
        return false;
    }
};
