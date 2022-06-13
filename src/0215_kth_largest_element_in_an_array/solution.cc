#include "0215_kth_largest_element_in_an_array.h"

#include <queue>

namespace leetcode::kth_largest_element_in_an_array {

int Solution::find_kth_largest(const std::vector<int>& nums, int k) {
    auto cmp = [](int a, int b) { return a > b; };
    std::priority_queue<int, std::vector<int>, decltype(cmp)> min_heap(cmp);
    size_t nums_size = nums.size();
    for (int i = 0; i < k; ++i) {
        min_heap.push(nums[i]);
    }
    for (size_t i = k; i < nums_size; ++i) {
        if (min_heap.top() < nums[i]) {
            min_heap.pop();
            min_heap.push(nums[i]);
        }
    }
    return min_heap.top();
}

}  // namespace leetcode::kth_largest_element_in_an_array
