/*
 * Given two binary trees, write a function to check if they are the same or not.
 *
 * Two binary trees are considered the same if they are structurally identical and the nodes have the same value.

**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

#include "tree_node.hpp"

class Solution
{
  public:
    // time: O(n)
    // space: O(n) (best: O(log(n)), worst: O(n)) - for recursion stack
    bool isSameTree(TreeNode* p, TreeNode* q)
    {
        if (p == nullptr || q == nullptr)
            return p == q;

        return (p->val == q->val) && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};
