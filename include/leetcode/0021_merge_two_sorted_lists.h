#ifndef _LEETCODE_MERGE_TWO_SORTED_LISTS_H_
#define _LEETCODE_MERGE_TWO_SORTED_LISTS_H_

#include "utils/linked_list_utils.h"

namespace leetcode::merge_two_sorted_lists {

class Solution {
public:
    static ListNode* merge_two_lists(ListNode* list1, ListNode* list2);
};

}  // namespace leetcode::merge_two_sorted_lists

#endif
