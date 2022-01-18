#include "0031_next_permutation.h"

namespace leetcode::next_permutation {

namespace {
void reverse_vector(std::vector<int>& nums, int begin, int end) {
    while (begin < end) {
        std::swap(nums[begin++], nums[end--]);
    }
}
}  // namespace

void Solution::next_permutation(std::vector<int>& nums) {
    if (nums.size() < 2) {
        return;
    }
    int first_smaller_index = -1, index = static_cast<int>(nums.size() - 2);
    while (index >= 0) {
        if (nums[index] < nums[index + 1]) {
            first_smaller_index = index;
            break;
        }
        --index;
    }
    if (first_smaller_index == -1) {
        // faster for {1, 1, 1, 1} case
        if (nums[0] == nums[nums.size() - 1]) {
            return;
        }
        reverse_vector(nums, 0, static_cast<int>(nums.size() - 1));
        return;
    }
    // faster for {1, 2} and {1, 2, 2, 2} case
    if (nums[first_smaller_index + 1] == nums[nums.size() - 1]) {
        std::swap(nums[first_smaller_index], nums[first_smaller_index + 1]);
        return;
    }
    index = static_cast<int>(nums.size() - 1);
    while (index != first_smaller_index) {
        if (nums[index] > nums[first_smaller_index]) {
            break;
        }
        --index;
    }
    std::swap(nums[first_smaller_index], nums[index]);
    reverse_vector(nums, first_smaller_index + 1, static_cast<int>(nums.size() - 1));
}

}  // namespace leetcode::next_permutation
