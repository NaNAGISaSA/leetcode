#include "0386_lexicographical_numbers.h"

namespace leetcode::lexicographical_numbers {

namespace {
void dfs(int num, int n, std::vector<int>& result) {
    if (num > n) {
        return;
    }
    result.push_back(num);
    for (int i = 0; i < 10; ++i) {
        dfs(10 * num + i, n, result);
    }
}
}  // namespace

std::vector<int> Solution::lexical_order(int n) {
    std::vector<int> result;
    result.reserve(n);
    for (int i = 1; i < 10; ++i) {
        dfs(i, n, result);
    }
    return result;
}

}  // namespace leetcode::lexicographical_numbers
