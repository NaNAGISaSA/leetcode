
from typing import List


"""
Runtime: 56 ms, faster than 10.61% of Python3 online submissions for House Robber II.
Memory Usage: 13.7 MB, less than 89.96% of Python3 online submissions for House Robber II.
"""


class Solution:
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
        print(result)
        return result[-1]
