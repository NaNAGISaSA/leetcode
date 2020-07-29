
"""
Time out
"""


class Solution:
    def countPrimes(self, n: int) -> int:
        if n <= 2:
            return 0
        result = set(range(2, n))
        selected = set()
        for num in range(2, n):
            for number in result:
                if number % num == 0 and num != number:
                    selected.add(number)
            result = result - selected
        return len(result)


"""
Time out
"""


class Solution2:

    @staticmethod
    def is_prime(number):
        begin = 2
        while begin ** 2 <= number:
            if number % begin == 0:
                return False
            begin += 1
        return True

    def countPrimes(self, n: int) -> int:
        if n <= 2:
            return 0
        count = 0
        for number in range(2, n):
            if Solution2.is_prime(number):
                count += 1
        return count


"""
Runtime: 720 ms, faster than 54.20% of Python3 online submissions for Count Primes.
Memory Usage: 25.5 MB, less than 55.51% of Python3 online submissions for Count Primes.
"""


class Solution3:

    def countPrimes(self, n: int) -> int:
        if n <= 2:
            return 0
        result = [True] * n
        for number in range(2, n):
            if result[number]:
                for i in range(number ** 2, n, number):
                    result[i] = False
        return sum(result) - 2
