
from typing import List


"""
Runtime: 28 ms, faster than 98.44% of Python3 online submissions for Word Break.
Memory Usage: 13.8 MB, less than 90.92% of Python3 online submissions for Word Break.
"""


class Solution:
    """
    dp[i] = dp[i] || (dp[i - len(word)] && s[i - len(word) : i]) for word in word_dict
    """
    def wordBreak(self, s: str, wordDict: List[str]) -> bool:
        if len(wordDict) == 0:
            return False
        min_length = min([len(x) for x in wordDict])
        dp_result = [1 if s[:length + 1] in wordDict else 0 for length in range(0, min_length)]
        wordDict = {k: len(k) for k in wordDict}
        for number in range(min_length, len(s)):
            for word, length in wordDict.items():
                if number + 1 - length > 0:
                    if dp_result[number - length] and s[number - length + 1: number + 1] == word:
                        dp_result.append(1)
                        break
                elif number + 1 - length == 0:
                    if s[:number + 1] == word:
                        dp_result.append(1)
                        break
            else:
                dp_result.append(0)
        return dp_result[len(s) - 1] == 1
