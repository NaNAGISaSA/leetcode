
from typing import List

"""
Time Limit Exceeded
"""


class Solution:
    def findAnagrams(self, s: str, p: str) -> List[int]:
        sort_p = sorted(p)
        length_p = len(p)
        return [index for index in range(0, len(s) - length_p + 1) if sorted(s[index:index + length_p]) == sort_p]


"""
Time Limit Exceeded
"""


class Solution2:
    def findAnagrams(self, s: str, p: str) -> List[int]:
        sort_p = sorted(p)
        set_p = set(p)
        length_p = len(p)
        result = []
        for index in range(0, len(s) - length_p + 1):
            if set(s[index:index + length_p]) == set_p and sorted(s[index:index + length_p]) == sort_p:
                result.append(index)
        return result

    


class Solution3:
    def findAnagrams(self, s: str, p: str) -> List[int]:


