#include "0309_best_time_to_buy_and_sell_stock_with_cooldown.h"

#include <algorithm>
#include <numeric>

namespace leetcode::best_time_to_buy_and_sell_stock_with_cooldown {

/*
 * hold: max profit of holding stock at currnet day;
 * sell: max profit of selling stock at currnet day;
 * rest: max profit of doing nothing at currnet day(not hold, not sell);
 */
int Solution::max_profit(const std::vector<int>& prices) {
    int hold = -prices[0], sell = std::numeric_limits<int>::min(), rest = 0;
    for (size_t i = 1; i < prices.size(); ++i) {
        int tmp_hold = hold;
        hold = std::max(hold, rest - prices[i]);
        rest = std::max(rest, sell);
        sell = tmp_hold + prices[i];
    }
    return std::max(rest, sell);
}

}  // namespace leetcode::best_time_to_buy_and_sell_stock_with_cooldown
