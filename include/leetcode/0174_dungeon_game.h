#ifndef _LEETCODE_DUNGEON_GAME_H_
#define _LEETCODE_DUNGEON_GAME_H_

#include <vector>

namespace leetcode::dungeon_game {

class Solution {
public:
    static int calculate_minimum_hp(const std::vector<std::vector<int>>& dungeon);
};

}  // namespace leetcode::dungeon_game

#endif