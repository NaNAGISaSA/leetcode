
"""
Runtime: 56 ms, faster than 49.03% of Python3 online submissions for Valid Anagram.
Memory Usage: 14.3 MB, less than 29.20% of Python3 online submissions for Valid Anagram.
"""


class Solution:
    def is_anagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        sort_s = ''.join(sorted(s))
        sort_t = ''.join(sorted(t))
        for char in set(s):
            if sort_s.find(char) != sort_t.find(char):
                return False
        return True


"""
Runtime: 64 ms, faster than 33.54% of Python3 online submissions for Valid Anagram.
Memory Usage: 14.8 MB, less than 5.40% of Python3 online submissions for Valid Anagram.
"""


class Solution2:
    def is_anagram(self, s: str, t: str) -> bool:
        return sorted(s) == sorted(t)


"""
Runtime: 60 ms, faster than 40.43% of Python3 online submissions for Valid Anagram.
Memory Usage: 14.1 MB, less than 72.33% of Python3 online submissions for Valid Anagram.
"""


class Solution3:
    def is_anagram(self, s: str, t: str) -> bool:
        ds, dt = {}, {}
        for char in s:
            ds[char] = ds.get(char, 0) + 1
        for char in t:
            dt[char] = dt.get(char, 0) + 1
        return ds == dt
