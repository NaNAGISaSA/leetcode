#ifndef _LEETCODE_SUBSETS_H_
#define _LEETCODE_SUBSETS_H_

#include <vector>

namespace leetcode::subsets {

class Solution {
public:
    static std::vector<std::vector<int>> subsets(const std::vector<int>& nums);
};

}  // namespace leetcode::subsets

#endif