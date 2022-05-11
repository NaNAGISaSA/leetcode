#ifndef _LEETCODE_INTERSECTION_OF_TWO_LINKED_LISTS_H_
#define _LEETCODE_INTERSECTION_OF_TWO_LINKED_LISTS_H_

#include "utils/linked_list_utils.h"

namespace leetcode::intersection_of_two_linked_lists {

class Solution {
public:
    static ListNode* get_intersection_node(ListNode* head1, ListNode* head2);
};

}  // namespace leetcode::intersection_of_two_linked_lists

#endif