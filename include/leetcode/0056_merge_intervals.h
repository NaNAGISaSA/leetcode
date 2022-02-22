#ifndef _LEETCODE_MERGE_INTERVALS_H_
#define _LEETCODE_MERGE_INTERVALS_H_

#include <vector>

namespace leetcode::merge_intervals {

class Solution {
public:
    static std::vector<std::vector<int>> merge(std::vector<std::vector<int>>& intervals);
};

}  // namespace leetcode::merge_intervals

#endif