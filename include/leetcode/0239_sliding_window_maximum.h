#ifndef _LEETCODE_SLIDING_WINDOW_MAXIMUM_H_
#define _LEETCODE_SLIDING_WINDOW_MAXIMUM_H_

#include <vector>

namespace leetcode::sliding_window_maximum {

class Solution {
public:
    static std::vector<int> max_sliding_window(std::vector<int>& nums, int k);
};

}  // namespace leetcode::sliding_window_maximum

#endif