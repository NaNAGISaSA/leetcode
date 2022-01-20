#include <algorithm>
#include <stack>

#include "0032_longest_valid_parentheses.h"

namespace leetcode::longest_valid_parentheses::stack {

int Solution::longest_valid_parentheses(const std::string& s) {
    if (s.size() < 2) {
        return 0;
    }
    std::stack<int> parentheses_stack;
    int max_valid = 0;
    for (int i = 0; i < static_cast<int>(s.size()); ++i) {
        if (s[i] == ')' && !parentheses_stack.empty() && s[parentheses_stack.top()] == '(') {
            parentheses_stack.pop();
            if (parentheses_stack.empty()) {
                max_valid = i + 1;
            } else {
                max_valid = std::max(max_valid, i - parentheses_stack.top());
            }
        } else {
            parentheses_stack.push(i);
        }
    }
    return max_valid;
}

}  // namespace leetcode::longest_valid_parentheses::stack
