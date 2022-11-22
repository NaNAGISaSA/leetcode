#include "0394_decode_string.h"

#include <stack>

namespace leetcode::decode_string::stack {

std::string Solution::decode(const std::string& s) {
    size_t idx = 0, s_size = s.size();
    std::stack<std::string> stack;
    int repeat = 0;
    std::string acc;
    while (idx < s_size) {
        if (s[idx] >= 'a' && s[idx] <= 'z') {
            acc.push_back(s[idx]);
        } else if (s[idx] >= '0' && s[idx] <= '9') {
            repeat = 10 * repeat + (s[idx] - '0');
        } else if (s[idx] == '[') {
            stack.push(std::move(acc));
            stack.push(std::to_string(repeat));
            repeat = 0;
        } else {
            int num = std::stoi(stack.top());
            stack.pop();
            std::string tmp = std::move(stack.top());
            stack.pop();
            while (num-- != 0) {
                tmp += acc;
            }
            acc = std::move(tmp);
        }
        ++idx;
    }
    return acc;
}

}  // namespace leetcode::decode_string::stack
