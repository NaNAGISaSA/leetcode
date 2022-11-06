#ifndef LEETCODE_LINKED_LIST_RANDOM_NODE_H_
#define LEETCODE_LINKED_LIST_RANDOM_NODE_H_

#include "utils/linked_list_utils.h"

namespace leetcode::linked_list_random_node {

class Solution {
public:
    Solution(ListNode* head);
    int get_random();

private:
    ListNode* head_;
};

}  // namespace leetcode::linked_list_random_node

#endif