#include "0337_house_robber_three.h"

#include <algorithm>
#include <vector>

namespace leetcode::house_robber_three {

namespace {
std::vector<std::pair<int, bool>> postorder(TreeNode* root) {
    if (root == nullptr) {
        return {{0, false}};
    }
    auto left_vec = postorder(root->left);
    auto right_vec = postorder(root->right);
    int max_val_visit_curr = 0, max_value_not_visit_curr = 0;
    for (const auto& left : left_vec) {
        for (const auto& right : right_vec) {
            if (!left.second && !right.second) {
                max_val_visit_curr = left.first + right.first + root->val;
            }
            max_value_not_visit_curr = std::max(max_value_not_visit_curr, left.first + right.first);
        }
    }
    return {{max_val_visit_curr, true}, {max_value_not_visit_curr, false}};
}
}  // namespace

int Solution::rob(TreeNode* root) {
    auto res = postorder(root);
    return res.size() == 1 ? res.front().first : std::max(res.front().first, res.back().first);
}

}  // namespace leetcode::house_robber_three
