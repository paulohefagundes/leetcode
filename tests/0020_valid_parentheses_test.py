import importlib
import pytest

module = importlib.import_module("algorithms.0020_valid_parentheses")


def test_valid_parentheses():
    s = module.Solution()
    assert s.isValid("()")
    assert s.isValid("()[]{}")
    assert not s.isValid("(]")
    assert not s.isValid("([)]")
    assert s.isValid("{[]}")
    assert s.isValid("")
    assert not s.isValid("}")
    assert not s.isValid("(])")
