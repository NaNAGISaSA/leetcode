#include "0174_dungeon_game.h"

namespace leetcode::dungeon_game {

int Solution::calculate_minimum_hp(const std::vector<std::vector<int>>& dungeon) {
    size_t m = dungeon.size(), n = dungeon[0].size();
    std::vector<int> dp_vec(n, 0);
    dp_vec.back() = dungeon[m - 1][n - 1] > 0 ? 1 : 1 - dungeon[m - 1][n - 1];
    for (size_t i = n - 2; i < n; --i) {
        dp_vec[i] = std::max(dp_vec[i + 1] - dungeon[m - 1][i], 1);
    }
    for (size_t i = m - 2; i < m; --i) {
        dp_vec.back() = std::max(dp_vec.back() - dungeon[i][n - 1], 1);
        for (size_t j = n - 2; j < n; --j) {
            dp_vec[j] = std::max(std::min(dp_vec[j], dp_vec[j + 1]) - dungeon[i][j], 1);
        }
    }
    return dp_vec.front();
}

}  // namespace leetcode::dungeon_game
