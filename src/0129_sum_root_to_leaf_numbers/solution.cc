#include "0129_sum_root_to_leaf_numbers.h"

namespace leetcode::sum_root_to_leaf_numbers {

namespace {
void traverse_tree(TreeNode* root, int curr, int& sum_num) {
    curr = 10 * curr + root->val;
    if (root->left == nullptr && root->right == nullptr) {
        sum_num += curr;
        return;
    }
    if (root->left != nullptr) {
        traverse_tree(root->left, curr, sum_num);
    }
    if (root->right != nullptr) {
        traverse_tree(root->right, curr, sum_num);
    }
}
}  // namespace

int Solution::sum_numbers(TreeNode* root) {
    int sum_num = 0;
    traverse_tree(root, 0, sum_num);
    return sum_num;
}

}  // namespace leetcode::sum_root_to_leaf_numbers
