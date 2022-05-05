#ifndef _LEETCODE_EVALUATE_REVERSE_POLISH_NOTATION_H_
#define _LEETCODE_EVALUATE_REVERSE_POLISH_NOTATION_H_

#include <string>
#include <vector>

namespace leetcode::evaluate_reverse_polish_notation {

class Solution {
public:
    static int eval_rpn(const std::vector<std::string>& tokens);
};

}  // namespace leetcode::evaluate_reverse_polish_notation

#endif