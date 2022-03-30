#include <algorithm>
#include <stack>

#include "0084_largest_rectangle_in_histogram.h"

namespace leetcode::largest_rectangle_in_histogram {

int Solution::largest_rectangle_area(const std::vector<int>& heights) {
    std::stack<int> mono_stack;
    int max_area = 0;

    auto cal_area = [&heights, &mono_stack](int idx, int right) {
        int length = mono_stack.empty() ? right : right - mono_stack.top() - 1;
        return length * heights[idx];
    };

    for (int i = 0; i < static_cast<int>(heights.size()); ++i) {
        while (!mono_stack.empty() && heights[mono_stack.top()] >= heights[i]) {
            int idx = mono_stack.top();
            mono_stack.pop();
            // Note: 对于相等的情况，这里计算的面积是错误的，但是无所谓，因为即将加入栈的值的面积计算是
            //   正确的，且该面积与pop出的值的正确面积相等
            max_area = std::max(max_area, cal_area(idx, i));
        }
        mono_stack.push(i);
    }

    while (!mono_stack.empty()) {
        int idx = mono_stack.top();
        mono_stack.pop();
        max_area = std::max(max_area, cal_area(idx, static_cast<int>(heights.size())));
    }

    return max_area;
}

}  // namespace leetcode::largest_rectangle_in_histogram
