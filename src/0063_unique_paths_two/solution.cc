#include "0063_unique_paths_two.h"

namespace leetcode::unique_paths_two {

int Solution::unique_paths_with_obstacles(const std::vector<std::vector<int>>& obstacle_grid) {
    int m = static_cast<int>(obstacle_grid.size()), n = static_cast<int>(obstacle_grid[0].size());
    std::vector<int> dp_vec(n, 0);
    for (int i = 0; i < n; ++i) {
        if (obstacle_grid[0][i] == 1) {
            break;
        }
        dp_vec[i] = 1;
    }
    for (int i = 1; i < m; ++i) {
        if (dp_vec[0] == 1 && obstacle_grid[i][0] == 1) {
            dp_vec[0] = 0;
        }
        for (int j = 1; j < n; ++j) {
            if (obstacle_grid[i][j] == 1) {
                dp_vec[j] = 0;
            } else {
                dp_vec[j] += dp_vec[j - 1];
            }
        }
    }
    return dp_vec.back();
}

}  // namespace leetcode::unique_paths_two
