#ifndef LEETCODE_SRC_FIND_K_PAIRS_WITH_SMALLEST_SUMS_UTILS_H_
#define LEETCODE_SRC_FIND_K_PAIRS_WITH_SMALLEST_SUMS_UTILS_H_

namespace leetcode::find_k_pairs_with_smallest_sums {

struct Node {
    Node(size_t i1, size_t i2, int sum) : idx1(i1), idx2(i2), sum(sum) {
    }

    bool operator<(const Node& node) const {
        return sum > node.sum;
    }

    size_t idx1;
    size_t idx2;
    int sum;
};

}  // namespace leetcode::find_k_pairs_with_smallest_sums

#endif