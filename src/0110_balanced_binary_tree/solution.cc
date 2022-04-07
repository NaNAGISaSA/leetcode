#include <algorithm>
#include <cmath>

#include "0110_balanced_binary_tree.h"

namespace leetcode::balanced_binary_tree {

namespace {
int is_balanced_tree(TreeNode* root) {
    if (root == nullptr) {
        return 0;
    }
    int left_height = is_balanced_tree(root->left);
    int right_height = is_balanced_tree(root->right);
    if (left_height == -1 || right_height == -1 || std::abs(left_height - right_height) > 1) {
        return -1;
    }
    return std::max(left_height, right_height) + 1;
}
}  // namespace

bool Solution::is_balanced(TreeNode* root) {
    return is_balanced_tree(root) != -1;
}

}  // namespace leetcode::balanced_binary_tree
