#ifndef LEETCODE_COIN_CHANGE_H_
#define LEETCODE_COIN_CHANGE_H_

#include <vector>

namespace leetcode::coin_change {

#define SOLUTION_CLASS_DECLARATION                                   \
    class Solution {                                                 \
    public:                                                          \
        static int coin_change(std::vector<int>& coins, int amount); \
    }

namespace backtrace {
SOLUTION_CLASS_DECLARATION;
}

namespace dp {
SOLUTION_CLASS_DECLARATION;
}

#undef SOLUTION_CLASS_DECLARATION

}  // namespace leetcode::coin_change

#endif