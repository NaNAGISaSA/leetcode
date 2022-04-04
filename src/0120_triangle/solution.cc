#include <algorithm>

#include "0120_triangle.h"

namespace leetcode::triangle {

int Solution::minimum_total(const std::vector<std::vector<int>>& triangle) {
    std::vector<int> values(triangle.size(), 0);
    // the method is same as problem 0119
    for (int i = 0; i < static_cast<int>(triangle.size()); ++i) {
        values[i] = triangle[i].back() + (i == 0 ? 0 : values[i - 1]);
        for (int j = i - 1; j > 0; --j) {
            values[j] = triangle[i][j] + std::min(values[j], values[j - 1]);
        }
        values[0] = triangle[i].front() + (i == 0 ? 0 : values[0]);
    }
    int minimum = values[0];
    for (size_t i = 1; i < values.size(); ++i) {
        minimum = std::min(minimum, values[i]);
    }
    return minimum;
}

}  // namespace leetcode::triangle
