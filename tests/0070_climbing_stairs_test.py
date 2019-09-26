import importlib

module = importlib.import_module("algorithms.0070_climbing_stairs")


def test_climbing_stairs():
    s = module.Solution()
    assert s.climbStairs(1) == 1
    assert s.climbStairs(2) == 2
    assert s.climbStairs(3) == 3
    assert s.climbStairs(4) == 5
    assert s.climbStairs(5) == 8
    assert s.climbStairs(6) == 13
    assert s.climbStairs(7) == 21
    assert s.climbStairs(8) == 34
    assert s.climbStairs(9) == 55
    assert s.climbStairs(10) == 89
    assert s.climbStairs(11) == 144
    assert s.climbStairs(12) == 233
    assert s.climbStairs(13) == 377
    assert s.climbStairs(14) == 610
    assert s.climbStairs(15) == 987
