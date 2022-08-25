#include "0324_wiggle_sort_two.h"

#include <algorithm>

namespace leetcode::wiggle_sort_two {

/*
 * 算法思路：首先找到数组中的中位数（使用quick select可以做到平均O(N)的时间复杂度），
 *   随后对数组中的数进行重新调整，其基本规则可如下所示：
 * 1）大于中位数的数从左向右依次放置，从第一个奇数index开始；
 * 2）小于中位数的数从右向左依次放置，从最后一个偶数index开始。
 *
 * TODO：本题可以in-place做到空间复杂度O(1)。
 */
void Solution::wiggle_sort(std::vector<int>& nums) {
    size_t nums_size = nums.size();
    auto median_iter = nums.begin() + nums_size / 2;
    std::nth_element(nums.begin(), median_iter, nums.end());
    int median = *median_iter;

    std::vector<int> tmp(nums_size, 0);
    size_t large_idx = 1, small_idx = nums_size % 2 == 0 ? nums_size - 2 : nums_size - 1;
    for (const auto& num : nums) {
        if (num > median) {
            tmp[large_idx] = num;
            large_idx += 2;
        } else if (num < median) {
            tmp[small_idx] = num;
            small_idx -= 2;
        }
    }
    // consider this input: [1 1 2 2 2 3]
    while (large_idx < nums_size) {
        tmp[large_idx] = median;
        large_idx += 2;
    }
    while (small_idx < nums_size) {
        tmp[small_idx] = median;
        small_idx -= 2;
    }
    nums = std::move(tmp);
}

}  // namespace leetcode::wiggle_sort_two
