#include "0382_linked_list_random_node.h"

#include <cstdlib>

namespace leetcode::linked_list_random_node {

Solution::Solution(ListNode* head) : head_(head) {
}

/*
 * Reservoir Sampling：蓄水池抽样
 * 解决当内存无法加载全部数据时，如何从包含未知大小的数据流中随机选取k个数据，
 * 并且要保证每个数据被抽取到的概率相等的问题。
 *
 * Example: n = 4, k = 1. At the end, we have:
 * P(pick 4) = 1 / 4
 * P(pick 3) = 3 / 4 * (1 / 3) = 1 / 4
 * P(pick 2) = 3 / 4 * (2 / 3) * (1 / 2) = 1 / 4
 * P(pick 1) = 3 / 4 * (2 / 3) * (1 / 2) * 1 = 1 / 4
 */
int Solution::get_random() {
    int result = 0, count = 1;
    ListNode* head = head_;
    while (head != nullptr) {
        if (rand() % count++ == 0) {
            result = head->val;
        }
        head = head->next;
    }
    return result;
}

}  // namespace leetcode::linked_list_random_node
