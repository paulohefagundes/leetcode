import importlib

module = importlib.import_module("algorithms.0242_valid_anagram")


def test_is_anagram():
    s = module.Solution()
    assert s.isAnagram("rat", "tar")
    assert s.isAnagram("anagram", "nagaram")
    assert not s.isAnagram("ab", "a")
    assert not s.isAnagram("ac", "bb")
    assert not s.isAnagram("rat", "car")
