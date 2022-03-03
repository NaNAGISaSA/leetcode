#include <algorithm>

#include "0064_minimum_path_sum.h"

namespace leetcode::minimum_path_sum {

int Solution::min_path_sum(const std::vector<std::vector<int>>& grid) {
    int m = static_cast<int>(grid.size()), n = static_cast<int>(grid[0].size());
    std::vector<int> dp_vec(n, grid[0][0]);
    for (int i = 1; i < n; ++i) {
        dp_vec[i] = dp_vec[i - 1] + grid[0][i];
    }
    for (int i = 1; i < m; ++i) {
        dp_vec[0] += grid[i][0];
        for (int j = 1; j < n; ++j) {
            dp_vec[j] = std::min(dp_vec[j], dp_vec[j - 1]) + grid[i][j];
        }
    }
    return dp_vec.back();
}

}  // namespace leetcode::minimum_path_sum
