#include <stack>

#include "0150_evaluate_reverse_polish_notation.h"

namespace leetcode::evaluate_reverse_polish_notation {

int Solution::eval_rpn(const std::vector<std::string>& tokens) {
    std::stack<int> stack;
    size_t idx = 0;
    while (idx < tokens.size()) {
        if (tokens[idx] != "+" && tokens[idx] != "-" && tokens[idx] != "*" && tokens[idx] != "/") {
            stack.push(std::stoi(tokens[idx++]));
        } else {
            int num2 = stack.top();
            stack.pop();
            int num1 = stack.top();
            stack.pop();
            if (tokens[idx] == "+") {
                stack.push(num1 + num2);
            } else if (tokens[idx] == "-") {
                stack.push(num1 - num2);
            } else if (tokens[idx] == "*") {
                stack.push(num1 * num2);
            } else {
                stack.push(num1 / num2);
            }
            ++idx;
        }
    }
    return stack.top();
}

}  // namespace leetcode::evaluate_reverse_polish_notation
