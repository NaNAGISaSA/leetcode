#include "0347_top_k_frequent_elements.h"

#include <unordered_map>

namespace leetcode::top_k_frequent_elements::bucket_sort {

std::vector<int> Solution::top_k_frequent(const std::vector<int>& nums, int k) {
    std::unordered_map<int, int> count_map;
    for (const auto& num : nums) {
        ++count_map[num];
    }
    std::vector<int> bucket(nums.size() + 1, 0);

    std::vector<int> result;
    result.reserve(k);

    return result;
}

}  // namespace leetcode::top_k_frequent_elements::bucket_sort
