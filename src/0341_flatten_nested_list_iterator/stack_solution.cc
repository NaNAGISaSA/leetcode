#include "0341_flatten_nested_list_iterator.h"

#include <stack>

namespace leetcode::flatten_nested_list_iterator::stack {

class NestedIterator::Impl {
public:
    Impl(const std::vector<NestedInteger>& nested_list) : stack{} {
        pushToStack(nested_list);
    }

    int next() {
        int top = stack.top()->getInteger();
        stack.pop();
        return top;
    }

    bool hasNext() {
        while (!stack.empty()) {
            const NestedInteger* top = stack.top();
            if (top->isInteger()) {
                return true;
            }
            stack.pop();
            pushToStack(top->getList());
        }
        return false;
    }

private:
    void pushToStack(const std::vector<NestedInteger>& nested_list) {
        size_t list_size = nested_list.size();
        for (size_t i = list_size - 1; i < list_size; --i) {
            stack.push(&(nested_list[i]));
        }
    }

private:
    std::stack<const NestedInteger*> stack;
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

}  // namespace leetcode::flatten_nested_list_iterator::stack
