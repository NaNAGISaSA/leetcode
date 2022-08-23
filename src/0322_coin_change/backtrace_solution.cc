#include "0322_coin_change.h"

#include <algorithm>
#include <unordered_map>

namespace leetcode::coin_change::backtrace {

namespace {
void backtrace(const std::vector<int>& coins, std::unordered_map<int, int>& map, int amount, int change_num) {
    for (const auto& coin : coins) {
        int tmp = amount - coin;
        if (tmp < 0) {
            continue;
        }
        if (map.find(tmp) == map.end() || map[tmp] > change_num) {
            map[tmp] = change_num;
            backtrace(coins, map, tmp, change_num + 1);
        }
    }
}
}  // namespace

int Solution::coin_change(std::vector<int>& coins, int amount) {
    if (amount == 0) {
        return 0;
    }
    std::unordered_map<int, int> map;
    std::sort(coins.begin(), coins.end(), std::greater<int>());
    backtrace(coins, map, amount, 1);
    return map.find(0) == map.end() ? -1 : map[0];
}

}  // namespace leetcode::coin_change::backtrace
