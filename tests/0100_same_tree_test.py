import importlib
import pytest
from algorithms.tree_node import TreeNode

module = importlib.import_module("algorithms.0100_same_tree")


def test_is_same_tree_1():
    p0 = TreeNode(1)
    p1 = TreeNode(2)
    p2 = TreeNode(3)
    p0.left = p1
    p0.right = p2

    s = module.Solution()
    assert s.isSameTree(p0, p0)


def test_is_same_tree_2():
    p0 = TreeNode(1)
    p1 = TreeNode(2)
    p0.left = p1

    q0 = TreeNode(1)
    q2 = TreeNode(2)
    q0.right = q2

    s = module.Solution()
    assert not s.isSameTree(p0, q0)


def test_is_same_tree_3():
    p0 = TreeNode(1)
    p1 = TreeNode(2)
    p2 = TreeNode(1)
    p0.left = p1
    p0.right = p2

    q0 = TreeNode(1)
    q1 = TreeNode(1)
    q2 = TreeNode(2)
    q0.left = q1
    q0.right = q2

    s = module.Solution()
    assert not s.isSameTree(p0, q0)


def test_is_same_tree_4():
    p0 = TreeNode(10)
    p1 = TreeNode(5)
    p2 = TreeNode(15)
    p0.left = p1
    p0.right = p2

    q0 = TreeNode(10)
    q1 = TreeNode(5)
    q4 = TreeNode(15)
    q0.left = q1
    q1.right = q4

    s = module.Solution()
    assert not s.isSameTree(p0, q0)
