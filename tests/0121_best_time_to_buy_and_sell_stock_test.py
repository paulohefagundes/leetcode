import importlib
import pytest

module = importlib.import_module("algorithms.0121_best_time_to_buy_and_sell_stock")


def test_max_profit():
    s = module.Solution()
    assert s.maxProfit([7, 1, 5, 3, 6, 4]) == 5
    assert s.maxProfit([7, 6, 4, 3, 1]) == 0
    assert s.maxProfit([4, 3, 0, 7]) == 7
    assert s.maxProfit([10, 9, 2, 6]) == 4
    assert s.maxProfit([4, 10, 2, 1, 1, 2, 3, 4, 5, 6]) == 6
    assert s.maxProfit([4, 10, 2, 1, 1, 2, 3, 8, 5, 6]) == 7
