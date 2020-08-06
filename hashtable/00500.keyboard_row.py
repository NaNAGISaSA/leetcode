
from typing import List


"""
Runtime: 32 ms, faster than 60.97% of Python3 online submissions for Keyboard Row.
Memory Usage: 13.6 MB, less than 83.33% of Python3 online submissions for Keyboard Row.
"""


class Solution:
    def findWords(self, words: List[str]) -> List[str]:
        row_one = set('qwertyuiop')
        row_tow = set('asdfghjkl')
        row_three = set('zxcvbnm')
        result = []
        for word in words:
            set_word = set(word.lower())
            if set_word.issubset(row_one) or set_word.issubset(row_tow) or set_word.issubset(row_three):
                result.append(word)
        return result
