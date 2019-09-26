import importlib
from algorithms.list_node import ListNode, make_list

module = importlib.import_module("algorithms.0141_linked_list_cycle")


def test_has_cycle_1():
    s = module.Solution()
    assert not s.hasCycle(None)


def test_has_cycle_2():
    l = make_list([3, 2, 0, -1])
    l[3].next = l[1]

    s = module.Solution()
    assert s.hasCycle(l[0])


def test_has_cycle_3():
    l = make_list([1, 2])
    l[1].next = l[0]

    s = module.Solution()
    assert s.hasCycle(l[0])


def test_has_cycle_4():
    l0 = ListNode(1)

    s = module.Solution()
    assert not s.hasCycle(l0)
