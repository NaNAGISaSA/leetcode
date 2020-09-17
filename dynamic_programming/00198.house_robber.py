
from typing import List


"""
Runtime: 32 ms, faster than 71.53% of Python3 online submissions for House Robber.
Memory Usage: 13.9 MB, less than 39.65% of Python3 online submissions for House Robber.
"""


class Solution:
    """
    dp[i] = max(dp[i - 1], dp[i - 2] + dp[i])
    """
    def rob(self, nums: List[int]) -> int:
        extend_nums = [0, 0, *nums]
        for index, num in enumerate(extend_nums[2:], start=2):
            extend_nums[index] = max(extend_nums[index - 1], extend_nums[index - 2] + num)
        return extend_nums[-1]
