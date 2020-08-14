
"""
Time Limit Exceeded
"""


class Solution:
    @staticmethod
    def count(m, n):
        """
        number(m, n) = number(m - 1, n) + number(m, n - 1)
        """
        if m == 0 and n == 0:
            return 1
        elif m < 0 or n < 0:
            return 0
        else:
            return Solution.count(m - 1, n) + Solution.count(m, n - 1)

    def uniquePaths(self, m: int, n: int) -> int:
        return Solution.count(m - 1, n - 1)


"""
Runtime: 28 ms, faster than 85.86% of Python3 online submissions for Unique Paths.
Memory Usage: 13.7 MB, less than 83.85% of Python3 online submissions for Unique Paths.
"""


class Solution2:
    """
    backward to forward
    """

    @staticmethod
    def count(m, n, d):
        """
        number(m, n) = number(m - 1, n) + number(m, n - 1)
        """
        if (m, n) in d:
            return d.get((m, n))
        elif m < 0 or n < 0:
            return 0
        else:
            d[(m, n)] = Solution2.count(m - 1, n, d) + Solution2.count(m, n - 1, d)
            return d[(m, n)]

    def uniquePaths(self, m: int, n: int) -> int:
        d = {(0, 0): 1}
        return Solution2.count(m - 1, n - 1, d)


"""
Runtime: 24 ms, faster than 95.76% of Python3 online submissions for Unique Paths.
Memory Usage: 13.6 MB, less than 96.92% of Python3 online submissions for Unique Paths.
"""


class Solution3:
    """
    forward to backward
    """

    def uniquePaths(self, m: int, n: int) -> int:
        d = [[1] * m]
        d.extend([[1] + [0] * (m - 1) for _ in range(n - 1)])
        for x in range(1, n):
            for j in range(1, m):
                d[x][j] = d[x - 1][j] + d[x][j - 1]
                print(d)
        return d[n - 1][m - 1]

Solution3().uniquePaths(7, 3)