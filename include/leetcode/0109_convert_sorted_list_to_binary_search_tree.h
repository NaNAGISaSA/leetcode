#ifndef _LEETCODE_CONVERT_SORTED_LIST_TO_BINARY_SEARCH_TREE_H_
#define _LEETCODE_CONVERT_SORTED_LIST_TO_BINARY_SEARCH_TREE_H_

#include "utils/linked_list_utils.h"
#include "utils/tree_utils.h"

namespace leetcode::convert_sorted_list_to_binary_search_tree {

class Solution {
public:
    static TreeNode* sorted_list_to_height_balanced_bst(ListNode* head);
};

}  // namespace leetcode::convert_sorted_list_to_binary_search_tree

#endif