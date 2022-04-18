#include <algorithm>

#include "0123_best_time_to_buy_and_sell_stock_three.h"

namespace leetcode::best_time_to_buy_and_sell_stock_three::faster_dp {

int Solution::max_profit(const std::vector<int>& prices) {
    // Time Complexity O(N^2) -> O(k*N)
    // 对于第j天，其寻找第i天进行交易以获得最大profit的操作（即prices[j] - prices[i] + dp[k - 1][i - 1]）
    //   可以不需要通过枚举得到，只需要维护一个变量max_profit即可，时间复杂度由此下降了一个数量级。
    std::vector<std::vector<int>> dp_mat(3, std::vector<int>(prices.size(), 0));
    for (size_t i = 1; i < dp_mat.size(); ++i) {
        int max_profit = dp_mat[i - 1][0] - prices[0];
        for (size_t j = 1; j < prices.size(); ++j) {
            dp_mat[i][j] = std::max(prices[j] + max_profit, dp_mat[i][j - 1]);
            max_profit = std::max(max_profit, dp_mat[i - 1][j - 1] - prices[j]);
        }
    }
    return dp_mat.back().back();
}

}  // namespace leetcode::best_time_to_buy_and_sell_stock_three::faster_dp
