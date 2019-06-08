#pragma once

#include <memory>
#include <optional>
#include <vector>

// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

namespace tree
{
std::vector<std::unique_ptr<TreeNode>> make_tree(std::initializer_list<std::optional<int>>);
}
