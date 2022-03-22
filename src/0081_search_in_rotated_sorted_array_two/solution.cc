#include "0081_search_in_rotated_sorted_array_two.h"

namespace leetcode::search_in_rotated_sorted_array_two {

bool Solution::search(const std::vector<int>& nums, int target) {
    auto binary_search = [&nums, &target](int left, int right) {
        int middle = 0;
        while (left <= right) {
            middle = left + (right - left) / 2;
            if (nums[middle] == target) {
                return true;
            } else if (nums[middle] < target) {
                left = middle + 1;
            } else {
                right = middle - 1;
            }
        }
        return false;
    };

    int left = 0, right = static_cast<int>(nums.size()) - 1;
    int middle = 0;
    while (left <= right) {
        middle = left + (right - left) / 2;
        if (nums[middle] == target) {
            return true;
        }
        if (nums[left] < nums[right]) {
            return binary_search(left, right);
        }
        if (nums[left] > nums[middle]) {
            if (nums[middle] < target && nums[right] >= target) {
                return binary_search(middle, right);
            } else {
                right = middle - 1;
                continue;
            }
        }
        if (nums[middle] > nums[right]) {
            if (nums[left] <= target && nums[middle] > target) {
                return binary_search(left, middle);
            } else {
                left = middle + 1;
                continue;
            }
        }
        // nums[left] >= nums[right]
        // nums[left] <= nums[middle] <= nums[right]
        while (left <= middle) {
            if (nums[left] == nums[middle]) {
                ++left;
            } else if (nums[left] < nums[middle]) {
                return binary_search(left, right);
            } else {
                break;
            }
        }
    }
    return false;
}

}  // namespace leetcode::search_in_rotated_sorted_array_two
