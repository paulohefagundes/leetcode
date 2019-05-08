import importlib
import pytest

module = importlib.import_module("algorithms.0461_hamming_distance")


def test_hamming_distance():
    s = module.Solution()
    assert s.hammingDistance(1, 4) == 2
    assert s.hammingDistance(3, 4) == 3
