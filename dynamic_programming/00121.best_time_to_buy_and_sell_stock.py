
from typing import List


"""
Runtime: 64 ms, faster than 81.77% of Python3 online submissions for Best Time to Buy and Sell Stock.
Memory Usage: 14.9 MB, less than 93.81% of Python3 online submissions for Best Time to Buy and Sell Stock.
"""


class Solution:
    """
    max_profit = price[i] - price_buy > profit_now -> sell_price = price[i]
                 price[i] - price_buy < profit_now -> sell_price = buy_price = price[i] if buy > price[i]
    """
    def maxProfit(self, prices: List[int]) -> int:
        if len(prices) == 0:
            return 0
        buy, sell, profit = prices[0], prices[0], 0
        profit_list = [0]
        for index, price in enumerate(prices[1:]):
            if price - buy >= profit:
                profit = price - buy
                profit_list.append(profit)
            elif buy > price:
                buy, sell, profit = price, price, 0
        return max(profit_list)


"""
Runtime: 52 ms, faster than 99.33% of Python3 online submissions for Best Time to Buy and Sell Stock.
Memory Usage: 14.9 MB, less than 95.07% of Python3 online submissions for Best Time to Buy and Sell Stock.
"""


class Solution2:

    def maxProfit(self, prices: List[int]) -> int:
        import sys
        buy, profit = sys.maxsize, 0
        for index, sell_price in enumerate(prices):
            if sell_price - buy >= profit:
                profit = sell_price - buy
            elif buy > sell_price:
                buy = sell_price
        return profit
