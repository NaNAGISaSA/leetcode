#ifndef _LEETCODE_FLATTEN_BINARY_TREE_TO_LINKED_LIST_H_
#define _LEETCODE_FLATTEN_BINARY_TREE_TO_LINKED_LIST_H_

#include "utils/tree_utils.h"

namespace leetcode::flatten_binary_tree_to_linked_list {

class Solution {
public:
    static void flatten(TreeNode* root);
};

}  // namespace leetcode::flatten_binary_tree_to_linked_list

#endif