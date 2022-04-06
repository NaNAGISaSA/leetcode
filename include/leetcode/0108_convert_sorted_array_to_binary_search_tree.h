#ifndef _LEETCODE_CONVERT_SORTED_ARRAY_TO_BINARY_SEARCH_TREE_H_
#define _LEETCODE_CONVERT_SORTED_ARRAY_TO_BINARY_SEARCH_TREE_H_

#include <vector>

#include "utils/tree_utils.h"

namespace leetcode::convert_sorted_array_to_binary_search_tree {

class Solution {
public:
    static TreeNode* sorted_array_to_height_balanced_bst(const std::vector<int>& nums);
};

}  // namespace leetcode::convert_sorted_array_to_binary_search_tree

#endif