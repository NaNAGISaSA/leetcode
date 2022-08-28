#include "0327_count_of_range_sum.h"

namespace leetcode::count_of_range_sum {

namespace {
int merge(std::vector<long>& sum, size_t begin, size_t mid, size_t end, long lower, long upper) {
    // step1: calculate result
    size_t left = mid + 1, right = mid + 1;
    int result = 0;
    for (size_t i = begin; i <= mid; ++i) {
        while (left <= end && sum[left] - sum[i] < lower) {
            ++left;
        }
        while (right <= end && sum[right] - sum[i] <= upper) {
            ++right;
        }
        result += static_cast<int>(right - left);
    }
    // step2: sort sum
    std::vector<long> tmp(end - begin + 1, 0);
    for (size_t i = 0, j = begin; j <= end; ++i, ++j) {
        tmp[i] = sum[j];
    }
    size_t left_end = mid - begin, right_end = end - begin;
    left = 0;
    right = left_end + 1;
    while (left <= left_end && right <= right_end) {
        if (tmp[left] < tmp[right]) {
            sum[begin++] = tmp[left++];
        } else {
            sum[begin++] = tmp[right++];
        }
    }
    while (left <= left_end) {
        sum[begin++] = tmp[left++];
    }
    while (right < right_end) {
        sum[begin++] = tmp[right++];
    }
    return result;
}

int merge_sort(std::vector<long>& sum, size_t begin, size_t end, long lower, long upper) {
    if (begin == end) {
        return 0;
    }
    size_t mid = begin + (end - begin) / 2;
    return merge_sort(sum, begin, mid, lower, upper) + merge_sort(sum, mid + 1, end, lower, upper) +
           merge(sum, begin, mid, end, lower, upper);
}
}  // namespace

int Solution::count_range_sum(const std::vector<int>& nums, int lower, int upper) {
    size_t nums_size = nums.size();
    std::vector<long> sum(nums_size + 1, 0);
    for (size_t i = 0; i < nums_size; ++i) {
        sum[i + 1] = sum[i] + nums[i];
    }
    return merge_sort(sum, 0, nums_size, lower, upper);
}

}  // namespace leetcode::count_of_range_sum
