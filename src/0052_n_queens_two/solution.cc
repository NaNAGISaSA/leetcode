#include <vector>

#include "0052_n_queens_two.h"

namespace leetcode::n_queens_two {

namespace {
bool is_valid(const std::vector<int>& column, int curr_col) {
    int curr_row = static_cast<int>(column.size());
    for (int i = 0; i < curr_row; ++i) {
        if (curr_col == column[i] || curr_row - i == curr_col - column[i] || curr_row - i == column[i] - curr_col) {
            return false;
        }
    }
    return true;
}

int backtrace(std::vector<int>& column, int n) {
    if (static_cast<int>(column.size()) == n) {
        return 1;
    }
    int result = 0;
    for (int i = 0; i < n; ++i) {
        if (is_valid(column, i)) {
            column.push_back(i);
            result += backtrace(column, n);
            column.pop_back();
        }
    }
    return result;
}
}  // namespace

int Solution::total_n_queens(int n) {
    std::vector<int> column;
    return backtrace(column, n);
}

}  // namespace leetcode::n_queens_two
