import importlib
import pytest

module = importlib.import_module("algorithms.0561_array_partition_i")


def test_valid_parentheses():
    s = module.Solution()
    assert s.arrayPairSum([1, 4, 3, 2]) == 4
    assert s.arrayPairSum([7, 3, 1, 0, 0, 6]) == 7
