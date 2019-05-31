import importlib
import pytest

module = importlib.import_module("algorithms.0217_contains_duplicate")


def test_valid_parentheses():
    s = module.Solution()
    assert not s.containsDuplicate([])
    assert not s.containsDuplicate([1, 2, 3, 4, 5])
    assert s.containsDuplicate([1, 2, 3, 1])
