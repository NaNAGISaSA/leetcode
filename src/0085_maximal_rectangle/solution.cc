#include <algorithm>
#include <stack>

#include "0085_maximal_rectangle.h"

namespace leetcode::maximal_rectangle {

int Solution::maximal_rectangle(const std::vector<std::vector<char>>& matrix) {
    auto cal_max_region = [](const std::vector<int>& heights) {
        std::stack<int> mono_stack;
        int max_region = 0, heights_len = static_cast<int>(heights.size());
        for (int i = 0; i < heights_len; ++i) {
            while (!mono_stack.empty() && heights[mono_stack.top()] >= heights[i]) {
                int idx = mono_stack.top();
                mono_stack.pop();
                int length = mono_stack.empty() ? i : i - mono_stack.top() - 1;
                max_region = std::max(length * heights[idx], max_region);
            }
            mono_stack.push(i);
        }
        while (!mono_stack.empty()) {
            int idx = mono_stack.top();
            mono_stack.pop();
            int length = mono_stack.empty() ? heights_len : heights_len - mono_stack.top() - 1;
            max_region = std::max(length * heights[idx], max_region);
        }
        return max_region;
    };

    int result = 0;
    std::vector<int> acc_height(matrix[0].size(), 0);
    for (size_t i = 0; i < matrix.size(); ++i) {
        for (size_t j = 0; j < matrix[0].size(); ++j) {
            acc_height[j] = matrix[i][j] == '0' ? 0 : acc_height[j] + 1;
        }
        result = std::max(result, cal_max_region(acc_height));
    }
    return result;
}

}  // namespace leetcode::maximal_rectangle
