#include <stack>

#include "0020_valid_parentheses.h"

namespace leetcode::valid_parentheses {

bool Solution::is_valid(const std::string& s) {
    std::stack<char> parentheses_stack;
    for (const auto& chr : s) {
        if (chr == '(') {
            parentheses_stack.push(')');
        } else if (chr == '[') {
            parentheses_stack.push(']');
        } else if (chr == '{') {
            parentheses_stack.push('}');
        } else {
            if (parentheses_stack.size() == 0) {
                return false;
            }
            char top = parentheses_stack.top();
            parentheses_stack.pop();
            if (top != chr) {
                return false;
            }
        }
    }
    return parentheses_stack.size() == 0;
}

}  // namespace leetcode::valid_parentheses
