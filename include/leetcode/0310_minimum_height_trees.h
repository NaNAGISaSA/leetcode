#ifndef LEETCODE_MINIMUM_HEIGHT_TREES_H_
#define LEETCODE_MINIMUM_HEIGHT_TREES_H_

#include <vector>

namespace leetcode::minimum_height_trees {

class Solution {
public:
    static std::vector<int> find_min_height_trees(int n, const std::vector<std::vector<int>>& edges);
};

}  // namespace leetcode::minimum_height_trees

#endif