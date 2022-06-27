#include "0225_implement_stack_using_queues.h"

namespace leetcode::implement_stack_using_queues {

MyStack::MyStack() : queue{} {
}

void MyStack::push(int x) {
    queue.push(x);
    size_t adjust_size = queue.size();
    while (--adjust_size != 0) {
        queue.push(pop());
    }
}

int MyStack::pop() {
    int front = queue.front();
    queue.pop();
    return front;
}

int MyStack::top() {
    return queue.front();
}

bool MyStack::empty() {
    return queue.empty();
}

}  // namespace leetcode::implement_stack_using_queues
