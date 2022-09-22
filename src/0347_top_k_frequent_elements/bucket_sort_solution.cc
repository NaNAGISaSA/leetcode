#include "0347_top_k_frequent_elements.h"

#include <unordered_map>

namespace leetcode::top_k_frequent_elements::bucket_sort {

std::vector<int> Solution::top_k_frequent(const std::vector<int>& nums, int k) {
    std::unordered_map<int, int> count_map;
    for (const auto& num : nums) {
        ++count_map[num];
    }
    std::vector<std::vector<int>> bucket(nums.size() + 1, std::vector<int>{});
    for (auto it = count_map.begin(), end = count_map.end(); it != end; ++it) {
        bucket[it->second].push_back(it->first);
    }
    std::vector<int> result;
    result.reserve(k);
    for (size_t i = bucket.size() - 1; i > 0; --i) {
        if (!bucket[i].empty()) {
            result.insert(result.end(), bucket[i].begin(), bucket[i].end());
            k -= static_cast<int>(bucket[i].size());
            if (k == 0) {
                break;
            }
        }
    }
    return result;
}

}  // namespace leetcode::top_k_frequent_elements::bucket_sort
