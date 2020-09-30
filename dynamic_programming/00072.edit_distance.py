
"""
Runtime: 192 ms, faster than 72.62% of Python3 online submissions for Edit Distance.
Memory Usage: 17.1 MB, less than 77.27% of Python3 online submissions for Edit Distance.
"""


class Solution:
    """
    word1[0, i)  word2[0, j)  s(i, j) -> minimal distance between two words

    s(i, j) = s(i - 1, j - 1) if word1[i] == word2[j] else min(s(i, j - 1), s(i - 1, j), s(i - 1, j - 1)) + 1
    """
    def min_distance(self, word1: str, word2: str) -> int:
        length1, length2 = len(word1), len(word2)
        length_matrix = [[-1] * (length2 + 1) for _ in range(length1 + 1)]
        for i in range(length1 + 1):
            length_matrix[i][0] = i
        for j in range(length2 + 1):
            length_matrix[0][j] = j
        for i in range(1, length1 + 1):
            for j in range(1, length2 + 1):
                if word1[i - 1] == word2[j - 1]:
                    length_matrix[i][j] = length_matrix[i - 1][j - 1]
                else:
                    length_matrix[i][j] = min(length_matrix[i - 1][j],
                                              length_matrix[i][j - 1],
                                              length_matrix[i - 1][j - 1]) + 1
        return length_matrix[length1][length2]
