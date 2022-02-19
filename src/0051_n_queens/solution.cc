#include "0051_n_queens.h"

namespace leetcode::n_queens {

namespace {
bool is_valid(const std::vector<int>& column, int curr_col) {
    int curr_row = static_cast<int>(column.size());
    for (int i = 0; i < static_cast<int>(column.size()); ++i) {
        if (curr_col == column[i] || curr_row - i == curr_col - column[i] || curr_row - i == column[i] - curr_col) {
            return false;
        }
    }
    return true;
}

void backtrace(std::vector<std::vector<std::string>>& result, std::vector<int>& column, int n) {
    if (static_cast<int>(column.size()) == n) {
        std::vector<std::string> res(n, std::string(n, '.'));
        for (int i = 0; i < n; ++i) {
            res[i][column[i]] = 'Q';
        }
        result.push_back(std::move(res));
        return;
    }
    for (int i = 0; i < n; ++i) {
        if (is_valid(column, i)) {
            column.push_back(i);
            backtrace(result, column, n);
            column.pop_back();
        }
    }
}
}  // namespace

std::vector<std::vector<std::string>> Solution::solve_n_queens(int n) {
    std::vector<std::vector<std::string>> result;
    std::vector<int> column;
    backtrace(result, column, n);
    return result;
}

}  // namespace leetcode::n_queens
