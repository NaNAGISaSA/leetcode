#ifndef _LEETCODE_REMOVE_NTH_NODE_FROM_END_OF_LIST_H_
#define _LEETCODE_REMOVE_NTH_NODE_FROM_END_OF_LIST_H_

#include "utils/linked_list_utils.h"

using leetcode::utils::ListNode;

namespace leetcode::remove_nth_node_from_end_of_list {

#define SOLUTION_CLASS_DECLARATION                                   \
    class Solution {                                                 \
    public:                                                          \
        static ListNode* remove_nth_from_end(ListNode* head, int n); \
    }

namespace first {
SOLUTION_CLASS_DECLARATION;
}

namespace two_pointers {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::remove_nth_node_from_end_of_list

#endif
