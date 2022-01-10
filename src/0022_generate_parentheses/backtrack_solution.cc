#include "0022_generate_parentheses.h"

namespace leetcode::generate_parentheses::backtrack {

namespace {
void generate(std::vector<std::string>& result, std::string curr, int open, int close, size_t length) {
    if (curr.size() == length) {
        result.push_back(std::move(curr));
        return;
    }
    if (open > 0) {
        generate(result, std::move(curr + "("), open - 1, close + 1, length);
    }
    if (close > 0) {
        generate(result, std::move(curr + ")"), open, close - 1, length);
    }
}
}  // namespace

std::vector<std::string> Solution::generate_parenthesis(int n) {
    std::vector<std::string> result;
    generate(result, "", n, 0, static_cast<size_t>(2 * n));
    return result;
}

}  // namespace leetcode::generate_parentheses::backtrack
