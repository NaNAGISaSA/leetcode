#include <unordered_map>

#include "0105_construct_binary_tree_from_preorder_and_inorder_traversal.h"

namespace leetcode::construct_binary_tree_from_preorder_and_inorder_traversal {

namespace {
TreeNode* recurse_build_tree(const std::vector<int>& preorder,
                             int pre_start,
                             int pre_end,
                             const std::vector<int>& inorder,
                             int in_start,
                             int in_end,
                             const std::unordered_map<int, int>& map) {
    if (pre_start == pre_end) {
        return new TreeNode(preorder[pre_start]);
    }
    TreeNode* root = new TreeNode(preorder[pre_start]);
    int idx = map.at(preorder[pre_start]);
    if (idx != in_start) {
        root->left =
            recurse_build_tree(preorder, pre_start + 1, pre_start + idx - in_start, inorder, in_start, idx - 1, map);
    }
    if (idx != in_end) {
        root->right =
            recurse_build_tree(preorder, pre_end - (in_end - idx) + 1, pre_end, inorder, idx + 1, in_end, map);
    }
    return root;
}
}  // namespace

TreeNode* Solution::build_tree(const std::vector<int>& preorder, const std::vector<int>& inorder) {
    std::unordered_map<int, int> map;
    for (int i = 0; i < static_cast<int>(inorder.size()); ++i) {
        map.insert({inorder[i], i});
    }
    return recurse_build_tree(
        preorder, 0, static_cast<int>(preorder.size()) - 1, inorder, 0, static_cast<int>(inorder.size()) - 1, map);
}

}  // namespace leetcode::construct_binary_tree_from_preorder_and_inorder_traversal
