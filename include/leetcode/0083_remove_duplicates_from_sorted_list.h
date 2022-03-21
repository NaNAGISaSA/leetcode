#ifndef _LEETCODE_REMOVE_DUPLICATES_FROM_SORTED_LIST_H_
#define _LEETCODE_REMOVE_DUPLICATES_FROM_SORTED_LIST_H_

#include "utils/linked_list_utils.h"

namespace leetcode::remove_duplicates_from_sorted_list {

class Solution {
public:
    static ListNode* delete_duplicates(ListNode* head);
};

}  // namespace leetcode::remove_duplicates_from_sorted_list

#endif