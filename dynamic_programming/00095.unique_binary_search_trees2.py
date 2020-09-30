
from typing import List


# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


"""
Runtime: 64 ms, faster than 67.45% of Python3 online submissions for Unique Binary Search Trees II.
Memory Usage: 15.2 MB, less than 82.74% of Python3 online submissions for Unique Binary Search Trees II.
"""


class Solution:

    @staticmethod
    def gen_tress(start, end):
        result = []

        if start > end:
            return [None]

        if start == end:
            return [TreeNode(start)]

        for i in range(start, end + 1):
            left_nodes = Solution.gen_tress(start, i - 1)
            right_nodes = Solution.gen_tress(i + 1, end)

            for _, lnode in enumerate(left_nodes):
                for _, rnode in enumerate(right_nodes):
                    result.append(TreeNode(i, lnode, rnode))

        return result

    def generate_trees(self, n: int) -> List[TreeNode]:
        return [] if n == 0 else Solution.gen_tress(1, n)
