#include "0122_best_time_to_buy_and_sell_stock_two.h"

namespace leetcode::best_time_to_buy_and_sell_stock_two {

int Solution::max_profit(const std::vector<int>& prices) {
    int begin = prices[0];
    int result = 0;
    for (auto& price : prices) {
        if (price > begin) {
            result += price - begin;
        }
        begin = price;
    }
    return result;
}

}  // namespace leetcode::best_time_to_buy_and_sell_stock_two
