import importlib
import pytest
from algorithms.list_node import make_list, same_values, ListNode


def test_make_list():
    # l = 1->2->3->4->5->null
    l0 = ListNode(1)
    l1 = ListNode(2)
    l2 = ListNode(3)
    l3 = ListNode(4)
    l4 = ListNode(5)
    l0.next = l1
    l1.next = l2
    l2.next = l3
    l3.next = l4

    l = make_list([1, 2, 3, 4, 5])
    assert len(l) == 5

    for i, n in enumerate([1, 2, 3, 4, 5]):
        assert l[i] is not None
        assert l[i].val == n
        if i < 4:
            assert l[i].next == l[i + 1]

    assert l[4].next == None


def test_same_values():
    values1 = [1, 2, 3, 4]
    values2 = [1, 2, 3, 4, 5]
    list1 = make_list(values1)
    list2 = make_list(values2)
    assert same_values(list1[0], values1)
    assert same_values(list2[0], values2)
    assert not same_values(list1[0], values2)
    assert not same_values(list2[0], values1)
