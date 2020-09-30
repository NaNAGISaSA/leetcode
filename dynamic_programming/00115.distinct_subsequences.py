
"""
Time Limit Exceeded
"""


class Solution:
    """
    count(s, t) = count(s[index + 1:], t[1:]) -> s has one t[0]
                = count(s[index + 1:], t[1:]) + count(s[index + 1:], t) -> s has more than two t[0]
    """
    @staticmethod
    def count(s, t):
        if len(t) == 0:
            return 1
        index = s.find(t[0])
        if index == -1:
            return 0
        if index == s.rfind(t[0]):
            return Solution.count(s[index + 1:], t[1:])
        return Solution.count(s[index + 1:], t[1:]) + Solution.count(s[index + 1:], t)

    def num_distinct(self, s: str, t: str) -> int:
        return Solution.count(s, t)


"""
Runtime: 148 ms, faster than 72.11% of Python3 online submissions for Distinct Subsequences.
Memory Usage: 18.5 MB, less than 54.72% of Python3 online submissions for Distinct Subsequences.
"""


class Solution2:
    """
    dp[i][j] -> count of t[0, j) in s[0, i)
    dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1]    s[i] == t[j]
               dp[i - 1][j]   s[i] != t[j]
    """
    def num_distinct(self, s: str, t: str) -> int:
        length1, length2 = len(s), len(t)
        count_matrix = [[0] * (length2 + 1)for _ in range(length1 + 1)]
        for number in range(0, length1 + 1):
            count_matrix[number][0] = 1
        for x in range(1, length1 + 1):
            for y in range(1, length2 + 1):
                if s[x - 1] == t[y - 1]:
                    count_matrix[x][y] = count_matrix[x - 1][y] + count_matrix[x - 1][y - 1]
                else:
                    count_matrix[x][y] = count_matrix[x - 1][y]
        return count_matrix[length1][length2]
