#include "0088_merge_sorted_array.h"

namespace leetcode::merge_sorted_array {

void Solution::merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
    int index = m + n - 1;
    --m;
    --n;
    while (m >= 0 && n >= 0) {
        if (nums1[m] > nums2[n]) {
            nums1[index--] = nums1[m--];
        } else {
            nums1[index--] = nums2[n--];
        }
    }
    while (n >= 0) {
        nums1[index--] = nums2[n--];
    }
}

}  // namespace leetcode::merge_sorted_array
