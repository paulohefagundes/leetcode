import importlib
from algorithms.tree_node import make_tree

module = importlib.import_module(
    "algorithms.0235_lowest_common_ancestor_of_a_binary_search_tree"
)


def test_lowest_common_ancestor():
    t = make_tree([6, 2, 8, 0, 4, 7, 9, None, None, 3, 5])
    s = module.Solution()
    assert s.lowestCommonAncestor(t[0], t[1], t[2]) == t[0]
    assert s.lowestCommonAncestor(t[0], t[2], t[1]) == t[0]

    assert s.lowestCommonAncestor(t[0], t[1], t[4]) == t[1]
    assert s.lowestCommonAncestor(t[0], t[4], t[1]) == t[1]
