#include "0312_burst_balloons.h"

#include <algorithm>

namespace leetcode::burst_balloons {

int Solution::max_coins(std::vector<int>& nums) {
    size_t num_size = nums.size();
    std::vector<int> aux_nums(num_size + 2, 1);
    for (size_t i = 1; i <= num_size; ++i) {
        aux_nums[i] = nums[i - 1];
    }
    std::vector<std::vector<int>> dp_mat(num_size + 2, std::vector<int>(num_size + 2, 0));
    // dp_mat[i][j]: the max coins of [i, j] of aux_num while
    //   [1, i - 1] and [j + 1, num_size] remain unbursted
    for (size_t i = 1; i <= num_size; ++i) {
        dp_mat[i][i] = aux_nums[i - 1] * aux_nums[i] * aux_nums[i + 1];
    }
    for (size_t i = num_size - 1; i > 0; --i) {
        for (size_t j = i + 1; j <= num_size; ++j) {
            dp_mat[i][j] = std::max(aux_nums[i - 1] * aux_nums[i] * aux_nums[j + 1] + dp_mat[i + 1][j],
                                    aux_nums[i - 1] * aux_nums[j] * aux_nums[j + 1] + dp_mat[i][j - 1]);
            for (size_t k = i + 1; k < j; ++k) {
                dp_mat[i][j] =
                    std::max(dp_mat[i][j],
                             aux_nums[i - 1] * aux_nums[k] * aux_nums[j + 1] + dp_mat[i][k - 1] + dp_mat[k + 1][j]);
            }
        }
    }
    return dp_mat[1][num_size];
}

}  // namespace leetcode::burst_balloons
