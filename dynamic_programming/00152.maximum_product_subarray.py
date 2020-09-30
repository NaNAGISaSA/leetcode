
from typing import List

"""
Runtime: 52 ms, faster than 87.98% of Python3 online submissions for Maximum Product Subarray.
Memory Usage: 14.1 MB, less than 43.63% of Python3 online submissions for Maximum Product Subarray.
"""


class Solution:
    """
    no dp method

    Ideally, it should cover all cases, and should not reverse the array.
    But finally, this case can not cover: [-1. -2, -3], so reverse the array and find again.
    """
    def find_max_number(self, array):
        max_product, neg_product = 1, 1  # max_product always positive
        product_list = []
        for index, num in enumerate(array):
            if num < 0:
                neg_product *= num
                if neg_product == 1:
                    product_list.append(1)
                if neg_product > max_product:
                    max_product = neg_product
                else:
                    if max_product != 1:
                        product_list.append(max_product)
                    max_product = 1
            elif num > 0:
                max_product *= num
                neg_product *= num
                if max_product == 1:
                    product_list.append(max_product)
            else:
                if max_product != 1:
                    product_list.append(max_product)
                if neg_product > 0 and neg_product != 1:
                    product_list.append(neg_product)
                product_list.append(0)
                max_product, neg_product = 1, 1
        if max_product != 1:
            product_list.append(max_product)
        if neg_product != 1:
            product_list.append(neg_product)
        return max(product_list)

    def max_product(self, nums: List[int]) -> int:
        max_number = self.find_max_number(nums)
        max_number_reverse = self.find_max_number(reversed(nums))
        return max(max_number, max_number_reverse)


"""
Runtime: 72 ms, faster than 19.99% of Python3 online submissions for Maximum Product Subarray.
Memory Usage: 14 MB, less than 63.16% of Python3 online submissions for Maximum Product Subarray.
"""


class Solution2:
    """
    no dp method, find the max number directly
    """
    def max_product(self, nums: List[int]) -> int:
        import sys

        product = 1
        max_value = -sys.maxsize - 1
        for index, number in enumerate(nums):
            product *= number
            if product > max_value:
                max_value = product
            if product == 0:
                product = 1

        product = 1
        for index, number in enumerate(reversed(nums)):
            product *= number
            if product > max_value:
                max_value = product
            if product == 0:
                product = 1

        return max_value
