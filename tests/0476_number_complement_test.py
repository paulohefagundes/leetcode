import importlib
import pytest

module = importlib.import_module("algorithms.0476_number_complement")


def test_find_complement():
    s = module.Solution()
    assert s.findComplement(5) == 2
    assert s.findComplement(2) == 1
    assert s.findComplement(1) == 0
    assert s.findComplement(0) == 0
