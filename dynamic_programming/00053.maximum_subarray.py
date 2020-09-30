
from typing import List

"""
Runtime: 72 ms, faster than 66.50% of Python3 online submissions for Maximum Subarray.
Memory Usage: 14.5 MB, less than 67.22% of Python3 online submissions for Maximum Subarray.
"""


class Solution:

    @staticmethod
    def dp_fun(input_array, index, dp):
        """
        max_value(array, index) =
        max_value(array, index - 1) > 0 ? array[index] + max_value(array, index - 1) : array[index]
        """
        return input_array[index] + dp[index - 1] if dp[index - 1] > 0 else input_array[index]

    def max_sub_array(self, nums: List[int]) -> int:
        length = len(nums)
        dp = [nums[0]]
        for index in range(1, length):
            dp.append(Solution.dp_fun(nums, index, dp))
        return max(dp)
