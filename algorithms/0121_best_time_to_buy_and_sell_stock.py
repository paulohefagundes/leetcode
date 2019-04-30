class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        profit = 0
        buy_price = float("inf")
        for p in prices:
            buy_price = min(buy_price, p)
            profit = max(profit, p - buy_price)
        return profit
