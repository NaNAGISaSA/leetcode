
from typing import List

"""
Runtime: 36 ms, faster than 82.21% of Python3 online submissions for Number of Good Pairs.
Memory Usage: 13.9 MB, less than 100.00% of Python3 online submissions for Number of Good Pairs.
"""


class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        d = {}
        for number in nums:
            d[number] = d.get(number, 0) + 1
        return sum([val * (val - 1) // 2 for val in d.values()])
