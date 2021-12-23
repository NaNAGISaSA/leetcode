#include <unordered_map>

#include "0001_two_sum.h"

namespace leetcode::two_sum::hashmap {

std::vector<int> Solution::two_sum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> map;
    for (size_t i = 0; i < nums.size(); ++i) {
        if (map.find(target - nums[i]) != map.end()) {
            return {static_cast<int>(i), map[target - nums[i]]};
        }
        map.insert({nums[i], static_cast<int>(i)});
    }
    return {};
}

}  // namespace leetcode::two_sum::hashmap