#include "0331_verify_preorder_serialization_of_a_binary_tree.h"

namespace leetcode::verify_preorder_serialization_of_a_binary_tree {

namespace {
bool preorder_traverse(const std::string& preorder, size_t str_size, size_t& str_idx) {
    if (preorder[str_idx] == '#') {
        if (str_idx + 1 == str_size) {
            ++str_idx;
        } else {
            str_idx += 2;
        }
        return true;
    }
    while (str_idx < str_size && preorder[str_idx] != ',') {
        ++str_idx;
    }
    if (str_idx == str_size) {
        return false;
    }
    ++str_idx;
    if (!preorder_traverse(preorder, str_size, str_idx) || str_idx == str_size) {
        return false;
    }
    return preorder_traverse(preorder, str_size, str_idx);
}
}  // namespace

bool Solution::is_valid_serialization(const std::string& preorder) {
    size_t str_size = preorder.size(), str_idx = 0;
    return preorder_traverse(preorder, str_size, str_idx) && str_idx == str_size;
}

}  // namespace leetcode::verify_preorder_serialization_of_a_binary_tree
