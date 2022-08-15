#ifndef LEETCODE_COUNT_OF_SMALLER_NUMBERS_AFTER_SELF_H_
#define LEETCODE_COUNT_OF_SMALLER_NUMBERS_AFTER_SELF_H_

#include <vector>

namespace leetcode::count_of_smaller_numbers_after_self {

class Solution {
public:
    static std::vector<int> count_smaller(const std::vector<int>& nums);
};

}  // namespace leetcode::count_of_smaller_numbers_after_self

#endif