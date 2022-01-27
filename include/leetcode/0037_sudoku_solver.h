#ifndef _LEETCODE_SUDOKU_SOLVER_H_
#define _LEETCODE_SUDOKU_SOLVER_H_

#include <vector>

namespace leetcode::sudoku_solver {

class Solution {
public:
    static void solve_sudoku(std::vector<std::vector<char>>& board);
};

}  // namespace leetcode::sudoku_solver

#endif
