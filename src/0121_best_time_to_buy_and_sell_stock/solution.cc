#include <algorithm>

#include "0121_best_time_to_buy_and_sell_stock.h"

namespace leetcode::best_time_to_buy_and_sell_stock {

int Solution::max_profit(const std::vector<int>& prices) {
    int min_price = prices[0];
    int max_profit = 0;
    for (auto& num : prices) {
        max_profit = std::max(max_profit, num - min_price);
        min_price = std::min(min_price, num);
    }
    return max_profit;
}

}  // namespace leetcode::best_time_to_buy_and_sell_stock
