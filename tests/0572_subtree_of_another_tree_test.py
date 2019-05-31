import importlib
import pytest
from algorithms.tree_node import TreeNode

module = importlib.import_module("algorithms.0572_subtree_of_another_tree")


def test_is_subtree_same():
    s0 = TreeNode(3)
    s1 = TreeNode(4)
    s2 = TreeNode(5)
    s3 = TreeNode(1)
    s4 = TreeNode(2)
    s0.left = s1
    s0.right = s2
    s1.left = s3
    s1.right = s4

    s = module.Solution()
    assert s.isSubtree(s0, s0)
    assert s.isSubtree(s0, s1)


def test_is_subtree1():
    s0 = TreeNode(3)
    s1 = TreeNode(4)
    s2 = TreeNode(5)
    s3 = TreeNode(1)
    s4 = TreeNode(2)
    s0.left = s1
    s0.right = s2
    s1.left = s3
    s1.right = s4

    t0 = TreeNode(4)
    t1 = TreeNode(1)
    t2 = TreeNode(2)
    t0.left = t1
    t0.right = t2

    s = module.Solution()
    assert s.isSubtree(s0, t0)


def test_is_subtree2():
    s0 = TreeNode(1)
    s1 = TreeNode(1)
    s0.left = s1

    t0 = TreeNode(1)

    s = module.Solution()
    assert s.isSubtree(s0, t0)


def test_is_subtree3():
    s0 = TreeNode(3)
    s1 = TreeNode(4)
    s2 = TreeNode(5)
    s3 = TreeNode(1)
    s4 = TreeNode(2)
    s7 = TreeNode(0)
    s0.left = s1
    s0.right = s2
    s1.left = s3
    s1.right = s4
    s4.left = s7

    t0 = TreeNode(4)
    t1 = TreeNode(1)
    t2 = TreeNode(2)
    t0.left = t1
    t0.right = t2

    s = module.Solution()
    assert s.isSubtree(s0, t0) == False


def test_is_subtree4():
    s0 = TreeNode(3)
    s1 = TreeNode(4)
    s2 = TreeNode(5)
    s3 = TreeNode(1)
    s5 = TreeNode(2)
    s0.left = s1
    s0.right = s2
    s1.left = s3
    s2.left = s5

    t0 = TreeNode(3)
    t1 = TreeNode(1)
    t2 = TreeNode(2)
    t0.left = t1
    t0.right = t2

    s = module.Solution()
    assert not s.isSubtree(s0, t0)
