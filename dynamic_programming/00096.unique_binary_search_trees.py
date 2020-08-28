
"""
Runtime: 48 ms, faster than 18.43% of Python3 online submissions for Unique Binary Search Trees.
Memory Usage: 13.8 MB, less than 67.49% of Python3 online submissions for Unique Binary Search Trees.
"""


class Solution:
    """
    count = count + left_cases * right_cases for num in [1, number]
    """
    @staticmethod
    def count(number_list, d):
        number_list = sorted(number_list)
        length = len(number_list)
        if length in d:
            return d[length]
        count = 0
        for index, _ in enumerate(number_list):
            count += Solution.count(number_list[:index], d) * Solution.count(number_list[index + 1:], d)
        d[length] = count
        return count

    def numTrees(self, n: int) -> int:
        d = {0: 1, 1: 1, 2: 2, 3: 5}
        for i in range(4, n + 1):
            Solution.count(list(range(1, i + 1)), d)
        return d[n]


"""
Runtime: 40 ms, faster than 33.43% of Python3 online submissions for Unique Binary Search Trees.
Memory Usage: 13.8 MB, less than 46.35% of Python3 online submissions for Unique Binary Search Trees.
"""


class Solution2:

    @staticmethod
    def count(number, d):
        if number in d:
            return d[number]
        count = 0
        for i in range(number):
            count += d[i] * d[number - i - 1]
        d[number] = count
        return count

    def numTrees(self, n: int) -> int:
        d = {0: 1, 1: 1, 2: 2, 3: 5}
        for i in range(4, n + 1):
            Solution2.count(i, d)
        return d[n]
