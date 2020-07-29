from typing import List

'''
Runtime: 164 ms, faster than 16.53% of Python3 online submissions for Valid Sudoku.
Memory Usage: 13.9 MB, less than 39.94% of Python3 online submissions for Valid Sudoku.
'''


class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:

        rows = [set() for _ in range(9)]
        columns = [set() for _ in range(9)]
        squares = [set() for _ in range(9)]

        for i in range(9):
            for j in range(9):
                number = board[i][j]

                if number == '.':
                    continue

                if number in rows[i]:
                    return False
                if number in columns[j]:
                    return False
                square_number = (i // 3) * 3 + j // 3
                if number in squares[square_number]:
                    return False

                rows[i].add(number)
                columns[j].add(number)
                squares[square_number].add(number)

        return True
