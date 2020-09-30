
from typing import List


"""
Runtime: 204 ms, faster than 77.21% of Python3 online submissions for Maximal Square.
Memory Usage: 14.5 MB, less than 65.99% of Python3 online submissions for Maximal Square.
"""


class Solution:
    """
    dp(i, j) = 0   dp(i, j) = 0
               min(dp(i - 1, j), dp(i, j - 1), dp(i - 1, j - 1)) + 1   dp(i, j) = 1
    """
    def maximal_square(self, matrix: List[List[str]]) -> int:
        if len(matrix) == 0:
            return 0
        for i in range(len(matrix)):
            matrix[i][0] = int(matrix[i][0])
        for i in range(len(matrix[0])):
            matrix[0][i] = int(matrix[0][i])
        max_length = max([*matrix[0], *list(zip(*matrix))[0]])
        for i in range(1, len(matrix)):
            for j in range(1, len(matrix[0])):
                if matrix[i][j] != '0':
                    matrix[i][j] = min(int(matrix[i - 1][j]), int(matrix[i][j - 1]), int(matrix[i - 1][j - 1])) + 1
                    max_length = max(max_length, matrix[i][j])
        return max_length ** 2
