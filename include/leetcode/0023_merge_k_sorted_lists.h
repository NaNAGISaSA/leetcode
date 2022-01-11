#ifndef _LEETCODE_MERGE_K_SORTED_LISTS_H_
#define _LEETCODE_MERGE_K_SORTED_LISTS_H_

#include <vector>

#include "utils/linked_list_utils.h"

using leetcode::utils::ListNode;

namespace leetcode::merge_k_sorted_lists {

class Solution {
public:
    static ListNode* merge_k_lists(const std::vector<ListNode*>& lists);
};

}  // namespace leetcode::merge_k_sorted_lists

#endif