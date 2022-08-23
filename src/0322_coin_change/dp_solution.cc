#include "0322_coin_change.h"

namespace leetcode::coin_change::dp {

int Solution::coin_change(std::vector<int>& coins, int amount) {
    std::vector<int> dp_vec(amount + 1, amount + 1);
    dp_vec[0] = 0;
    for (const auto& coin : coins) {
        for (int begin = coin; begin <= amount; ++begin) {
            dp_vec[begin] = std::min(dp_vec[begin - coin] + 1, dp_vec[begin]);
        }
    }
    return dp_vec.back() == amount + 1 ? -1 : dp_vec.back();
}

}  // namespace leetcode::coin_change::dp
