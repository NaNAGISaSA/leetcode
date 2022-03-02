#ifndef _LEETCODE_UNIQUE_PATHS_TWO_H_
#define _LEETCODE_UNIQUE_PATHS_TWO_H_

#include <vector>

namespace leetcode::unique_paths_two {

class Solution {
public:
    static int unique_paths_with_obstacles(const std::vector<std::vector<int>>& obstacle_grid);
};

}  // namespace leetcode::unique_paths_two

#endif