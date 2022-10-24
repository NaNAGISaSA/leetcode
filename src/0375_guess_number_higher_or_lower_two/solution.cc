#include "0375_guess_number_higher_or_lower_two.h"

#include <algorithm>
#include <limits>
#include <vector>

namespace leetcode::guess_number_higher_or_lower_two {

namespace {
int recurse_get_money_amount(int begin, int end, std::vector<std::vector<int>>& dp_mat) {
    if (begin >= end) {
        return 0;
    }
    if (dp_mat[begin][end] > 0) {
        return dp_mat[begin][end];
    }
    int min_val = std::numeric_limits<int>::max();
    for (int i = begin; i <= end; ++i) {
        min_val = std::min(
            min_val,
            i + std::max(recurse_get_money_amount(begin, i - 1, dp_mat), recurse_get_money_amount(i + 1, end, dp_mat)));
    }
    dp_mat[begin][end] = min_val;
    return min_val;
}
}  // namespace

int Solution::get_money_amount(int n) {
    std::vector<std::vector<int>> dp_mat(n + 1, std::vector<int>(n + 1, 0));
    return recurse_get_money_amount(1, n, dp_mat);
}

}  // namespace leetcode::guess_number_higher_or_lower_two
