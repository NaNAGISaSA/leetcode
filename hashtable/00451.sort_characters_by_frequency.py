
import collections


"""
Runtime: 40 ms, faster than 83.74% of Python3 online submissions for Sort Characters By Frequency.
Memory Usage: 15.7 MB, less than 19.72% of Python3 online submissions for Sort Characters By Frequency.
"""


class Solution:
    def frequencySort(self, s: str) -> str:
        d1 = collections.Counter(s)
        d2 = collections.defaultdict(list)
        result = []
        for k, v in d1.items():
            d2[v].append(k)
        for k in sorted(d2.keys(), reverse=True):
            for value in d2[k]:
                result.extend([value] * k)
        return ''.join(result)


"""
Runtime: 40 ms, faster than 83.74% of Python3 online submissions for Sort Characters By Frequency.
Memory Usage: 14.9 MB, less than 94.62% of Python3 online submissions for Sort Characters By Frequency.
"""


class Solution2:
    def frequencySort(self, s: str) -> str:
        d1 = collections.Counter(s)
        d2 = collections.defaultdict(str)
        result = ''
        for k, v in d1.items():
            d2[v] += k * v
        for num in range(len(s), 0, -1):
            result += d2.get(num, '')
        return result


print(Solution2().frequencySort('tree'))
