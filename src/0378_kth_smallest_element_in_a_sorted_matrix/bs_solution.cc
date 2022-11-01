#include "0378_kth_smallest_element_in_a_sorted_matrix.h"

namespace leetcode::kth_smallest_element_in_a_sorted_matrix::bs {

int Solution::kth_smallest(const std::vector<std::vector<int>>& matrix, int k) {
    auto count_less_equal_num = [&matrix](int num, int size) {
        int count = 0, col = size - 1;
        for (int row = 0; row < size; ++row) {
            while (col >= 0 && matrix[row][col] > num)
                --col;
            count += col + 1;
        }
        return count;
    };

    int begin = matrix.front().front(), end = matrix.back().back(), middle = 0;
    int size = static_cast<int>(matrix.size()), result = 0;
    while (begin <= end) {
        middle = begin + (end - begin) / 2;
        if (count_less_equal_num(middle, size) >= k) {
            end = middle - 1;
            result = middle;
        } else {
            begin = middle + 1;
        }
    }

    return result;
}

}  // namespace leetcode::kth_smallest_element_in_a_sorted_matrix::bs
