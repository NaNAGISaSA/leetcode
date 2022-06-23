#include "0224_basic_calculator.h"

#include <stack>

namespace leetcode::basic_calculator::stack {

int Solution::calculate(const std::string& s) {
    // NOTE: op only contains + and -
    std::stack<int> stack;
    int result = 0, sign = 1, num = 0;
    size_t idx = 0, s_size = s.size();
    while (idx < s_size) {
        if (s[idx] >= '0' && s[idx] <= '9') {
            num = 10 * num + (s[idx] - '0');
        } else if (s[idx] == '+') {
            result += sign * num;
            sign = 1;
            num = 0;
        } else if (s[idx] == '-') {
            result += sign * num;
            sign = -1;
            num = 0;
        } else if (s[idx] == '(') {
            stack.push(result);
            stack.push(sign);
            result = 0;
            sign = 1;
        } else if (s[idx] == ')') {
            result += sign * num;
            result *= stack.top();
            stack.pop();
            result += stack.top();
            stack.pop();
            num = 0;
        }
        ++idx;
    }
    result += sign * num;
    return result;
}

}  // namespace leetcode::basic_calculator::stack
