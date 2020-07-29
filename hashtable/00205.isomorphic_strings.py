
"""
Runtime: 64 ms, faster than 22.46% of Python3 online submissions for Isomorphic Strings.
Memory Usage: 14.2 MB, less than 20.47% of Python3 online submissions for Isomorphic Strings.
"""


class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        map_dict = {}
        map_dict2 = {}
        for char_s, char_t in zip(s, t):
            if char_s not in map_dict.keys():
                map_dict[char_s] = {char_t}
            elif char_t not in map_dict[char_s]:
                return False

            if char_t not in map_dict2.keys():
                map_dict2[char_t] = {char_s}
            elif char_s not in map_dict2[char_t]:
                return False
        return True


"""
Runtime: 48 ms, faster than 47.93% of Python3 online submissions for Isomorphic Strings.
Memory Usage: 14.1 MB, less than 34.51% of Python3 online submissions for Isomorphic Strings.
"""


class Solution2:
    def isIsomorphic(self, s: str, t: str) -> bool:
        return len(set(zip(s, t))) == len(set(s)) and len(set(zip(t, s))) == len(set(t))
