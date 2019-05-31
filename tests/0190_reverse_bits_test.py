import importlib
import pytest

module = importlib.import_module("algorithms.0190_reverse_bits")


def test_reverse_bits():
    s = module.Solution()
    assert s.reverseBits(0b00000010100101000001111010011100) == 0b00111001011110000010100101000000
    assert s.reverseBits(0b11111111111111111111111111111101) == 0b10111111111111111111111111111111
