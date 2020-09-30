
"""
Runtime: 36 ms, faster than 90.81% of Python3 online submissions for Bulls and Cows.
Memory Usage: 14 MB, less than 19.12% of Python3 online submissions for Bulls and Cows.
"""


class Solution:
    def get_hint(self, secret: str, guess: str) -> str:
        d_s, d_g, d_b = {}, {}, {}
        num_bulls, num_cows = 0, 0
        for e in zip(secret, guess):
            d_s[e[0]] = d_s.get(e[0], 0) + 1
            d_g[e[1]] = d_g.get(e[1], 0) + 1
            if e[0] == e[1]:
                num_bulls += 1
                d_b[e[0]] = d_b.get(e[0], 0) + 1
        for num in range(10):
            num_cows += min(d_s.get(str(num), 0) - d_b.get(str(num), 0), d_g.get(str(num), 0) - d_b.get(str(num), 0))
        return f'{num_bulls}A{num_cows}B'


"""
Runtime: 44 ms, faster than 62.75% of Python3 online submissions for Bulls and Cows.
Memory Usage: 13.8 MB, less than 70.22% of Python3 online submissions for Bulls and Cows.
"""


class Solution2:
    def get_hint(self, secret: str, guess: str) -> str:
        d_s, d_g = {}, {}
        num_bulls = 0
        for e in zip(secret, guess):
            if e[0] == e[1]:
                num_bulls += 1
            else:
                d_s[e[0]] = d_s.get(e[0], 0) + 1
                d_g[e[1]] = d_g.get(e[1], 0) + 1
        num_cows = sum([min(d_s.get(str(num), 0), d_g.get(str(num), 0)) for num in range(10)])
        return f'{num_bulls}A{num_cows}B'
