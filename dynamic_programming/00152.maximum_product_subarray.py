
from typing import List

"""
Runtime: 52 ms, faster than 87.98% of Python3 online submissions for Maximum Product Subarray.
Memory Usage: 14.1 MB, less than 43.63% of Python3 online submissions for Maximum Product Subarray.
"""


class Solution:
    """
    no dp method
    """
    def find_max_number(self, array):
        max_product, neg_product = 1, 1
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

    def maxProduct(self, nums: List[int]) -> int:
        max_number = self.find_max_number(nums)
        max_number_reverse = self.find_max_number(reversed(nums))
        return max(max_number, max_number_reverse)
