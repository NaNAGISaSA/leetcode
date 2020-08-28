
from typing import List

"""
Runtime: 60 ms, faster than 85.10% of Python3 online submissions for Triangle.
Memory Usage: 14.6 MB, less than 57.17% of Python3 online submissions for Triangle.
"""


class Solution:
    """
    equal to question 64

    min_sum[i][j] += min(min_sum[i - 1][j], min_sum[i - 1][j - 1])
    """
    def minimumTotal(self, triangle: List[List[int]]) -> int:
        number_list = triangle[:]
        for index, content in enumerate(triangle[1:], 1):
            number_list[index][0] += number_list[index - 1][0]
            number_list[index][-1] += number_list[index - 1][-1]
        for i in range(2, len(number_list)):
            for j in range(1, len(number_list[i]) - 1):
                number_list[i][j] += min(number_list[i - 1][j - 1], number_list[i - 1][j])
        return min(number_list[-1])


"""
Runtime: 56 ms, faster than 94.45% of Python3 online submissions for Triangle.
Memory Usage: 14.6 MB, less than 49.29% of Python3 online submissions for Triangle.
"""


class Solution2:
    """
    equal to question 64

    min_sum[i][j] += min(min_sum[i - 1][j], min_sum[i - 1][j - 1])
    """
    def minimumTotal(self, triangle: List[List[int]]) -> int:
        for index, content in enumerate(triangle[1:], 1):
            triangle[index][0] += triangle[index - 1][0]
            triangle[index][-1] += triangle[index - 1][-1]
        for i in range(2, len(triangle)):
            for j in range(1, len(triangle[i]) - 1):
                triangle[i][j] += min(triangle[i - 1][j - 1], triangle[i - 1][j])
        return min(triangle[-1])
