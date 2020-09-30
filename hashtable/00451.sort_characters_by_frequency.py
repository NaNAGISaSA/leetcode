
import collections


"""
Runtime: 40 ms, faster than 83.74% of Python3 online submissions for Sort Characters By Frequency.
Memory Usage: 15.7 MB, less than 19.72% of Python3 online submissions for Sort Characters By Frequency.
"""


class Solution:
    def frequency_sort(self, s: str) -> str:
        dict1 = collections.Counter(s)
        dict2 = collections.defaultdict(list)
        result = []
        for k, v in dict1.items():
            dict2[v].append(k)
        for k in sorted(dict2.keys(), reverse=True):
            for value in dict2[k]:
                result.extend([value] * k)
        return ''.join(result)


"""
Runtime: 40 ms, faster than 83.74% of Python3 online submissions for Sort Characters By Frequency.
Memory Usage: 14.9 MB, less than 94.62% of Python3 online submissions for Sort Characters By Frequency.
"""


class Solution2:
    def frequency_sort(self, s: str) -> str:
        dict1 = collections.Counter(s)
        dict2 = collections.defaultdict(str)
        result = ''
        for k, v in dict1.items():
            dict2[v] += k * v
        for num in range(len(s), 0, -1):
            result += dict2.get(num, '')
        return result
