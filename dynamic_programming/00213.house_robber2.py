
from typing import List


"""
Runtime: 56 ms, faster than 10.61% of Python3 online submissions for House Robber II.
Memory Usage: 13.7 MB, less than 89.96% of Python3 online submissions for House Robber II.
"""


class Solution:
    """
    dp[i] = max(dp[i - 1], sort_list + num[0], sort_list + num[i])
    """
    def count(self, nums: List[int]) -> int:
        for index, num in enumerate(nums[2:], start=2):
            nums[index] = max(nums[index - 1], nums[index - 2] + num)
        return nums[-1]

    def rob(self, nums: List[int]) -> int:
        if len(nums) <= 3:
            return max([0, *nums])
        result = []
        for i in range(1, 4):
            result.append(max(nums[:i]))
        for i in range(3, len(nums)):
            result.append(max(result[i - 1],
                              self.count([0, 0, *nums[1: i - 1]]) + nums[i],
                              self.count([0, 0, *nums[2: i]]) + nums[0]))
        return result[-1]


"""
Runtime: 44 ms, faster than 22.63% of Python3 online submissions for House Robber II.
Memory Usage: 13.8 MB, less than 64.96% of Python3 online submissions for House Robber II.
"""


class Solution2:
    """
    for an array [1, 2, 3, 4], can be divided into four cases:

    1) rob first one and last one together -> never happen
    2) do not rob first one
    3) do not rob last one
    4) do not rob first one and last one -> same as 2) and 3) in count method
    """

    def count(self, nums: List[int]) -> int:
        for index, num in enumerate(nums[2:], start=2):
            nums[index] = max(nums[index - 1], nums[index - 2] + num)
        return nums[-1]

    def rob(self, nums: List[int]) -> int:
        if not nums:
            return 0
        result = [nums[0]]
        for i in range(1, len(nums)):
            result.append(max(self.count([0, 0, *nums[1: i + 1]]), self.count([0, 0, *nums[0: i]])))
        return result[-1]
