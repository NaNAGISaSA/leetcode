#ifndef _LEETCODE_CONSTRUCT_BINARY_TREE_FROM_INORDER_AND_POSTORDER_TRAVERSAL_H_
#define _LEETCODE_CONSTRUCT_BINARY_TREE_FROM_INORDER_AND_POSTORDER_TRAVERSAL_H_

#include <vector>

#include "utils/tree_utils.h"

namespace leetcode::construct_binary_tree_from_inorder_and_postorder_traversal {

class Solution {
public:
    static TreeNode* build_tree(const std::vector<int>& inorder, const std::vector<int>& postorder);
};

}  // namespace leetcode::construct_binary_tree_from_inorder_and_postorder_traversal

#endif