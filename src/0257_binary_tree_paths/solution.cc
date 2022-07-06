#include "0257_binary_tree_paths.h"

namespace leetcode::binary_tree_paths {

namespace {
void dfs(const TreeNode* root, std::vector<int>& acc, std::vector<std::string>& result) {
    if (root == nullptr) {
        return;
    }
    if (root->left == nullptr && root->right == nullptr) {
        std::string tmp;
        for (auto& num : acc) {
            tmp += std::to_string(num) + "->";
        }
        tmp += std::to_string(root->val);
        result.push_back(std::move(tmp));
        return;
    }
    acc.push_back(root->val);
    dfs(root->left, acc, result);
    dfs(root->right, acc, result);
    acc.pop_back();
}
}  // namespace

std::vector<std::string> Solution::binary_tree_paths(TreeNode* root) {
    std::vector<int> acc;
    std::vector<std::string> result;
    dfs(root, acc, result);
    return result;
}

}  // namespace leetcode::binary_tree_paths
