#include "0297_serialize_and_deserialize_binary_tree.h"

#include "serialize_and_deserialize_utils.h"

namespace leetcode::serialize_and_deserialize_binary_tree::pre_order {

std::string Codec::serialize(TreeNode* root) {
    if (root == nullptr) {
        return NULLPTR_MARK_STR;
    }
    return std::to_string(root->val) + SPLITER_STR + serialize(root->left) + SPLITER_STR + serialize(root->right);
}

namespace {
TreeNode* recurse_deserialize(const std::vector<std::string>& vec, size_t& idx) {
    if (vec[idx] == NULLPTR_MARK_STR) {
        ++idx;
        return nullptr;
    }
    TreeNode* root = new TreeNode(std::stoi(vec[idx++]));
    root->left = recurse_deserialize(vec, idx);
    root->right = recurse_deserialize(vec, idx);
    return root;
}
}  // namespace

TreeNode* Codec::deserialize(const std::string& data) {
    if (data.size() == 1) {
        return nullptr;
    }
    size_t idx = 0;
    std::vector<std::string> data_vec = split(data);
    return recurse_deserialize(data_vec, idx);
}

}  // namespace leetcode::serialize_and_deserialize_binary_tree::pre_order
