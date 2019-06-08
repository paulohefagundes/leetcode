#include "tree_node.hpp"

/**
   235. Lowest Common Ancestor of a Binary Search Tree

   Given a binary search tree (BST), find the lowest common ancestor (LCA) of two given nodes in the BST.

   According to the definition of LCA on Wikipedia:
     “The lowest common ancestor is defined between two nodes p and q as the lowest node in T that
        has both p and q as descendants (where we allow a node to be a descendant of itself).”

   Example 1:
     Input: root = [6,2,8,0,4,7,9,null,null,3,5], p = 2, q = 8
     Output: 6
     Explanation: The LCA of nodes 2 and 8 is 6.

   Example 2:
     Input: root = [6,2,8,0,4,7,9,null,null,3,5], p = 2, q = 4
     Output: 2
     Explanation: The LCA of nodes 2 and 4 is 2, since a node can be a descendant of itself
                   according to the LCA definition.

   Note:
     All of the nodes' values will be unique.
     p and q are different and both values will exist in the BST.
*/

enum class Direction
{
    LEFT,
    RIGHT
};

class Solution
{
  public:
    // time: O(n)
    // space: O(1)
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        TreeNode* node = root;

        while (node)
        {
            if (p->val < node->val && q->val < node->val)
            {
                node = node->left;
            }
            else if (p->val > node->val && q->val > node->val)
            {
                node = node->right;
            }
            else
            {
                break;
            }
        }

        return node;
    }

    TreeNode* lowestCommonAncestorFirstAttempt(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        if (root == p || root == q)
        {
            return root;
        }

        auto p_directions = find_directions_for_node(root, p);
        auto q_directions = find_directions_for_node(root, q);

        const std::size_t size = std::min(p_directions.size(), q_directions.size());

        TreeNode* n = root;
        for (std::size_t i = 0; i < size; i++)
        {
            if (p_directions[i] == q_directions[i])
            {
                if (p_directions[i] == Direction::LEFT)
                {
                    n = n->left;
                }
                else
                {
                    n = n->right;
                }
            }
            else
            {
                break;
            }
        }

        return n;
    }

  private:
    std::vector<Direction> find_directions_for_node(TreeNode* root, TreeNode* node)
    {
        std::vector<Direction> directions;
        while (root)
        {
            if (root == node)
            {
                break;
            }

            if (node->val < root->val)
            {
                root = root->left;
                directions.emplace_back(Direction::LEFT);
            }
            else
            {
                root = root->right;
                directions.emplace_back(Direction::RIGHT);
            }
        }
        return directions;
    }
};
