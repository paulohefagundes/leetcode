import importlib
from algorithms.list_node import make_list, same_values

module = importlib.import_module("algorithms.0206_reverse_linked_list")


def test_reverse_list():
    l = make_list([1, 2, 3, 4, 5])

    s = module.Solution()
    r = s.reverseList(l[0])

    assert same_values(r, [5, 4, 3, 2, 1])
