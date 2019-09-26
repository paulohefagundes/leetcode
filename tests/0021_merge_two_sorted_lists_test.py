import importlib
from algorithms.list_node import make_list, same_values

module = importlib.import_module("algorithms.0021_merge_two_sorted_lists")


def test_merge_two_lists_0():
    s = module.Solution()
    assert not s.mergeTwoLists(None, None)


def test_merge_two_lists_1():
    l = make_list([1, 2, 4])
    r = make_list([1, 3, 4])

    s = module.Solution()
    result = s.mergeTwoLists(l[0], r[0])

    assert same_values(result, [1, 1, 2, 3, 4, 4])


def test_merge_two_lists_2():
    l = make_list([2, 3, 4])
    r = make_list([1, 2, 5])

    s = module.Solution()
    result = s.mergeTwoLists(l[0], r[0])

    assert same_values(result, [1, 2, 2, 3, 4, 5])


def test_merge_two_lists_3():
    l = make_list([2, 3, 4])
    r = make_list([5, 6, 7])

    s = module.Solution()
    result = s.mergeTwoLists(l[0], r[0])

    assert same_values(result, [2, 3, 4, 5, 6, 7])


def test_merge_two_lists_4():
    l = make_list([4, 5, 6])
    r = make_list([1, 2, 3])

    s = module.Solution()
    result = s.mergeTwoLists(l[0], r[0])

    assert same_values(result, [1, 2, 3, 4, 5, 6])
