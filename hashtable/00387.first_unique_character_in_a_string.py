
import collections


"""
Runtime: 216 ms, faster than 20.67% of Python3 online submissions for First Unique Character in a String.
Memory Usage: 14 MB, less than 29.69% of Python3 online submissions for First Unique Character in a String.
"""


class Solution:
    def first_uniq_char(self, s: str) -> int:
        d = {}
        for char in s:
            d[char] = d.get(char, 0) + 1
        for index, char in enumerate(s):
            if d.get(char) == 1:
                return index
        return -1


"""
Runtime: 120 ms, faster than 65.93% of Python3 online submissions for First Unique Character in a String.
Memory Usage: 14 MB, less than 30.50% of Python3 online submissions for First Unique Character in a String.
"""


class Solution2:
    def first_uniq_char(self, s: str) -> int:
        count = collections.Counter(s)
        for index, char in enumerate(s):
            if count[char] == 1:
                return index
        return -1
