#ifndef _LEETCODE_NIM_GAME_H_
#define _LEETCODE_NIM_GAME_H_

namespace leetcode::nim_game {

#define SOLUTION_CLASS_DECLARATION  \
    class Solution {                \
    public:                         \
        static bool can_win(int n); \
    }

namespace dp {
SOLUTION_CLASS_DECLARATION;
}

namespace summary_from_dp {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::nim_game

#endif
