import importlib
import pytest

module = importlib.import_module("algorithms.0053_maximum_subarray")


def test_max_sub_array():
    s = module.Solution()
    assert s.maxSubArray([-2, 1, -3, 4, -1, 2, 1, -5, 4]) == 6
    assert s.maxSubArray([-1, -2, -3, 3, -2]) == 3
    assert s.maxSubArray([-1, 2, -1, 1, 1, -4, -5]) == 3
