#ifndef _LEETCODE_EXPRESSION_ADD_OPERATORS_H_
#define _LEETCODE_EXPRESSION_ADD_OPERATORS_H_

#include <string>
#include <vector>

namespace leetcode::expression_add_operators {

class Solution {
public:
    static std::vector<std::string> add_operators(const std::string& num, int target);
};

}  // namespace leetcode::expression_add_operators

#endif
