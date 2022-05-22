#ifndef _LEETCODE_BEST_TIME_TO_BUY_AND_SELL_STOCK_FOUR_H_
#define _LEETCODE_BEST_TIME_TO_BUY_AND_SELL_STOCK_FOUR_H_

#include <vector>

namespace leetcode::best_time_to_buy_and_sell_stock_four {

class Solution {
public:
    static int max_profit(const std::vector<int>& prices, int k);
};

}  // namespace leetcode::best_time_to_buy_and_sell_stock_four

#endif