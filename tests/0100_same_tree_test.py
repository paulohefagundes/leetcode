import importlib
from algorithms.tree_node import make_tree

module = importlib.import_module("algorithms.0100_same_tree")


def test_is_same_tree_1():
    p = make_tree([1, 2, 3])

    s = module.Solution()
    assert s.isSameTree(p[0], p[0])


def test_is_same_tree_2():
    p = make_tree([1, 2])
    q = make_tree([1, None, 2])

    s = module.Solution()
    assert not s.isSameTree(p[0], q[0])


def test_is_same_tree_3():
    p = make_tree([1, 2, 1])
    q = make_tree([1, 1, 2])

    s = module.Solution()
    assert not s.isSameTree(p[0], q[0])


def test_is_same_tree_4():
    p = make_tree([10, 5, 15])
    q = make_tree([10, 5, None, None, 15])

    s = module.Solution()
    assert not s.isSameTree(p[0], q[0])
