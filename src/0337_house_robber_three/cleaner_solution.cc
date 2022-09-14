#include "0337_house_robber_three.h"

#include <algorithm>
#include <vector>

namespace leetcode::house_robber_three::cleaner {

namespace {
std::pair<int, int> postorder(TreeNode* root) {
    if (root == nullptr) {
        return {0, 0};
    }
    auto left = postorder(root->left);
    auto right = postorder(root->right);
    return {left.second + right.second + root->val,
            std::max(left.first, left.second) + std::max(right.first, right.second)};
}
}  // namespace

int Solution::rob(TreeNode* root) {
    auto res = postorder(root);
    return std::max(res.first, res.second);
}

}  // namespace leetcode::house_robber_three::cleaner
