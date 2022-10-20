#include "0373_find_k_pairs_with_smallest_sums.h"

#include <queue>

#include "utils.h"

namespace leetcode::find_k_pairs_with_smallest_sums::cleaner {

std::vector<std::vector<int>> Solution::k_smallest_pairs(const std::vector<int>& nums1,
                                                         const std::vector<int>& nums2,
                                                         int k) {
    std::priority_queue<Node> min_heap;
    for (size_t i = 0, end = nums1.size(); i < end; ++i) {
        min_heap.push(Node(i, 0, nums1[i] + nums2[0]));
    }

    std::vector<std::vector<int>> result;
    while (k > 0 && !min_heap.empty()) {
        Node top(std::move(min_heap.top()));
        min_heap.pop();
        result.push_back({nums1[top.idx1], nums2[top.idx2]});
        if (++top.idx2 < nums2.size()) {
            min_heap.push(Node(top.idx1, top.idx2, nums1[top.idx1] + nums2[top.idx2]));
        }
        --k;
    }
    return result;
}

}  // namespace leetcode::find_k_pairs_with_smallest_sums::cleaner
