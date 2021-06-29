#ifndef _LEETCODE_TWO_SUM_H_
#define _LEETCODE_TWO_SUM_H_

#include <vector>

namespace leetcode::two_sum {

#define SOLUTION_CLASS_DECLARATION                                    \
    class Solution {                                                  \
    public:                                                           \
        std::vector<int> two_sum(std::vector<int>& nums, int target); \
    }

namespace hashset {
SOLUTION_CLASS_DECLARATION;
}  // namespace hashset

namespace hashmap {
SOLUTION_CLASS_DECLARATION;
}  // namespace hashmap

}  // namespace leetcode::two_sum

#endif