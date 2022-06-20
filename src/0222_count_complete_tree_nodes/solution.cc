#include "0222_count_complete_tree_nodes.h"

namespace leetcode::count_complete_tree_nodes {

int Solution::count_nodes(TreeNode* root) {
    if (root == nullptr) {
        return 0;
    }
    auto count_height = [](TreeNode* root) {
        int height = 0;
        while (root != nullptr) {
            root = root->left;
            ++height;
        }
        return height;
    };

    int left_height = count_height(root->left);
    int right_height = count_height(root->right);
    if (left_height == right_height) {
        return (1 << left_height) + count_nodes(root->right);
    } else {
        return (1 << right_height) + count_nodes(root->left);
    }
}

}  // namespace leetcode::count_complete_tree_nodes
