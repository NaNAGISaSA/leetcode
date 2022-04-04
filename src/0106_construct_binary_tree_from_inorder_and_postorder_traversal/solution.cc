#include <unordered_map>

#include "0106_construct_binary_tree_from_inorder_and_postorder_traversal.h"

namespace leetcode::construct_binary_tree_from_inorder_and_postorder_traversal {

namespace {
TreeNode* recurse_build_tree(const std::vector<int>& inorder,
                             int in_start,
                             int in_end,
                             const std::vector<int>& postorder,
                             int post_start,
                             int post_end,
                             const std::unordered_map<int, int>& map) {
    if (post_start == post_end) {
        return new TreeNode(postorder[post_end]);
    }
    int idx = map.at(postorder[post_end]);
    TreeNode* head = new TreeNode(postorder[post_end]);
    if (idx != in_start) {
        head->left = recurse_build_tree(
            inorder, in_start, idx - 1, postorder, post_start, post_start + (idx - in_start) - 1, map);
    }
    if (idx != in_end) {
        head->right =
            recurse_build_tree(inorder, idx + 1, in_end, postorder, post_end - (in_end - idx), post_end - 1, map);
    }
    return head;
}
}  // namespace

TreeNode* Solution::build_tree(const std::vector<int>& inorder, const std::vector<int>& postorder) {
    std::unordered_map<int, int> map;
    for (int i = 0; i < static_cast<int>(inorder.size()); ++i) {
        map.insert({inorder[i], i});
    }
    return recurse_build_tree(
        inorder, 0, static_cast<int>(inorder.size()) - 1, postorder, 0, static_cast<int>(postorder.size()) - 1, map);
}

}  // namespace leetcode::construct_binary_tree_from_inorder_and_postorder_traversal
