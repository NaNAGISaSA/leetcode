#ifndef _LEETCODE_VALID_SUDOKU_H_
#define _LEETCODE_VALID_SUDOKU_H_

#include <vector>

namespace leetcode::valid_sudoku {

class Solution {
public:
    static bool is_valid_sudoku(const std::vector<std::vector<char>>& board);
};

}  // namespace leetcode::valid_sudoku

#endif
