#include <algorithm>

#include "0111_minimum_depth_of_binary_tree.h"

namespace leetcode::minimum_depth_of_binary_tree {

int Solution::min_depth(TreeNode* root) {
    if (root == nullptr) {
        return 0;
    }
    int left = min_depth(root->left);
    int right = min_depth(root->right);
    return left == 0 || right == 0 ? left + right + 1 : std::min(left, right) + 1;
}

}  // namespace leetcode::minimum_depth_of_binary_tree
