#include <vector>

#include "0099_recover_binary_search_tree.h"

namespace leetcode::recover_binary_search_tree {

namespace {
TreeNode* inorder(TreeNode* root, TreeNode* prev, std::vector<TreeNode*>& vec) {
    if (root == nullptr) {
        return prev;
    }
    prev = inorder(root->left, prev, vec);
    if (prev != nullptr && prev->val > root->val) {
        if (vec[0] == nullptr) {
            vec[0] = prev;
            vec[1] = root;
        } else {
            vec[1] = root;
        }
    }
    return inorder(root->right, root, vec);
}
}  // namespace

void Solution::recover_tree(TreeNode* root) {
    std::vector<TreeNode*> vec(2, nullptr);
    inorder(root, nullptr, vec);
    int tmp = vec[0]->val;
    vec[0]->val = vec[1]->val;
    vec[1]->val = tmp;
}

}  // namespace leetcode::recover_binary_search_tree
