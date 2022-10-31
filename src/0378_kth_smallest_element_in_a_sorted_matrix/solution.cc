#include "0378_kth_smallest_element_in_a_sorted_matrix.h"

#include <queue>

namespace leetcode::kth_smallest_element_in_a_sorted_matrix {

int Solution::kth_smallest(const std::vector<std::vector<int>>& matrix, int k) {
    auto cmp = [&matrix](const std::pair<size_t, size_t>& p1, const std::pair<size_t, size_t>& p2) {
        return matrix[p1.first][p1.second] > matrix[p2.first][p2.second];
    };
    std::priority_queue<std::pair<size_t, size_t>, std::vector<std::pair<size_t, size_t>>, decltype(cmp)> min_heap(cmp);
    size_t n = matrix.size();
    for (size_t i = 0; i < n; ++i) {
        min_heap.push({i, 0});
    }
    int result = 0;
    while (k-- > 0) {
        auto top = min_heap.top();
        min_heap.pop();
        result = matrix[top.first][top.second];
        if (++top.second != n) {
            min_heap.push(std::move(top));
        }
    }
    return result;
}

}  // namespace leetcode::kth_smallest_element_in_a_sorted_matrix
