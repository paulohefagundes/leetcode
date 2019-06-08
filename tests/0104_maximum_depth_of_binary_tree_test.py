import importlib
import pytest
from algorithms.tree_node import make_tree

module = importlib.import_module("algorithms.0104_maximum_depth_of_binary_tree")


def test_max_depth():
    t = make_tree([3, 9, 20, None, None, 15, 7])

    s = module.Solution()
    assert s.maxDepth(t[0]) == 3
