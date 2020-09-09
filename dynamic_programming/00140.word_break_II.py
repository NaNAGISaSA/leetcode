
from typing import List


"""
Runtime: 140 ms, faster than 12.11% of Python3 online submissions for Word Break II.
Memory Usage: 13.9 MB, less than 92.19% of Python3 online submissions for Word Break II.
"""


class Solution:
    """
    first, get dp_dict using dp
    second, get the final result based on dp_dict
    """

    @staticmethod
    def assemble_result(dp_dict, key, current_list, true_result):
        for value in dp_dict.get(key):
            current_list_copy = current_list[:]
            current_list_copy.append(value)
            if len(value) == key:
                true_result.append(current_list_copy)
            else:
                Solution.assemble_result(dp_dict, key - len(value), current_list_copy, true_result)

    def wordBreak(self, s: str, wordDict: List[str]) -> List[str]:
        dp_result = [True]
        dp_dict = {}
        length = len(s)
        for i in range(1, length + 1):
            result = False
            for j in range(i, 0, -1):
                if dp_result[i - j] and s[i - j: i] in wordDict:
                    result = True
                    if dp_dict.get(i):
                        dp_dict[i].append(s[i - j: i])
                    else:
                        dp_dict[i] = [s[i - j: i]]
            dp_result.append(result)

        if not dp_result[length]:
            return []
        else:
            dp_result = []
            Solution.assemble_result(dp_dict, length, [], dp_result)

        final = []
        for value in dp_result:
            if ''.join(reversed(value)) == s:
                final.append(' '.join(reversed(value)))
        return final
