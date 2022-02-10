#ifndef _LEETCODE_PERMUTATIONS_H_
#define _LEETCODE_PERMUTATIONS_H_

#include <vector>

namespace leetcode::permutations {

class Solution {
public:
    static std::vector<std::vector<int>> permute(const std::vector<int>& nums);
};

}  // namespace leetcode::permutations

#endif