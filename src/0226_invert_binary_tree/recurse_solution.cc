#include "0226_invert_binary_tree.h"

namespace leetcode::invert_binary_tree::recurse {

TreeNode* Solution::invert_tree(TreeNode* root) {
    if (root == nullptr) {
        return nullptr;
    }
    auto left = invert_tree(root->left);
    auto right = invert_tree(root->right);
    root->left = right;
    root->right = left;
    return root;
}

}  // namespace leetcode::invert_binary_tree::recurse
