#include "0199_binary_tree_right_side_view.h"

namespace leetcode::binary_tree_right_side_view::recurse {

namespace {
void traverse_tree(TreeNode* root, std::vector<int>& vec, size_t height) {
    if (root == nullptr) {
        return;
    }
    if (vec.size() < height) {
        vec.push_back(root->val);
    }
    traverse_tree(root->right, vec, height + 1);
    traverse_tree(root->left, vec, height + 1);
}
}  // namespace

std::vector<int> Solution::right_side_view(TreeNode* root) {
    std::vector<int> result;
    traverse_tree(root, result, 1);
    return result;
}

}  // namespace leetcode::binary_tree_right_side_view::recurse
