import importlib
from algorithms.tree_node import TreeNode, make_tree

module = importlib.import_module("algorithms.0572_subtree_of_another_tree")


def test_is_subtree_same():
    t = make_tree([3, 4, 5, 1, 2])

    s = module.Solution()
    assert s.isSubtree(t[0], t[0])
    assert s.isSubtree(t[0], t[1])


def test_is_subtree1():
    a = make_tree([3, 4, 5, 1, 2])
    b = make_tree([4, 1, 2])

    s = module.Solution()
    assert s.isSubtree(a[0], b[0])


def test_is_subtree2():
    a = make_tree([1, 1])
    b = TreeNode(1)

    s = module.Solution()
    assert s.isSubtree(a[0], b)


def test_is_subtree3():
    a = make_tree([3, 4, 5, 1, 2, None, None, 0])
    b = make_tree([4, 1, 2])

    s = module.Solution()
    assert not s.isSubtree(a[0], b[0])


def test_is_subtree4():
    a = make_tree([3, 4, 5, 1, None, 2])
    b = make_tree([3, 1, 2])

    s = module.Solution()
    assert not s.isSubtree(a[0], b[0])


def test_is_subtree5():
    a = make_tree(
        [
            1,
            None,
            1,
            None,
            1,
            None,
            1,
            None,
            1,
            None,
            1,
            None,
            1,
            None,
            1,
            None,
            1,
            None,
            1,
            None,
            1,
            2,
        ]
    )
    b = make_tree([1, None, 1, None, 1, None, 1, None, 1, None, 1, 2])

    s = module.Solution()
    assert s.isSubtree(a[0], b[0])
