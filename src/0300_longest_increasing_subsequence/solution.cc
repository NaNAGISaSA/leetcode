#include "0300_longest_increasing_subsequence.h"

namespace leetcode::longest_increasing_subsequence {

/*
 * 1) 算法详解
 * https://www.geeksforgeeks.org/longest-monotonically-increasing-subsequence-size-n-log-n/
 *
 * 2) 核心思想
 * 假设在循环到第k个元素时，我们维护了5个LIS，则目前的5个LIS一定是最贪婪的，即在已经搜索过的子序列中，
 * 找不到任何一个长度为1至5的LIS，其结尾的元素比当前对应维护的LIS要小。
 *
 * 3) 一次循环示例
 * current number = 2
 * LIS list before  |  LIS list after
 * 0                   0
 * 0 1                 0 1
 * 3 5 6               0 1 2
 * 3 5 6 8             3 5 6 8
 */
int Solution::length_of_lis(const std::vector<int>& nums) {
    std::vector<int> lis;
    lis.reserve(nums.size());
    lis.push_back(nums.front());
    int lis_size = 1;

    auto binary_search = [&lis](int num, int end) {
        int begin = 0, middle = 0;
        while (begin <= end) {
            middle = begin + (end - begin) / 2;
            if (num == lis[middle]) {
                return middle;
            } else if (num < lis[middle]) {
                end = middle - 1;
            } else {
                begin = middle + 1;
            }
        }
        return begin;
    };

    for (size_t i = 1; i < nums.size(); ++i) {
        int curr_num = nums[i];
        int idx = binary_search(curr_num, lis_size - 1);
        if (idx == lis_size) {
            lis.push_back(curr_num);
            ++lis_size;
        } else {
            lis[idx] = curr_num;
        }
    }
    return lis_size;
}

}  // namespace leetcode::longest_increasing_subsequence
