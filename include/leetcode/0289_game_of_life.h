#ifndef _LEETCODE_GAME_OF_LIFE_H_
#define _LEETCODE_GAME_OF_LIFE_H_

#include <vector>

namespace leetcode::game_of_life {

#define SOLUTION_CLASS_DECLARATION                                      \
    class Solution {                                                    \
    public:                                                             \
        static void game_of_life(std::vector<std::vector<int>>& board); \
    }

namespace first {
SOLUTION_CLASS_DECLARATION;
}

namespace cleaner {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::game_of_life

#endif
