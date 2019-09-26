import importlib

module = importlib.import_module("algorithms.0268_missing_number")


def test_missing_number():
    s = module.Solution()
    assert s.missingNumber([3, 0, 1]) == 2
    assert s.missingNumber([9, 6, 4, 2, 3, 5, 7, 0, 1]) == 8
