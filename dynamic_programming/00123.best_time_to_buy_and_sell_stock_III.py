
from typing import List


"""
Time Limit Exceeded
"""


class Solution:
    """
    max_price(n, k) n: index, k: transactions

    max_price(n, k) = max(max_price(n - 1, k), max_price(i, k - 1) + price(n) - price(i)) for i in range(n)
    """
    def maxProfit(self, prices: List[int]) -> int:
        profile = [[0] * len(prices) for _ in range(3)]
        for k in range(1, 3):
            for index, price in enumerate(prices):
                temp_list = [profile[k][index - 1]]
                for j in range(index):
                    temp_list.append(profile[k - 1][j] + price - prices[j])
                profile[k][index] = max(temp_list)
        return max(profile[1][-1], profile[2][-1])


"""
Runtime: 1504 ms, faster than 6.52% of Python3 online submissions for Best Time to Buy and Sell Stock III.
Memory Usage: 28 MB, less than 12.15% of Python3 online submissions for Best Time to Buy and Sell Stock III.
"""


class Solution2:
    """
    max_price(n, k) n: index, k: transactions

    max_price(n, k) = max(max_price(n - 1, k), max_price(i, k - 1) + price(n) - price(i)) for i in range(n)

    dp[1][-1] - prices[0] + prices[4]
    dp[1][0] - prices[1] + prices[4]
    dp[1][1] - prices[2] + prices[4]
    dp[1][2] - prices[3] + prices[4]

    dp[1][-1] - prices[0] + prices[5] (old maxDiff + price[5])
    dp[1][0] - prices[1] + prices[5]  (old maxDiff + price[5])
    dp[1][1] - prices[2] + prices[5]  (old maxDiff + price[5])
    dp[1][2] - prices[3] + prices[5]  (old maxDiff + price[5])
    dp[1][3] - prices[4] + prices[5]  (new maxDiff + price[5])
    """
    def maxProfit(self, prices: List[int]) -> int:
        profile = [[0] * len(prices) for _ in range(3)]
        for k in range(1, 3):
            diff = 0 - prices[0]
            for index, price in enumerate(prices):
                if index > 1:
                    diff = max(diff, profile[k - 1][index - 2] - prices[index - 1])
                profile[k][index] = max(profile[k][index - 1], diff + price)
        return max(profile[1][-1], profile[2][-1])


print(Solution2().maxProfit([7]))
