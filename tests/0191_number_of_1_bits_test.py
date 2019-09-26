import importlib

module = importlib.import_module("algorithms.0191_number_of_1_bits")


def test_hamming_distance():
    s = module.Solution()
    assert s.hammingWeight(0b00000000000000000000000010000000) == 1
    assert s.hammingWeight(0b00000000000000000000000000000001) == 1
    assert s.hammingWeight(0b00000000000000000000000000001011) == 3
    assert s.hammingWeight(0b11111111111111111111111111111101) == 31
