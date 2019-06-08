#include "tree_node.hpp"

namespace tree
{
std::vector<std::unique_ptr<TreeNode>> make_tree(std::initializer_list<std::optional<int>> node_values)
{
    std::vector<std::unique_ptr<TreeNode>> v;

    for (auto opt : node_values)
    {
        v.emplace_back(opt ? std::make_unique<TreeNode>(opt.value()) : std::unique_ptr<TreeNode>());
    }

    const auto size = v.size() - 1;

    for (std::size_t i = 0; i < size; i++)
    {
        std::size_t n = 2 * i + 1;
        if (n > size)
            break;

        if (v[i])
        {
            v[i]->left = v[n++].get();
            if (n > size)
            {
                break;
            }
            v[i]->right = v[n].get();
        }
    }

    return v;
}
} // namespace tree
