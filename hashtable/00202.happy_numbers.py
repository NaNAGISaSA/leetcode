
"""
Runtime: 56 ms, faster than 16.66% of Python3 online submissions for Happy Number.
Memory Usage: 13.9 MB, less than 32.86% of Python3 online submissions for Happy Number.
"""


class Solution:
    def isHappy(self, n: int) -> bool:
        set_number = {''.join(sorted(str(n)))}
        while True:
            sum_number = sum([int(num) ** 2 for num in str(n)])
            if sum_number == 1:
                return True
            elif ''.join(sorted(str(sum_number))) in set_number:
                return False
            else:
                set_number.add(''.join(sorted(str(sum_number))))
                n = sum_number


"""
Runtime: 56 ms, faster than 16.66% of Python3 online submissions for Happy Number.
Memory Usage: 14 MB, less than 12.89% of Python3 online submissions for Happy Number.
"""


class Solution2:
    def isHappy(self, n: int) -> bool:
        set_number = {''.join(sorted(str(n)))}
        while True:
            sum_number = sum([int(num) ** 2 for num in str(n)])
            if sum_number == 1:
                return True
            str_number = ''.join(sorted(str(sum_number)))
            if str_number in set_number:
                return False
            else:
                set_number.add(str_number)
                n = sum_number


"""
Runtime: 48 ms, faster than 26.69% of Python3 online submissions for Happy Number.
Memory Usage: 13.6 MB, less than 94.19% of Python3 online submissions for Happy Number.
"""


class Solution3:
    def isHappy(self, n: int) -> bool:
        set_number = {n}
        while n != 1:
            n = sum([int(num) ** 2 for num in str(n)])
            if n in set_number:
                return False
            else:
                set_number.add(n)
        return True
