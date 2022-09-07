#include "0334_increasing_triplet_subsequence.h"

#include <limits>

namespace leetcode::increasing_triplet_subsequence::cleaner {

bool Solution::increasing_triplet(const std::vector<int>& nums) {
    int num1 = std::numeric_limits<int>::max(), num2 = num1;
    for (const auto& num : nums) {
        if (num <= num1) {
            num1 = num;
        } else if (num <= num2) {
            num2 = num;
        } else {
            return true;
        }
    }
    return false;
}

}  // namespace leetcode::increasing_triplet_subsequence::cleaner
