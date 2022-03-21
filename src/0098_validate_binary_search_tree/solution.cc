#include "0098_validate_binary_search_tree.h"

namespace leetcode::validate_binary_search_tree {

namespace {
TreeNode* is_valid(TreeNode* root, TreeNode* prev, bool& result) {
    if (root == nullptr) {
        return prev;
    }
    prev = is_valid(root->left, prev, result);
    if (!result || (prev != nullptr && prev->val >= root->val)) {
        result = false;
        return root;
    }
    return is_valid(root->right, root, result);
}
}  // namespace

bool Solution::is_valid_bst(TreeNode* root) {
    bool result = true;
    is_valid(root, nullptr, result);
    return result;
}

}  // namespace leetcode::validate_binary_search_tree
