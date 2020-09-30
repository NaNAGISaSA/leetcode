
import collections

"""
Runtime: 44 ms, faster than 29.93% of Python3 online submissions for Longest Palindrome.
Memory Usage: 13.8 MB, less than 48.98% of Python3 online submissions for Longest Palindrome.
"""


class Solution:
    def longestPalindrome(self, s: str) -> int:
        result = collections.Counter(s)
        number = 0
        for k, v in result.items():
            number += v // 2
        return 2 * number if len(s) == 2 * number else 2 * number + 1
