import importlib
import pytest
from algorithms.list_node import ListNode

module = importlib.import_module("algorithms.0021_merge_two_sorted_lists")


def test_merge_two_lists_0():
    s = module.Solution()
    assert not s.mergeTwoLists(None, None)


def test_merge_two_lists_1():
    l0 = ListNode(1)
    l1 = ListNode(2)
    l2 = ListNode(4)
    l0.next = l1
    l1.next = l2

    r0 = ListNode(1)
    r1 = ListNode(3)
    r2 = ListNode(4)
    r0.next = r1
    r1.next = r2

    s = module.Solution()
    result = s.mergeTwoLists(l0, r0)

    assert result
    assert result.val == 1
    assert result.next.val == 1
    assert result.next.next.val == 2
    assert result.next.next.next.val == 3
    assert result.next.next.next.next.val == 4
    assert result.next.next.next.next.next.val == 4
    assert not result.next.next.next.next.next.next


def test_merge_two_lists_2():
    l0 = ListNode(2)
    l1 = ListNode(3)
    l2 = ListNode(4)
    l0.next = l1
    l1.next = l2

    r0 = ListNode(1)
    r1 = ListNode(2)
    r2 = ListNode(5)
    r0.next = r1
    r1.next = r2

    s = module.Solution()
    result = s.mergeTwoLists(l0, r0)

    assert result
    assert result.val == 1
    assert result.next.val == 2
    assert result.next.next.val == 2
    assert result.next.next.next.val == 3
    assert result.next.next.next.next.val == 4
    assert result.next.next.next.next.next.val == 5
    assert not result.next.next.next.next.next.next


def test_merge_two_lists_3():
    l0 = ListNode(2)
    l1 = ListNode(3)
    l2 = ListNode(4)
    l0.next = l1
    l1.next = l2

    r0 = ListNode(5)
    r1 = ListNode(6)
    r2 = ListNode(7)
    r0.next = r1
    r1.next = r2

    s = module.Solution()
    result = s.mergeTwoLists(l0, r0)

    assert result
    assert result.val == 2
    assert result.next.val == 3
    assert result.next.next.val == 4
    assert result.next.next.next.val == 5
    assert result.next.next.next.next.val == 6
    assert result.next.next.next.next.next.val == 7
    assert not result.next.next.next.next.next.next


def test_merge_two_lists_4():
    l0 = ListNode(4)
    l1 = ListNode(5)
    l2 = ListNode(6)
    l0.next = l1
    l1.next = l2

    r0 = ListNode(1)
    r1 = ListNode(2)
    r2 = ListNode(3)
    r0.next = r1
    r1.next = r2

    s = module.Solution()
    result = s.mergeTwoLists(l0, r0)

    assert result
    assert result.val == 1
    assert result.next.val == 2
    assert result.next.next.val == 3
    assert result.next.next.next.val == 4
    assert result.next.next.next.next.val == 5
    assert result.next.next.next.next.next.val == 6
    assert not result.next.next.next.next.next.next
