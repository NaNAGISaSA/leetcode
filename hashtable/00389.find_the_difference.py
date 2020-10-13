
import collections

"""
Runtime: 28 ms, faster than 94.53% of Python3 online submissions for Find the Difference.
Memory Usage: 13.8 MB, less than 78.70% of Python3 online submissions for Find the Difference.
"""


class Solution:
    def find_the_difference(self, s: str, t: str) -> str:
        result_s = collections.Counter(s)
        result_t = collections.Counter(t)
        for k, v in result_t.items():
            if k not in result_s or result_s.get(k) != v:
                return k
        return ''
