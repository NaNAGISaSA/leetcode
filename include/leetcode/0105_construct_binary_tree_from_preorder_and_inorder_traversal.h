#ifndef _LEETCODE_CONSTRUCT_BINARY_TREE_FROM_PREORDER_AND_INORDER_TRAVERSAL_H_
#define _LEETCODE_CONSTRUCT_BINARY_TREE_FROM_PREORDER_AND_INORDER_TRAVERSAL_H_

#include <vector>

#include "utils/tree_utils.h"

namespace leetcode::construct_binary_tree_from_preorder_and_inorder_traversal {

class Solution {
public:
    static TreeNode* build_tree(const std::vector<int>& preorder, const std::vector<int>& inorder);
};

}  // namespace leetcode::construct_binary_tree_from_preorder_and_inorder_traversal

#endif