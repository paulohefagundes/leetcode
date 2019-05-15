import importlib
import pytest
from algorithms.tree_node import TreeNode

module = importlib.import_module("algorithms.0104_maximum_depth_of_binary_tree")


def test_max_depth():
    # [3,9,20,null,null,15,7]
    t0 = TreeNode(3)
    t1 = TreeNode(9)
    t2 = TreeNode(20)
    t5 = TreeNode(15)
    t6 = TreeNode(7)
    t0.left = t1
    t0.right = t2
    t2.left = t5
    t2.right = t6

    s = module.Solution()
    assert s.maxDepth(t0) == 3
