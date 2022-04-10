#include "0113_path_sum_two.h"

namespace leetcode::path_sum_two {

namespace {
void dfs(TreeNode* root, std::vector<int>& acc, std::vector<std::vector<int>>& res, int curr, int target) {
    if (root == nullptr) {
        return;
    }
    if (root->left == nullptr && root->right == nullptr && curr + root->val == target) {
        res.push_back(acc);
        res.back().push_back(root->val);
        return;
    }
    acc.push_back(root->val);
    dfs(root->left, acc, res, curr + root->val, target);
    dfs(root->right, acc, res, curr + root->val, target);
    acc.pop_back();
}
}  // namespace

std::vector<std::vector<int>> Solution::path_sum(TreeNode* root, int target_sum) {
    std::vector<std::vector<int>> res;
    std::vector<int> acc;
    dfs(root, acc, res, 0, target_sum);
    return res;
}

}  // namespace leetcode::path_sum_two
