#include "0341_flatten_nested_list_iterator.h"

#include "utils/linked_list_utils.h"

namespace leetcode::flatten_nested_list_iterator::list {

class NestedIterator::Impl {
public:
    Impl(const std::vector<NestedInteger>& nested_list) : dummy_head(new ListNode(-1)), curr_tail(dummy_head) {
        for (size_t i = 0; i < nested_list.size(); ++i) {
            flatten(nested_list[i]);
        }
        curr_tail = dummy_head->next;
    }

    ~Impl() {
        while (dummy_head != nullptr) {
            curr_tail = dummy_head->next;
            delete dummy_head;
            dummy_head = curr_tail;
        }
    }

    int next() {
        int val = curr_tail->val;
        curr_tail = curr_tail->next;
        return val;
    }

    bool hasNext() {
        return curr_tail != nullptr;
    }

private:
    void flatten(const NestedInteger& nest) {
        if (nest.isInteger()) {
            curr_tail->next = new ListNode(nest.getInteger());
            curr_tail = curr_tail->next;
        } else {
            const std::vector<NestedInteger>& nest_vec = nest.getList();
            for (size_t i = 0; i < nest_vec.size(); ++i) {
                flatten(nest_vec[i]);
            }
        }
    }

private:
    ListNode* dummy_head;
    ListNode* curr_tail;
};

NestedIterator::NestedIterator(std::vector<NestedInteger>& nested_list) : impl(std::make_unique<Impl>(nested_list)) {
}

NestedIterator::~NestedIterator() = default;

int NestedIterator::next() {
    return impl->next();
}

bool NestedIterator::hasNext() {
    return impl->hasNext();
}

}  // namespace leetcode::flatten_nested_list_iterator::list
