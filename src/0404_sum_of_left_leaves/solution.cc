#include "0404_sum_of_left_leaves.h"

namespace leetcode::sum_of_left_leaves {

namespace {
int sum(TreeNode* root, bool is_left) {
    if (root->left == nullptr && root->right == nullptr) {
        return is_left ? root->val : 0;
    }
    int acc = 0;
    if (root->left != nullptr) {
        acc += sum(root->left, true);
    }
    if (root->right != nullptr) {
        acc += sum(root->right, false);
    }
    return acc;
}
}  // namespace

int Solution::sum_of_left_leaves(TreeNode* root) {
    return sum(root, false);
}

}  // namespace leetcode::sum_of_left_leaves
