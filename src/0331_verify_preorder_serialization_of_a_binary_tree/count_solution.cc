#include "0331_verify_preorder_serialization_of_a_binary_tree.h"

namespace leetcode::verify_preorder_serialization_of_a_binary_tree::count_node {

bool Solution::is_valid_serialization(const std::string& preorder) {
    int node_count = 1;
    size_t idx = 0, size = preorder.size();
    while (idx < size) {
        if (node_count == 0) {
            return false;
        }
        --node_count;
        if (preorder[idx] != '#') {
            node_count += 2;
        }
        while (idx < size && preorder[idx] != ',') {
            ++idx;
        }
        ++idx;
    }
    return node_count == 0;
}

}  // namespace leetcode::verify_preorder_serialization_of_a_binary_tree::count_node
