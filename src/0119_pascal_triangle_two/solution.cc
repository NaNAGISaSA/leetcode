#include "0119_pascal_triangle_two.h"

namespace leetcode::pascal_triangle_two {

std::vector<int> Solution::get_row(int row_index) {
    std::vector<int> res(row_index + 1, 1);
    for (int i = 0; i <= row_index; ++i) {
        for (int j = i - 1; j >= 1; --j) {
            res[j] += res[j - 1];
        }
    }
    return res;
}

}  // namespace leetcode::pascal_triangle_two
