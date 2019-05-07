import importlib
import pytest

module = importlib.import_module("algorithms.0001_two_sum")


def test_two_sum():
    s = module.Solution()
    assert s.twoSum(nums=[2, 7, 11, 15], target=9) == [0, 1]
    assert s.twoSum(nums=[3, 2, 4], target=6) == [1, 2]
