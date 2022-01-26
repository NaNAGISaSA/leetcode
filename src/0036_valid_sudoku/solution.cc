#include <string>
#include <unordered_set>

#include "0036_valid_sudoku.h"

namespace leetcode::valid_sudoku {

bool Solution::is_valid_sudoku(const std::vector<std::vector<char>>& board) {
    // board.length == 9, board[i].length == 9
    std::unordered_set<std::string> item_set;
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            if (board[i][j] != '.') {
                std::string curr = std::string(1, board[i][j]);
                if (item_set.find("r" + std::to_string(i) + curr) != item_set.end() ||
                    item_set.find("c" + std::to_string(j) + curr) != item_set.end() ||
                    item_set.find("b" + std::to_string(i / 3) + std::to_string(j / 3) + curr) != item_set.end()) {
                    return false;
                }
                item_set.insert("r" + std::to_string(i) + curr);
                item_set.insert("c" + std::to_string(j) + curr);
                item_set.insert("b" + std::to_string(i / 3) + std::to_string(j / 3) + curr);
            }
        }
    }
    return true;
}

}  // namespace leetcode::valid_sudoku
