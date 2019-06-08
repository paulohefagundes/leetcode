import importlib
import pytest
from algorithms.tree_node import make_tree

module = importlib.import_module("algorithms.0226_invert_binary_tree")


def test_invert_tree():
    t = make_tree([4, 2, 7, 1, 3, 6, 9])

    s = module.Solution()
    r = s.invertTree(t[0])

    assert r.val == 4
    assert r.left.val == 7
    assert r.right.val == 2
    assert r.left.left.val == 9
    assert r.left.right.val == 6
    assert r.right.left.val == 3
    assert r.right.right.val == 1
