import importlib
from algorithms.tree_node import make_tree

module = importlib.import_module("algorithms.0617_merge_two_binary_trees")


def test_merge_trees():
    a = make_tree([1, 3, 2, 5])
    b = make_tree([2, 1, 3, None, 4, None, 7])

    s = module.Solution()
    r = s.mergeTrees(a[0], b[0])

    assert r is not None
    assert r.val == 3
    assert r.left.val == 4
    assert r.right.val == 5
    assert r.left.left.val == 5
    assert r.left.right.val == 4
    assert r.left.left.left is None
    assert r.left.left.right is None
    assert r.right.val == 5
    assert r.right.left is None
    assert r.right.right.val == 7
    assert r.right.right.right is None
