
from typing import List

"""
Runtime: 128 ms, faster than 48.05% of Python3 online submissions for Top K Frequent Elements.
Memory Usage: 18.3 MB, less than 45.75% of Python3 online submissions for Top K Frequent Elements.
"""


class Solution:
    def top_k_frequent(self, nums: List[int], k: int) -> List[int]:
        d = {}
        for _, element in enumerate(nums):
            d[element] = d.get(element, 0) + 1
        sort_value = sorted(d.values(), reverse=True)[:k]
        return [key for key, value in d.items() if value in sort_value]
