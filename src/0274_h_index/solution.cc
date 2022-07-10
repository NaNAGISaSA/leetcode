#include "0274_h_index.h"

namespace leetcode::h_index {

int Solution::h_index(const std::vector<int>& citations) {
    int paper_size = static_cast<int>(citations.size());
    std::vector<int> count(paper_size + 1, 0);
    for (const auto& citation : citations) {
        if (citation >= paper_size) {
            ++count.back();
        } else {
            ++count[citation];
        }
    }
    int h_index = 0, current_paper_num = 0;
    for (int h_idx = paper_size; h_idx > 0; --h_idx) {
        current_paper_num += count[h_idx];
        if (current_paper_num >= h_idx) {
            h_index = h_idx;
            break;
        }
    }
    return h_index;
}

}  // namespace leetcode::h_index
