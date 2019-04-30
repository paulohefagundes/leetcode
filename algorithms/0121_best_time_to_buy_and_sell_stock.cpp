#include <limits>
#include <vector>

/*
 * Say you have an array for which the ith element is the price of a given stock on day i.
 *
 * If you were only permitted to complete at most one transaction (i.e., buy one and sell one share of the stock),
 * design an algorithm to find the maximum profit.
 *
 * Note that you cannot sell a stock before you buy one.
 */
class Solution
{
  public:
    // time: O(n)
    // space: O(1)
    int maxProfit(const std::vector<int>& prices)
    {
        int profit = 0;
        int buy = std::numeric_limits<int>::max();
        for (auto p : prices)
        {
            if (p <= buy)
            {
                buy = p;
                continue;
            }

            int new_profit = p - buy;
            if (new_profit > profit)
            {
                profit = new_profit;
            }
        }

        return profit;
    }
};
