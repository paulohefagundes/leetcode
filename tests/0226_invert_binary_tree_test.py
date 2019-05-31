import importlib
import pytest
from algorithms.tree_node import TreeNode

module = importlib.import_module("algorithms.0226_invert_binary_tree")


def test_invert_tree():
    t0 = TreeNode(4)
    t1 = TreeNode(2)
    t2 = TreeNode(7)
    t3 = TreeNode(1)
    t4 = TreeNode(3)
    t5 = TreeNode(6)
    t6 = TreeNode(9)
    t0.left = t1
    t0.right = t2
    t1.left = t3
    t1.right = t4
    t2.left = t5
    t2.right = t6

    s = module.Solution()
    r = s.invertTree(t0)

    assert r.val == 4
    assert r.left.val == 7
    assert r.right.val == 2
    assert r.left.left.val == 9
    assert r.left.right.val == 6
    assert r.right.left.val == 3
    assert r.right.right.val == 1
