#include "0112_path_sum.h"

namespace leetcode::path_sum {

bool Solution::has_path_sum(TreeNode* root, int target_sum) {
    if (root == nullptr) {
        return false;
    }
    if (root->left == nullptr && root->right == nullptr && target_sum == root->val) {
        return true;
    }
    return has_path_sum(root->left, target_sum - root->val) || has_path_sum(root->right, target_sum - root->val);
}

}  // namespace leetcode::path_sum
