#ifndef LEETCODE_PATCHING_ARRAY_H_
#define LEETCODE_PATCHING_ARRAY_H_

#include <vector>

namespace leetcode::patching_array {

class Solution {
public:
    static int min_patches(const std::vector<int>& nums, int n);
};

}  // namespace leetcode::patching_array

#endif