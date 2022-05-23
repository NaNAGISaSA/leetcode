#include "0188_best_time_to_buy_and_sell_stock_four.h"

#include <algorithm>

namespace leetcode::best_time_to_buy_and_sell_stock_four {

int Solution::max_profit(const std::vector<int>& prices, int k) {
    int price_size = static_cast<int>(prices.size());
    if (price_size < 2 || k == 0) {
        return 0;
    }
    // sweet case, do not need dp when k >= price_size / 2
    if (k >= price_size / 2) {
        int max_profit = 0;
        for (int i = 1; i < price_size; ++i) {
            max_profit += std::max(0, prices[i] - prices[i - 1]);
        }
        return max_profit;
    }
    std::vector<std::vector<int>> dp_mat(k + 1, std::vector<int>(price_size, 0));
    for (int i = 1; i <= k; ++i) {
        int max_profit = 0 - prices[0];
        for (int j = 1; j < price_size; ++j) {
            dp_mat[i][j] = std::max(dp_mat[i][j - 1], prices[j] + max_profit);
            max_profit = std::max(max_profit, dp_mat[i - 1][j - 1] - prices[j]);
        }
    }
    return dp_mat.back().back();
}

}  // namespace leetcode::best_time_to_buy_and_sell_stock_four
