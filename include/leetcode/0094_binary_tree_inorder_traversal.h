#ifndef _LEETCODE_BINARY_TREE_INORDER_TRAVERSAL_H_
#define _LEETCODE_BINARY_TREE_INORDER_TRAVERSAL_H_

#include <vector>

#include "utils/tree_utils.h"

namespace leetcode::binary_tree_inorder_traversal {

class Solution {
public:
    static std::vector<int> inorder_traversal(TreeNode* root);
};

}  // namespace leetcode::binary_tree_inorder_traversal

#endif