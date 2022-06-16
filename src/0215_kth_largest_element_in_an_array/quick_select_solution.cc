#include "0215_kth_largest_element_in_an_array.h"

namespace leetcode::kth_largest_element_in_an_array::quick_select {

namespace {
int quick_select(std::vector<int>& nums, int begin, int end, int k) {
    int pivot = begin;
    for (int i = begin; i < end; ++i) {
        if (nums[i] < nums[end]) {
            std::swap(nums[i], nums[pivot++]);
        }
    }
    std::swap(nums[pivot], nums[end]);
    int ge_num = end - pivot + 1;
    if (ge_num == k) {
        return nums[pivot];
    } else if (ge_num > k) {
        return quick_select(nums, pivot + 1, end, k);
    } else {
        return quick_select(nums, begin, pivot - 1, k - ge_num);
    }
}
}  // namespace

int Solution::find_kth_largest(std::vector<int>& nums, int k) {
    return quick_select(nums, 0, static_cast<int>(nums.size() - 1), k);
}

}  // namespace leetcode::kth_largest_element_in_an_array::quick_select
