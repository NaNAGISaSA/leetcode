#ifndef _LEETCODE_COMBINATION_SUM_H_
#define _LEETCODE_COMBINATION_SUM_H_

#include <vector>

namespace leetcode::combination_sum {

class Solution {
public:
    static std::vector<std::vector<int>> combination_sum(const std::vector<int>& candidates, int target);
};

}  // namespace leetcode::combination_sum

#endif
