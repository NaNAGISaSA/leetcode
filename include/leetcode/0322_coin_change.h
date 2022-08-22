#ifndef LEETCODE_COIN_CHANGE_H_
#define LEETCODE_COIN_CHANGE_H_

#include <vector>

namespace leetcode::coin_change {

class Solution {
public:
    static int coin_change(std::vector<int>& coins, int amount);
};

}  // namespace leetcode::coin_change

#endif