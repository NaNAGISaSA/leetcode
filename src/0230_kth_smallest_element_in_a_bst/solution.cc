#include "0230_kth_smallest_element_in_a_bst.h"

namespace leetcode::kth_smallest_element_in_a_bst {

namespace {
void in_order(TreeNode* root, int& k, int& result) {
    if (k == 0 || root == nullptr) {
        return;
    }
    in_order(root->left, k, result);
    if (--k == 0) {
        result = root->val;
    }
    in_order(root->right, k, result);
}
}  // namespace

int Solution::kth_smallest(TreeNode* root, int k) {
    int result = 0;
    in_order(root, k, result);
    return result;
}

}  // namespace leetcode::kth_smallest_element_in_a_bst
