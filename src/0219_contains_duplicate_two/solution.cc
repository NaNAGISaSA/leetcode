#include "0219_contains_duplicate_two.h"

#include <unordered_map>

namespace leetcode::contains_duplicate_two {

bool Solution::contains_nearby_duplicate(const std::vector<int>& nums, int k) {
    std::unordered_map<int, int> idx_map;
    int num_size = static_cast<int>(nums.size());
    for (int i = 0; i < num_size; ++i) {
        if (idx_map.find(nums[i]) != idx_map.end() && i - idx_map[nums[i]] <= k) {
            return true;
        }
        idx_map[nums[i]] = i;
    }
    return false;
}

}  // namespace leetcode::contains_duplicate_two
