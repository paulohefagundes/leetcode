import importlib
import pytest

module = importlib.import_module("algorithms.0125_valid_palindrome")


def test_valid_palindrome():
    s = module.Solution()
    assert s.isPalindrome("A man, a plan, a canal: Panama")
    assert s.isPalindrome("")
    assert s.isPalindrome("s")
    assert s.isPalindrome("ss")
    assert s.isPalindrome("sAs")
    assert not s.isPalindrome("race a car")
