#include "0220_contains_duplicate_three.h"

#include <unordered_map>

namespace leetcode::contains_duplicate_three::bucket_sort {

/*
有两点需要注意：
1) 由于abs() <= t，因此为了保证一个桶内元素一定<=t，因此计算桶号的间距为t + 1
2) 由于一个桶内的元素一定<=t，因此不会出现一个桶内有多个元素的情况
*/
bool Solution::contains_nearby_almost_duplicate(const std::vector<int>& nums, int k, int t) {
    // abs(nums[i] - nums[j]) <= t and abs(i - j) <= k
    long min = 0, interval = t + 1L, lt = static_cast<long>(t);
    for (auto& num : nums) {
        min = std::min(min, static_cast<long>(num));
    }
    std::unordered_map<long, long> bucket_map;
    int num_size = static_cast<int>(nums.size());
    for (int i = 0; i < num_size; ++i) {
        if (i > k) {
            bucket_map.erase((nums[i - k - 1] - min) / interval);
        }
        long bucket_num = (nums[i] - min) / interval;
        if (bucket_map.find(bucket_num) != bucket_map.end() ||
            (bucket_map.find(bucket_num - 1) != bucket_map.end() && nums[i] - bucket_map[bucket_num - 1] <= lt) ||
            (bucket_map.find(bucket_num + 1) != bucket_map.end() && bucket_map[bucket_num + 1] - nums[i] <= lt)) {
            return true;
        }
        bucket_map[bucket_num] = static_cast<long>(nums[i]);
    }
    return false;
}

}  // namespace leetcode::contains_duplicate_three::bucket_sort
