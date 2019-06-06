import importlib
import pytest

module = importlib.import_module("algorithms.0414_third_maximum_number")


def test_third_max():
    s = module.Solution()
    assert s.thirdMax([3, 2, 1]) == 1
    assert s.thirdMax([1, 2]) == 2
    assert s.thirdMax([2, 2, 3, 1]) == 1
