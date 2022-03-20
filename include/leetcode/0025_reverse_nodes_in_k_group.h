#ifndef _LEETCODE_REVERSE_NODES_IN_K_GROUP_H_
#define _LEETCODE_REVERSE_NODES_IN_K_GROUP_H_

#include "utils/linked_list_utils.h"

namespace leetcode::reverse_nodes_in_k_group {

class Solution {
public:
    static ListNode* reverse_k_group(ListNode* head, int k);
};

}  // namespace leetcode::reverse_nodes_in_k_group

#endif
