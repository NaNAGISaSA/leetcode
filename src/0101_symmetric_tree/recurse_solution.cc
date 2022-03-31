#include "0101_symmetric_tree.h"

namespace leetcode::symmetric_tree::recurse {

namespace {
bool is_symmetric_tree(const TreeNode* root1, const TreeNode* root2) {
    if (root1 == nullptr || root2 == nullptr) {
        return root1 == root2;
    }
    return root1->val == root2->val && is_symmetric_tree(root1->left, root2->right) &&
           is_symmetric_tree(root1->right, root2->left);
}
}  // namespace

bool Solution::is_symmetric(TreeNode* root) {
    return is_symmetric_tree(root->left, root->right);
}

}  // namespace leetcode::symmetric_tree::recurse
