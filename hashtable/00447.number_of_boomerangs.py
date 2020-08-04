
import collections
from typing import List

"""
Runtime: 1424 ms, faster than 42.96% of Python3 online submissions for Number of Boomerangs.
Memory Usage: 14.3 MB, less than 36.36% of Python3 online submissions for Number of Boomerangs.
"""


class Solution:
    def numberOfBoomerangs(self, points: List[List[int]]) -> int:
        d = collections.defaultdict(int)
        result = 0
        for index, point_one in enumerate(points):
            for point_two in [*points[:index], *points[index + 1:]]:
                distance = (point_one[0] - point_two[0]) ** 2 + (point_one[1] - point_two[1]) ** 2
                d[distance] += 1
            result += sum([value * (value - 1) for value in d.values()])
            d = collections.defaultdict(int)
        return result
