#include "0373_find_k_pairs_with_smallest_sums.h"

#include <queue>
#include <unordered_map>
#include <unordered_set>

#include "utils.h"

namespace leetcode::find_k_pairs_with_smallest_sums::first {

std::vector<std::vector<int>> Solution::k_smallest_pairs(const std::vector<int>& nums1,
                                                         const std::vector<int>& nums2,
                                                         int k) {
    size_t nums1_size = nums1.size(), nums2_size = nums2.size();

    std::priority_queue<Node> min_heap;
    std::unordered_map<size_t, std::unordered_set<size_t>> map;
    min_heap.push(Node(0, 0, nums1[0] + nums2[0]));
    map.insert({0, {0}});

    std::vector<std::vector<int>> result;
    result.reserve(k);
    while (k > 0 && !min_heap.empty()) {
        Node top(std::move(min_heap.top()));
        min_heap.pop();
        result.push_back({nums1[top.idx1], nums2[top.idx2]});
        size_t next_idx1 = top.idx1 + 1, next_idx2 = top.idx2 + 1;
        if (next_idx2 < nums2_size && map[top.idx1].find(next_idx2) == map[top.idx1].end()) {
            min_heap.push(Node(top.idx1, next_idx2, nums1[top.idx1] + nums2[next_idx2]));
            map[top.idx1].insert(next_idx2);
        }
        if (next_idx1 < nums1_size &&
            (map.find(next_idx1) == map.end() || map[next_idx1].find(top.idx2) == map[next_idx1].end())) {
            min_heap.push(Node(next_idx1, top.idx2, nums1[next_idx1] + nums2[top.idx2]));
            map[next_idx1].insert(top.idx2);
        }
        --k;
    }
    return result;
}

}  // namespace leetcode::find_k_pairs_with_smallest_sums::first
