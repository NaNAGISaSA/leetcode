
from typing import List

"""
Runtime: 100 ms, faster than 86.41% of Python3 online submissions for Minimum Path Sum.
Memory Usage: 15.6 MB, less than 14.11% of Python3 online submissions for Minimum Path Sum.
"""


class Solution:

    @staticmethod
    def min_path(i, j, grid, path):
        """
        s: min sum of path
        s[i][j] = min(s[i - 1][j], s[i][j - 1]) + grid[i][j]
        """
        if path[i][j] != -1:
            return path[i][j]
        path[i][j] = min(Solution.min_path(i - 1, j, grid, path), Solution.min_path(i, j - 1, grid, path)) + grid[i][j]
        return path[i][j]

    def min_path_sum(self, grid: List[List[int]]) -> int:
        i, j = len(grid), len(grid[0])
        path = [[-1] * j for _ in range(i)]
        path[0][0] = grid[0][0]
        for index in range(1, j):
            path[0][index] = path[0][index - 1] + grid[0][index]
        for index in range(1, i):
            path[index][0] = path[index - 1][0] + grid[index][0]
        return Solution.min_path(i - 1, j - 1, grid, path)


"""
Runtime: 100 ms, faster than 86.41% of Python3 online submissions for Minimum Path Sum.
Memory Usage: 15.5 MB, less than 23.47% of Python3 online submissions for Minimum Path Sum.
"""


class Solution2:

    def min_path_sum(self, grid: List[List[int]]) -> int:
        i, j = len(grid), len(grid[0])
        for index in range(1, j):
            grid[0][index] = grid[0][index - 1] + grid[0][index]
        for index in range(1, i):
            grid[index][0] = grid[index - 1][0] + grid[index][0]
        for m in range(1, i):
            for n in range(1, j):
                grid[m][n] = min(grid[m - 1][n], grid[m][n - 1]) + grid[m][n]
        return grid[i - 1][j - 1]
