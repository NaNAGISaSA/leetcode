#include "0292_nim_game.h"

#include <vector>

namespace leetcode::nim_game::dp {

bool Solution::can_win(int n) {
    // Time Limit Exceeded
    std::vector<bool> dp_mat(n + 1, true);
    for (int i = 4; i <= n; ++i) {
        dp_mat[i] = !dp_mat[i - 1] || !dp_mat[i - 2] || !dp_mat[i - 3];
    }
    return dp_mat[n];
}

}  // namespace leetcode::nim_game::dp
