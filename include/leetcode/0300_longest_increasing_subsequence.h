#ifndef LEETCODE_LONGEST_INCREASING_SUBSEQUENCE_H_
#define LEETCODE_LONGEST_INCREASING_SUBSEQUENCE_H_

#include <vector>

namespace leetcode::longest_increasing_subsequence {

class Solution {
public:
    static int length_of_lis(const std::vector<int>& nums);
};

}  // namespace leetcode::longest_increasing_subsequence

#endif
