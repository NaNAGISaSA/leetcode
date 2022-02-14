#include "0048_rotate_image.h"

namespace leetcode::rotate {

void Solution::rotate(std::vector<std::vector<int>>& matrix) {
    int top_left = 0, bottom_right = static_cast<int>(matrix.size()) - 1;
    int tmp = 0;
    while (top_left < bottom_right) {
        for (int i = 0; i < bottom_right - top_left; ++i) {
            tmp = matrix[top_left][top_left + i];
            matrix[top_left][top_left + i] = matrix[bottom_right - i][top_left];
            matrix[bottom_right - i][top_left] = matrix[bottom_right][bottom_right - i];
            matrix[bottom_right][bottom_right - i] = matrix[top_left + i][bottom_right];
            matrix[top_left + i][bottom_right] = tmp;
        }
        ++top_left;
        --bottom_right;
    }
}

}  // namespace leetcode::rotate
