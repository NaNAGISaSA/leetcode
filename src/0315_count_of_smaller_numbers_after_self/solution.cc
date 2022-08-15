#include "0315_count_of_smaller_numbers_after_self.h"

namespace leetcode::count_of_smaller_numbers_after_self {

namespace {
void merge(std::vector<size_t>& idx_vec,
           std::vector<int>& count_vec,
           const std::vector<int>& nums,
           size_t begin,
           size_t mid,
           size_t end) {
    size_t front_size = mid - begin + 1, back_size = end - mid;
    std::vector<size_t> cp_front(front_size, 0), cp_back(back_size, 0);
    for (size_t i = 0; i < front_size; ++i) {
        cp_front[i] = idx_vec[begin + i];
    }
    for (size_t i = 0; i < back_size; ++i) {
        cp_back[i] = idx_vec[mid + 1 + i];
    }
    size_t idx_front = 0, idx_back = 0;
    while (idx_front < front_size && idx_back < back_size) {
        if (nums[cp_front[idx_front]] > nums[cp_back[idx_back]]) {
            idx_vec[begin++] = cp_back[idx_back++];
        } else {
            count_vec[cp_front[idx_front]] += static_cast<int>(idx_back);
            idx_vec[begin++] = cp_front[idx_front++];
        }
    }
    while (idx_front < front_size) {
        count_vec[cp_front[idx_front]] += static_cast<int>(back_size);
        idx_vec[begin++] = cp_front[idx_front++];
    }
    while (idx_back < back_size) {
        idx_vec[begin++] = cp_back[idx_back++];
    }
}

void merge_sort(std::vector<size_t>& idx_vec,
                std::vector<int>& count_vec,
                const std::vector<int>& nums,
                size_t begin,
                size_t end) {
    if (begin == end) {
        return;
    }
    size_t mid = begin + (end - begin) / 2;
    merge_sort(idx_vec, count_vec, nums, begin, mid);
    merge_sort(idx_vec, count_vec, nums, mid + 1, end);
    merge(idx_vec, count_vec, nums, begin, mid, end);
}
}  // namespace

std::vector<int> Solution::count_smaller(const std::vector<int>& nums) {
    size_t nums_size = nums.size();
    std::vector<size_t> idx_vec(nums_size, 0);
    std::vector<int> count_vec(nums_size, 0);
    for (size_t i = 0; i < nums_size; ++i) {
        idx_vec[i] = i;
    }
    merge_sort(idx_vec, count_vec, nums, 0, nums_size - 1);
    return count_vec;
}

}  // namespace leetcode::count_of_smaller_numbers_after_self
