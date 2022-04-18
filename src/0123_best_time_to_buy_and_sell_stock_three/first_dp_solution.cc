#include <algorithm>

#include "0123_best_time_to_buy_and_sell_stock_three.h"

namespace leetcode::best_time_to_buy_and_sell_stock_three::first_dp {

int Solution::max_profit(const std::vector<int>& prices) {
    int prices_size = static_cast<int>(prices.size()), max_profit = 0;
    std::vector<int> dp_vec(prices_size + 1, 0);
    for (int i = prices_size - 2; i >= 0; --i) {
        dp_vec[i] = dp_vec[i + 1];
        for (int j = i + 1; j < prices_size; ++j) {
            if (prices[j] - prices[i] > 0) {
                dp_vec[i] = std::max(dp_vec[i], prices[j] - prices[i]);
                max_profit = std::max(max_profit, prices[j] - prices[i] + dp_vec[j + 1]);
            }
        }
    }
    return max_profit;
}

}  // namespace leetcode::best_time_to_buy_and_sell_stock_three::first_dp
