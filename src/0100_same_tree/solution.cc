#include "0100_same_tree.h"

namespace leetcode::same_tree {

bool Solution::is_same_tree(TreeNode* p, TreeNode* q) {
    if (p == nullptr || q == nullptr) {
        return p == q;
    }
    return p->val == q->val && is_same_tree(p->left, q->left) && is_same_tree(p->right, q->right);
}

}  // namespace leetcode::same_tree
