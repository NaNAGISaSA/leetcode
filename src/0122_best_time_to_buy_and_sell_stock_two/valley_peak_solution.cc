#include "0122_best_time_to_buy_and_sell_stock_two.h"

namespace leetcode::best_time_to_buy_and_sell_stock_two::valley_peak {

int Solution::max_profit(const std::vector<int>& prices) {
    int profit = 0, valley = 0, peak = 0;
    size_t price_size = prices.size();
    for (size_t i = 0; i < price_size - 1;) {
        while (i < price_size - 1 && prices[i] >= prices[i + 1]) {
            ++i;
        }
        valley = prices[i];
        while (i < price_size - 1 && prices[i] <= prices[i + 1]) {
            ++i;
        }
        peak = prices[i];
        profit += peak - valley;
    }
    return profit;
}

}  // namespace leetcode::best_time_to_buy_and_sell_stock_two::valley_peak
