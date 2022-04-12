#include "0114_flatten_binary_tree_to_linked_list.h"

namespace leetcode::flatten_binary_tree_to_linked_list {

namespace {
TreeNode* flatten_tree(TreeNode* root, TreeNode* next) {
    if (root == nullptr) {
        return next;
    }
    TreeNode* right_next = flatten_tree(root->right, next);
    TreeNode* left_next = flatten_tree(root->left, right_next);
    root->left = nullptr;
    root->right = left_next;
    return root;
}
}  // namespace

void Solution::flatten(TreeNode* root) {
    flatten_tree(root, nullptr);
}

}  // namespace leetcode::flatten_binary_tree_to_linked_list
