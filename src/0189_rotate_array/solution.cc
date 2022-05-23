#include "0189_rotate_array.h"

#include <algorithm>

namespace leetcode::rotate_array {

void Solution::rotate(std::vector<int>& nums, int k) {
    k %= static_cast<int>(nums.size());
    std::reverse(nums.begin(), nums.end());
    std::reverse(nums.begin(), nums.begin() + k);
    std::reverse(nums.begin() + k, nums.end());
}

}  // namespace leetcode::rotate_array
