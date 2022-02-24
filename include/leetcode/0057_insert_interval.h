#ifndef _LEETCODE_INSERT_INTERVALS_H_
#define _LEETCODE_INSERT_INTERVALS_H_

#include <vector>

namespace leetcode::insert_intervals {

class Solution {
public:
    static std::vector<std::vector<int>> insert(std::vector<std::vector<int>>& intervals,
                                                std::vector<int>& new_interval);
};

}  // namespace leetcode::insert_intervals

#endif