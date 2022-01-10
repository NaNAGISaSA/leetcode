#include "0022_generate_parentheses.h"

namespace leetcode::generate_parentheses::first {

namespace {
std::vector<std::string> generate(int total, int prefix) {
    if (total == 0) {
        return {std::string(prefix, ')')};
    }
    std::vector<std::string> result;
    for (auto& str : generate(total - 1, prefix + 1)) {
        result.push_back(std::string(1, '(') + std::move(str));
    }
    if (prefix != 0) {
        for (auto& str : generate(total, prefix - 1)) {
            result.push_back(std::string(1, ')') + std::move(str));
        }
    }
    return result;
}
}  // namespace

std::vector<std::string> Solution::generate_parenthesis(int n) {
    // 1 <= n <= 8
    return generate(n, 0);
}

}  // namespace leetcode::generate_parentheses::first
