import importlib
import pytest
from algorithms.list_node import ListNode

module = importlib.import_module("algorithms.0141_linked_list_cycle")


def test_has_cycle_1():
    s = module.Solution()
    assert not s.hasCycle(None)


def test_has_cycle_2():
    l0 = ListNode(3)
    l1 = ListNode(2)
    l2 = ListNode(0)
    l3 = ListNode(-4)
    l0.next = l1
    l1.next = l2
    l2.next = l3
    l3.next = l1

    s = module.Solution()
    assert s.hasCycle(l0)


def test_has_cycle_3():
    l0 = ListNode(1)
    l1 = ListNode(2)
    l0.next = l1
    l1.next = l0

    s = module.Solution()
    assert s.hasCycle(l0)


def test_has_cycle_4():
    l0 = ListNode(1)

    s = module.Solution()
    assert not s.hasCycle(l0)
