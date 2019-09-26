import importlib
from algorithms.list_node import ListNode, make_list, same_values

module = importlib.import_module("algorithms.0019_remove_nth_node_from_end_of_list")


def test_removeNthFromEnd1():
    s = module.Solution()
    l = make_list([1, 2, 3, 4, 5])
    r = s.removeNthFromEnd(l[0], 1)
    assert same_values(r, [1, 2, 3, 4])


def test_removeNthFromEnd1_v2():
    s = module.Solution()
    l = ListNode(1)
    r = s.removeNthFromEnd(l, 1)
    assert same_values(r, [])


def test_removeNthFromEnd1_v3():
    s = module.Solution()
    l = make_list([1, 2])
    r = s.removeNthFromEnd(l[0], 1)
    assert same_values(r, [1])


def test_removeNthFromEnd2():
    s = module.Solution()
    l = make_list([1, 2, 3, 4, 5])
    r = s.removeNthFromEnd(l[0], 2)
    assert same_values(r, [1, 2, 3, 5])


def test_removeNthFromEnd3():
    s = module.Solution()
    l = make_list([1, 2, 3])
    r = s.removeNthFromEnd(l[0], 3)
    assert same_values(r, [2, 3])
