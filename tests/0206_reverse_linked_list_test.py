import importlib
import pytest
from algorithms.list_node import ListNode

module = importlib.import_module("algorithms.0206_reverse_linked_list")


def test_reverse_list():
    l0 = ListNode(1)
    l1 = ListNode(2)
    l2 = ListNode(3)
    l3 = ListNode(4)
    l4 = ListNode(5)

    s = module.Solution()
    l0.next = l1
    l1.next = l2
    l2.next = l3
    l3.next = l4

    s = module.Solution()
    r = s.reverseList(l0)

    for i in [5, 4, 3, 2, 1]:
        assert r
        assert r.val == i
        r = r.next
    assert not r
