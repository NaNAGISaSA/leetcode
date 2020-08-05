
from typing import List


"""
Runtime: 556 ms, faster than 88.81% of Python3 online submissions for Island Perimeter.
Memory Usage: 13.9 MB, less than 76.67% of Python3 online submissions for Island Perimeter.
"""


class Solution:
    def islandPerimeter(self, grid: List[List[int]]) -> int:
        pad_grad = []
        for i in range(len(grid)):
            pad_grad.append([0, *grid[i], 0])
        pad_grad = [[0] * (len(grid[0]) + 2), *pad_grad, [0] * (len(grid[0]) + 2)]
        result = 0
        for y, content in enumerate(pad_grad):
            for x, num in enumerate(content):
                if num == 0:
                    continue
                result += (4 - sum([pad_grad[y][x - 1], pad_grad[y][x + 1], pad_grad[y - 1][x], pad_grad[y + 1][x]]))
        return result


"""
Runtime: 520 ms, faster than 94.80% of Python3 online submissions for Island Perimeter.
Memory Usage: 13.9 MB, less than 91.90% of Python3 online submissions for Island Perimeter.
"""


class Solution2:
    def islandPerimeter(self, grid: List[List[int]]) -> int:
        result = 0
        for y, content in enumerate(grid):
            for x, num in enumerate(content):
                if num == 0:
                    continue
                result += 4
                if y < len(grid) - 1 and grid[y + 1][x] == 1:
                    result -= 2
                if x < len(content) - 1 and grid[y][x + 1] == 1:
                    result -= 2
        return result
