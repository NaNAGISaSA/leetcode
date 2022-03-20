#ifndef _LEETCODE_TESTS_LINKED_LIST_TEST_UTILS_H_
#define _LEETCODE_TESTS_LINKED_LIST_TEST_UTILS_H_

#include <type_traits>

#include "utils/linked_list_utils.h"

namespace leetcode {

template <typename T>
class LinkedListTestHelper {
public:
    template <typename TT, std::enable_if_t<std::is_same<std::decay_t<TT>, T>::value, bool> = true, typename... Ts>
    static ListNode* make_linked_list(TT&& head_val, Ts&&... values) {
        return construct_linked_list(std::forward<TT>(head_val), std::forward<Ts>(values)...);
    }

    static void release_linked_list(ListNode* head) {
        ListNode* tmp = nullptr;
        while (head != nullptr) {
            tmp = head->next;
            delete head;
            head = tmp;
        }
    }

private:
    template <typename TT, std::enable_if_t<std::is_same<std::decay_t<TT>, T>::value, bool> = true>
    static ListNode* construct_linked_list(TT&& head_val) {
        return new ListNode(std::forward<TT>(head_val));
    }

    template <typename TT, std::enable_if_t<std::is_same<std::decay_t<TT>, T>::value, bool> = true, typename... Ts>
    static ListNode* construct_linked_list(TT&& head_val, Ts&&... values) {
        ListNode* node = new ListNode(std::forward<TT>(head_val));
        node->next = construct_linked_list(std::forward<Ts>(values)...);
        return node;
    }
};

}  // namespace leetcode

#endif