
from typing import List


"""
Runtime: 44 ms, faster than 74.14% of Python3 online submissions for Unique Paths II.
Memory Usage: 13.6 MB, less than 99.41% of Python3 online submissions for Unique Paths II.
"""


class Solution:
    """
    count(m, n) = count(m - 1, n) + count(m, n - 1)
    """
    def unique_paths_with_obstacles(self, obstacleGrid: List[List[int]]) -> int:  # pylint: disable=invalid-name
        length1, length2 = len(obstacleGrid), len(obstacleGrid[0])
        count_matrix = [[0] * length2 for _ in range(length1)]
        count_matrix[0][0] = 1 if obstacleGrid[0][0] == 0 else 0
        for i in range(1, length1):
            count_matrix[i][0] = 1 if obstacleGrid[i][0] == 0 and count_matrix[i - 1][0] == 1 else 0
        for i in range(1, length2):
            count_matrix[0][i] = 1 if obstacleGrid[0][i] == 0 and count_matrix[0][i - 1] == 1 else 0
        for i in range(1, length1):
            for j in range(1, length2):
                count_matrix[i][j] = count_matrix[i - 1][j] + count_matrix[i][j - 1] if obstacleGrid[i][j] == 0 else 0
        return count_matrix[length1 - 1][length2 - 1]
