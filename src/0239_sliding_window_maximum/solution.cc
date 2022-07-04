#include "0239_sliding_window_maximum.h"

#include <deque>

namespace leetcode::sliding_window_maximum {

std::vector<int> Solution::max_sliding_window(std::vector<int>& nums, int k) {
    if (k == 1) {
        return std::move(nums);
    }

    std::deque<int> window;
    int nums_size = static_cast<int>(nums.size());
    std::vector<int> result;
    result.reserve(nums_size - k + 1);

    for (int idx = 0; idx < nums_size; ++idx) {
        if (!window.empty() && window.front() == idx - k) {
            window.pop_front();
        }
        while (!window.empty() && nums[idx] >= nums[window.back()]) {
            window.pop_back();
        }
        window.push_back(idx);
        if (idx >= k - 1) {
            result.push_back(nums[window.front()]);
        }
    }
    return result;
}

}  // namespace leetcode::sliding_window_maximum
