#include <memory>

#include "0095_unique_binary_search_trees_two.h"

namespace leetcode::unique_binary_search_trees_two {

namespace {
TreeNode* copy_tree(TreeNode* head) {
    if (head == nullptr) {
        return nullptr;
    }
    TreeNode* cp_head = new TreeNode(head->val);
    cp_head->left = copy_tree(head->left);
    cp_head->right = copy_tree(head->right);
    return cp_head;
}

void delete_tree(TreeNode* head) {
    if (head == nullptr) {
        return;
    }
    delete_tree(head->left);
    delete_tree(head->right);
    delete head;
}

std::vector<TreeNode*> gen_tree(int begin, int end) {
    if (begin > end) {
        return {nullptr};
    }
    std::vector<TreeNode*> res;
    for (int i = begin; i <= end; ++i) {
        auto head = std::make_unique<TreeNode>(i);
        auto left = gen_tree(begin, i - 1);
        auto right = gen_tree(i + 1, end);
        for (auto& left_head : left) {
            head.get()->left = left_head;
            for (auto& right_head : right) {
                head.get()->right = right_head;
                res.push_back(copy_tree(head.get()));
            }
        }
        for (auto& left_head : left) {
            delete_tree(left_head);
        }
        for (auto& right_head : right) {
            delete_tree(right_head);
        }
    }
    return res;
}
}  // namespace

std::vector<TreeNode*> Solution::generate_trees(int n) {
    return gen_tree(1, n);
}

}  // namespace leetcode::unique_binary_search_trees_two