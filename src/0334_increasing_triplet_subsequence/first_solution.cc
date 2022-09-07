#include "0334_increasing_triplet_subsequence.h"

namespace leetcode::increasing_triplet_subsequence::first {

bool Solution::increasing_triplet(const std::vector<int>& nums) {
    int idx1 = -1, idx2 = -1;
    int nums_size = static_cast<int>(nums.size());
    for (int i = 0; i < nums_size; ++i) {
        if (idx1 == -1) {
            idx1 = i;
        } else if (idx2 == -1) {
            if (nums[i] > nums[idx1]) {
                idx2 = i;
            } else {
                idx1 = i;
            }
        } else {
            if (nums[i] <= nums[idx1]) {
                idx1 = i;
            } else if (nums[i] <= nums[idx2]) {
                idx2 = i;
            } else {
                return true;
            }
        }
    }
    return false;
}

}  // namespace leetcode::increasing_triplet_subsequence::first
