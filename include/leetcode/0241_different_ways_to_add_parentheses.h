#ifndef _LEETCODE_DIFFERENT_WAYS_TO_ADD_PARENTHESES_H_
#define _LEETCODE_DIFFERENT_WAYS_TO_ADD_PARENTHESES_H_

#include <string>
#include <vector>

namespace leetcode::different_ways_to_add_parentheses {

class Solution {
public:
    static std::vector<int> diff_ways_to_compute(std::string expression);
};

}  // namespace leetcode::different_ways_to_add_parentheses

#endif