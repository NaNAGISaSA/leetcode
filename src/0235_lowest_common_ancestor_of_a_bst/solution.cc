#include "0235_lowest_common_ancestor_of_a_bst.h"

namespace leetcode::lowest_common_ancestor_of_a_bst {

TreeNode* Solution::lowest_common_ancestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if ((root->val >= p->val && root->val <= q->val) || (root->val <= p->val && root->val >= q->val)) {
        return root;
    } else if (root->val > p->val) {
        return lowest_common_ancestor(root->left, p, q);
    } else {
        return lowest_common_ancestor(root->right, p, q);
    }
}

}  // namespace leetcode::lowest_common_ancestor_of_a_bst
