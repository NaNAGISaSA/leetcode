#include "0327_count_of_range_sum.h"

namespace leetcode::count_of_range_sum::faster_merge {

namespace {
int merge(std::vector<long>& sum,
          size_t begin,
          size_t mid,
          size_t end,
          std::vector<long>& tmp,
          long lower,
          long upper) {
    int result = 0;
    size_t tmp_idx = begin, sum_right_idx = mid + 1;
    size_t left = mid + 1, right = mid + 1;
    for (size_t idx = begin; idx <= mid; ++idx) {
        // calculate result
        while (left <= end && sum[left] - sum[idx] < lower) {
            ++left;
        }
        while (right <= end && sum[right] - sum[idx] <= upper) {
            ++right;
        }
        result += static_cast<int>(right - left);
        // sort sum using tmp
        while (sum_right_idx <= end && sum[sum_right_idx] <= sum[idx]) {
            tmp[tmp_idx++] = sum[sum_right_idx++];
        }
        tmp[tmp_idx++] = sum[idx];
    }
    while (sum_right_idx <= end) {
        tmp[tmp_idx++] = sum[sum_right_idx++];
    }
    if (begin != 0 || end != sum.size() - 1) {
        while (begin <= end) {
            sum[begin] = tmp[begin];
            ++begin;
        }
    }
    return result;
}

int merge_sort(std::vector<long>& sum, size_t begin, size_t end, std::vector<long>& tmp, long lower, long upper) {
    if (begin == end) {
        return 0;
    }
    size_t mid = begin + (end - begin) / 2;
    return merge_sort(sum, begin, mid, tmp, lower, upper) + merge_sort(sum, mid + 1, end, tmp, lower, upper) +
           merge(sum, begin, mid, end, tmp, lower, upper);
}
}  // namespace

int Solution::count_range_sum(const std::vector<int>& nums, int lower, int upper) {
    size_t nums_size = nums.size();
    std::vector<long> sum(nums_size + 1, 0), tmp(nums_size + 1, 0);
    for (size_t i = 0; i < nums_size; ++i) {
        sum[i + 1] = sum[i] + nums[i];
    }
    return merge_sort(sum, 0, nums_size, tmp, lower, upper);
}

}  // namespace leetcode::count_of_range_sum::faster_merge
