#include "0155_min_stack.h"

namespace leetcode::min_stack {

MinStack::MinStack() : num_stack{}, min_stack{} {
}

void MinStack::push(int val) {
    num_stack.push(val);
    if (min_stack.empty()) {
        min_stack.push(val);
    } else {
        int top = min_stack.top();
        min_stack.push(val < top ? val : top);
    }
}

void MinStack::pop() {
    num_stack.pop();
    min_stack.pop();
}

int MinStack::top() {
    return num_stack.top();
}

int MinStack::getMin() {
    return min_stack.top();
}

}  // namespace leetcode::min_stack
