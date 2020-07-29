
from typing import List

"""
Runtime: 124 ms, faster than 86.95% of Python3 online submissions for Contains Duplicate.
Memory Usage: 19.2 MB, less than 56.81% of Python3 online submissions for Contains Duplicate.
"""


class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        return len(nums) != len(set(nums))


"""
Runtime: 132 ms, faster than 58.44% of Python3 online submissions for Contains Duplicate.
Memory Usage: 19.3 MB, less than 39.94% of Python3 online submissions for Contains Duplicate.
"""


class Solution2:
    def containsDuplicate(self, nums: List[int]) -> bool:
        s = set()
        for number in nums:
            if number not in s:
                s.add(number)
            else:
                return True
        return False
