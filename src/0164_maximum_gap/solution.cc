#include "0164_maximum_gap.h"

namespace leetcode::maximum_gap {

int Solution::maximum_gap(const std::vector<int>& nums) {
    size_t num_size = nums.size();
    if (num_size == 1) {
        return 0;
    }
    int max_num = nums[0], min_num = nums[0];
    for (auto& num : nums) {
        max_num = std::max(max_num, num);
        min_num = std::min(min_num, num);
    }
    if (max_num == min_num) {
        return 0;
    }
    std::vector<int> bucket_max_num(num_size + 1, min_num);
    std::vector<int> bucket_min_num(num_size + 1, max_num);
    std::vector<bool> bucket_has_num(num_size + 1, false);
    for (auto& num : nums) {
        size_t bucket_num = (num - min_num) * num_size / (max_num - min_num);
        bucket_max_num[bucket_num] = std::max(bucket_max_num[bucket_num], num);
        bucket_min_num[bucket_num] = std::min(bucket_min_num[bucket_num], num);
        bucket_has_num[bucket_num] = true;
    }
    int max_gap = 0, last_max = bucket_max_num[0];
    for (size_t i = 1; i <= num_size; ++i) {
        if (bucket_has_num[i]) {
            max_gap = std::max(max_gap, bucket_min_num[i] - last_max);
            last_max = bucket_max_num[i];
        }
    }
    return max_gap;
}

}  // namespace leetcode::maximum_gap
