
from typing import List

"""
Time Limit Exceeded
"""


class Solution:
    def find_anagrams(self, s: str, p: str) -> List[int]:
        sort_p = sorted(p)
        length_p = len(p)
        return [index for index in range(0, len(s) - length_p + 1) if sorted(s[index:index + length_p]) == sort_p]


"""
Time Limit Exceeded
"""


class Solution2:
    def find_anagrams(self, s: str, p: str) -> List[int]:
        sort_p = sorted(p)
        set_p = set(p)
        length_p = len(p)
        result = []
        for index in range(0, len(s) - length_p + 1):
            if set(s[index:index + length_p]) == set_p and sorted(s[index:index + length_p]) == sort_p:
                result.append(index)
        return result


"""
Runtime: 192 ms, faster than 39.03% of Python3 online submissions for Find All Anagrams in a String.
Memory Usage: 14.7 MB, less than 83.11% of Python3 online submissions for Find All Anagrams in a String.
"""


class Solution3:
    def find_anagrams(self, s: str, p: str) -> List[int]:
        d = {}
        for char in p:
            d[char] = d.get(char, 0) + 1

        left, right = 0, 0
        length_p = len(p)
        result = []
        while right < len(s):
            if s[right] in d:
                d[s[right]] -= 1

            if right - left == length_p - 1:
                # print(left, right, d)
                if set(d.values()) == {0}:
                    result.append(left)
                if s[left] in d:
                    d[s[left]] += 1
                left += 1

            right += 1

        return result


"""
Runtime: 136 ms, faster than 70.06% of Python3 online submissions for Find All Anagrams in a String.
Memory Usage: 14.6 MB, less than 97.97% of Python3 online submissions for Find All Anagrams in a String.
"""


class Solution4:
    def find_anagrams(self, s: str, p: str) -> List[int]:
        d = {}
        for char in p:
            d[char] = d.get(char, 0) + 1

        left, right = 0, 0
        length_p = len(p)
        result = []
        match = 0
        match_p = len(set(p))
        while right < len(s):
            if s[right] in d:
                d[s[right]] -= 1
                if d[s[right]] == 0:
                    match += 1
                elif d[s[right]] == -1:
                    match -= 1

            if right - left == length_p - 1:
                # print(left, right, match, d)
                if match == match_p:
                    result.append(left)
                if s[left] in d:
                    d[s[left]] += 1
                    if d[s[left]] == 0:
                        match += 1
                    elif d[s[left]] == 1:
                        match -= 1

                left += 1

            right += 1

        return result
