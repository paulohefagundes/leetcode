import importlib
import pytest

module = importlib.import_module("algorithms.0198_house_robber")


def test_rob():
    s = module.Solution()
    assert s.rob([1, 2, 3, 1]) == 4
    assert s.rob([2, 7, 9, 3, 1]) == 12
    assert s.rob([3, 1, 3, 1, 1, 10]) == 16
    assert s.rob([3, 1, 3, 1, 1, 10, 1, 1, 20]) == 36
    assert s.rob([2, 5, 17, 3, 9, 28, 19, 29, 5, 7, 31]) == 107
