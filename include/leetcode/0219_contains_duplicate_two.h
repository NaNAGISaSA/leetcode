#ifndef _LEETCODE_CONTAINS_DUPLICATE_TWO_H_
#define _LEETCODE_CONTAINS_DUPLICATE_TWO_H_

#include <vector>

namespace leetcode::contains_duplicate_two {

class Solution {
public:
    static bool contains_nearby_duplicate(const std::vector<int>& nums, int k);
};

}  // namespace leetcode::contains_duplicate_two

#endif
