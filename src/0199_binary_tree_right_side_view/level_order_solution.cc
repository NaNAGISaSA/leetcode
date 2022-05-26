#include "0199_binary_tree_right_side_view.h"

#include <queue>

namespace leetcode::binary_tree_right_side_view::level_order {

std::vector<int> Solution::right_side_view(TreeNode* root) {
    if (root == nullptr) {
        return {};
    }
    std::queue<TreeNode*> queue;
    queue.push(root);
    size_t num = 1;
    std::vector<int> result;
    while (!queue.empty()) {
        TreeNode* curr = queue.front();
        queue.pop();
        if (curr->left != nullptr) {
            queue.push(curr->left);
        }
        if (curr->right != nullptr) {
            queue.push(curr->right);
        }
        if (--num == 0) {
            result.push_back(curr->val);
            num = queue.size();
        }
    }
    return result;
}

}  // namespace leetcode::binary_tree_right_side_view::level_order
