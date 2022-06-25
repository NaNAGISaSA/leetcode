#include "0227_basic_calculator_two.h"

#include <stack>

namespace leetcode::basic_calculator_two::stack {

int Solution::calculate(const std::string& s) {
    char last_op = '+';
    int num = 0;
    size_t idx = 0, s_size = s.size();
    std::stack<int> stack;

    auto add_num_to_stack = [&stack](char last_op, int num) {
        if (last_op == '+') {
            stack.push(num);
        } else if (last_op == '-') {
            stack.push(-1 * num);
        } else if (last_op == '*') {
            stack.top() *= num;
        } else {
            stack.top() /= num;
        }
    };

    while (idx < s_size) {
        if (s[idx] >= '0' && s[idx] <= '9') {
            num = 10 * num + (s[idx] - '0');
        } else if (s[idx] != ' ') {
            add_num_to_stack(last_op, num);
            num = 0;
            last_op = s[idx];
        }
        ++idx;
    }

    add_num_to_stack(last_op, num);
    num = 0;
    while (!stack.empty()) {
        num += stack.top();
        stack.pop();
    }
    return num;
}

}  // namespace leetcode::basic_calculator_two::stack
