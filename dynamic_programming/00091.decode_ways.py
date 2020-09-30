
"""
Runtime: 32 ms, faster than 81.44% of Python3 online submissions for Decode Ways.
Memory Usage: 15.6 MB, less than 10.11% of Python3 online submissions for Decode Ways.
"""


class Solution:
    """
    count(string) = count(string[1:]) + count(string[2:]) if string[:2] in [10, 26]
                    count(string[1:]) if string[0] in [2, 9]
                    0 if string[0] == '0'
    """
    @staticmethod
    def count(string, d):
        if string == '':
            return 1
        if string[0] == '0':
            return 0
        if string in d:
            return d[string]
        if string[0] == '1' or string[:2] in ('20', '21', '22', '23', '24', '25', '26'):
            d[string] = Solution.count(string[1:], d) + Solution.count(string[2:], d)
        else:
            d[string] = Solution.count(string[1:], d)
        return d[string]

    def num_decodings(self, s: str) -> int:
        if s.startswith('0'):
            return 0
        return Solution.count(s, {s[-1]: 1})


"""
Runtime: 24 ms, faster than 98.62% of Python3 online submissions for Decode Ways.
Memory Usage: 13.7 MB, less than 91.05% of Python3 online submissions for Decode Ways.
"""


class Solution2:
    """
    dp[n]: decoding number of s[:n]
    """
    def num_decodings(self, s: str) -> int:
        length = len(s)
        dp = [0] * (length + 1)
        dp[0] = 1
        dp[1] = 0 if s[0] == '0' else 1
        for i in range(2, length + 1):
            str1 = int(s[i - 1: i])
            str2 = int(s[i - 2: i])
            if 1 <= str1 <= 9:
                dp[i] += dp[i - 1]
            if 10 <= str2 <= 26:
                dp[i] += dp[i - 2]
        return dp[length]
