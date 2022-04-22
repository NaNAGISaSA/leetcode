#ifndef _LEETCODE_LINKED_LIST_CYCLE_H_
#define _LEETCODE_LINKED_LIST_CYCLE_H_

#include "utils/linked_list_utils.h"

namespace leetcode::linked_list_cycle {

class Solution {
public:
    static bool has_cycle(ListNode* head);
};

}  // namespace leetcode::linked_list_cycle

#endif