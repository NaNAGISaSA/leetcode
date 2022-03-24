#ifndef _LEETCODE_PARTITION_LIST_H_
#define _LEETCODE_PARTITION_LIST_H_

#include "utils/linked_list_utils.h"

namespace leetcode::partition_list {

class Solution {
public:
    static ListNode* partition(ListNode* head, int x);
};

}  // namespace leetcode::partition_list

#endif