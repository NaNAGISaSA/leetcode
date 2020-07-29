
from typing import List

"""
Runtime: 40 ms, faster than 50.62% of Python3 online submissions for H-Index.
Memory Usage: 14.1 MB, less than 43.27% of Python3 online submissions for H-Index.
"""


class Solution:
    def hIndex(self, citations: List[int]) -> int:
        if len(citations) == 1:
            return 1 if citations[0] >= 1 else 0
        sorted_citations = sorted(citations, reverse=True)
        paper_numbers = len(citations)
        for number in range(0, len(citations)):
            h = number + 1
            if sorted_citations[number] >= h and sorted_citations[h - paper_numbers] <= h:
                return h
        return len(citations) if sum(citations) > 0 else 0


"""
Runtime: 28 ms, faster than 97.99% of Python3 online submissions for H-Index.
Memory Usage: 14.1 MB, less than 35.34% of Python3 online submissions for H-Index.
"""


class Solution2:
    def hIndex(self, citations: List[int]) -> int:
        sort = sorted(citations, reverse=True)
        return sum([1 if number >= (index + 1) else 0 for index, number in enumerate(sort)])
