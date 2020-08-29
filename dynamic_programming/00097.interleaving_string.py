
"""
Runtime: 36 ms, faster than 77.24% of Python3 online submissions for Interleaving String.
Memory Usage: 13.8 MB, less than 89.48% of Python3 online submissions for Interleaving String.
"""


class Solution:
    """
    dp[i][j]   s1[0, i) s2 [0, j)  s3[0, i + j)
    dp[i][j] = (dp[i - 1][j] and s3[i + j - 1] == s1[i - 1]) or (dp[i][j - 1] and s3[i + j - 1] == s2[j - 1])
    """
    def isInterleave(self, s1: str, s2: str, s3: str) -> bool:
        length1, length2 = len(s1), len(s2)
        if length1 == 0 or length2 == 0:
            return s1 == s3 or s2 == s3
        if length1 + length2 != len(s3):
            return False
        dp_matrix = [[False] * (length2 + 1) for _ in range(length1 + 1)]
        for i in range(1, length1 + 1):
            dp_matrix[i][0] = s1[:i] == s3[:i]
        for i in range(1, length2 + 1):
            dp_matrix[0][i] = s2[:i] == s3[:i]
        for i in range(1, length1 + 1):
            for j in range(1, length2 + 1):
                dp_matrix[i][j] = (dp_matrix[i - 1][j] and s1[i - 1] == s3[i + j - 1]) or \
                                  (dp_matrix[i][j - 1] and s2[j - 1] == s3[i + j - 1])

        return dp_matrix[length1][length2]
