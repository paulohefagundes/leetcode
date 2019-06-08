import importlib
import pytest

module = importlib.import_module("algorithms.0371_sum_of_two_integers")


def test_get_sum():
    s = module.Solution()
    assert s.getSum(0, 0) == 0
    assert s.getSum(-1, 1) == 0
    assert s.getSum(1, -1) == 0
    assert s.getSum(1, 2) == 3
    assert s.getSum(3, 2) == 5
    assert s.getSum(7, 3) == 10
    assert s.getSum(-2, 3) == 1
    assert s.getSum(-10, 1) == -9
