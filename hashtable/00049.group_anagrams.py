from typing import List

'''
Runtime: 112 ms, faster than 57.16% of Python3 online submissions for Group Anagrams.
Memory Usage: 17.1 MB, less than 56.82% of Python3 online submissions for Group Anagrams.
'''


class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        sort_dict = {}
        sort_set = set()
        for string in strs:
            sorted_string = ''.join(sorted(string))
            if sorted_string not in sort_set:
                sort_set.add(sorted_string)
                sort_dict[sorted_string] = [string]
            else:
                sort_dict[sorted_string].append(string)
        return list(sort_dict.values())


'''
Runtime: 188 ms, faster than 13.22% of Python3 online submissions for Group Anagrams.
Memory Usage: 16.5 MB, less than 89.37% of Python3 online submissions for Group Anagrams.
'''


class Solution2:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        sort_dict = {}
        for string in strs:
            sorted_string = ''.join(sorted(string))
            if sorted_string not in sort_dict.keys():
                sort_dict[sorted_string] = [string]
            else:
                sort_dict[sorted_string].append(string)
        return list(sort_dict.values())
