
"""
Runtime: 28 ms, faster than 82.80% of Python3 online submissions for Climbing Stairs.
Memory Usage: 13.7 MB, less than 77.71% of Python3 online submissions for Climbing Stairs.
"""


class Solution:

    @staticmethod
    def count(n, d):
        """
        count(n) = count(n - 1) + count(n - 2)
        """
        if n in d:
            return d[n]
        d[n] = Solution.count(n - 1, d) + Solution.count(n - 2, d)
        return d[n]

    def climb_stairs(self, n: int) -> int:
        d = {1: 1, 2: 2}
        return Solution.count(n, d)


"""
Runtime: 28 ms, faster than 82.80% of Python3 online submissions for Climbing Stairs.
Memory Usage: 14 MB, less than 14.65% of Python3 online submissions for Climbing Stairs.
"""


class Solution2:

    def climb_stairs(self, n: int) -> int:
        d = {1: 1, 2: 2}
        for number in range(3, n + 1):
            d[number] = d[number - 1] + d[number - 2]
        return d[n]
