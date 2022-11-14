#include "0388_longest_absolute_file_path.h"

#include <stack>

namespace leetcode::longest_absolute_file_path::stack {

int Solution::length_longest_path(const std::string& input) {
    std::stack<size_t> stack;
    size_t idx = 0, curr = 0, length = 0, depth = 0;
    size_t result = 0, in_size = input.size();
    bool is_file = false;
    while (idx < in_size) {
        depth = 0;
        while (input[idx] == '\t') {
            ++idx;
            ++depth;
        }
        while (stack.size() > depth) {
            length -= stack.top();
            stack.pop();
        }
        curr = idx;
        is_file = false;
        while (curr < in_size && input[curr] != '\n') {
            if (input[curr++] == '.') {
                is_file = true;
            }
        }
        stack.push(curr - idx);
        length += curr - idx;
        if (is_file) {
            result = std::max(result, length + stack.size() - 1);
        }
        idx = curr;
        ++idx;
    }
    return static_cast<int>(result);
}

}  // namespace leetcode::longest_absolute_file_path::stack
