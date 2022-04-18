#ifndef _LEETCODE_BEST_TIME_TO_BUY_AND_SELL_STOCK_THREE_H_
#define _LEETCODE_BEST_TIME_TO_BUY_AND_SELL_STOCK_THREE_H_

#include <vector>

namespace leetcode::best_time_to_buy_and_sell_stock_three {

#define SOLUTION_CLASS_DECLARATION                             \
    class Solution {                                           \
    public:                                                    \
        static int max_profit(const std::vector<int>& prices); \
    }

namespace first_dp {
SOLUTION_CLASS_DECLARATION;
}

namespace faster_dp {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::best_time_to_buy_and_sell_stock_three

#endif