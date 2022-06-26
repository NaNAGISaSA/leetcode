#ifndef _LEETCODE_KTH_SMALLEST_ELEMENT_IN_A_BST_H_
#define _LEETCODE_KTH_SMALLEST_ELEMENT_IN_A_BST_H_

#include "utils/tree_utils.h"

namespace leetcode::kth_smallest_element_in_a_bst {

class Solution {
public:
    static int kth_smallest(TreeNode* root, int k);
};

}  // namespace leetcode::kth_smallest_element_in_a_bst

#endif