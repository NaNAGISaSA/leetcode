#include <algorithm>
#include <limits>

#include "0124_binary_tree_maximum_path_sum.h"

namespace leetcode::binary_tree_maximum_path_sum {

namespace {
struct TreeInfo {
    TreeInfo(int val1, int val2) : max_path(val1), max_sum(val2) {
    }

    int max_path;
    int max_sum;
};

TreeInfo traverse_tree(TreeNode* root) {
    if (root->left == nullptr && root->right == nullptr) {
        return {root->val, root->val};
    } else if (root->left != nullptr && root->right != nullptr) {
        TreeInfo left = traverse_tree(root->left);
        TreeInfo right = traverse_tree(root->right);
        int max_path = std::max(left.max_path, right.max_path);
        max_path = max_path > 0 ? max_path + root->val : root->val;
        int max_sum = std::max(max_path, std::max(left.max_sum, right.max_sum));
        max_sum = std::max(max_sum, root->val + left.max_path + right.max_path);
        return {max_path, max_sum};
    } else {
        TreeInfo info = traverse_tree(root->left == nullptr ? root->right : root->left);
        int max_path = std::max(root->val, root->val + info.max_path);
        int max_sum = std::max(info.max_sum, max_path);
        return {max_path, max_sum};
    }
}
}  // namespace

int Solution::max_path_sum(TreeNode* root) {
    return traverse_tree(root).max_sum;
}

}  // namespace leetcode::binary_tree_maximum_path_sum
