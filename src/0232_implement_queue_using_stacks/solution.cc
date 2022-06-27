#include "0232_implement_queue_using_stacks.h"

namespace leetcode::implement_queue_using_stacks {

MyQueue::MyQueue() : s1{}, s2{} {
}

void MyQueue::push(int x) {
    if (s2.empty()) {
        s2.push(x);
    } else {
        s1.push(x);
    }
}

int MyQueue::pop() {
    int num = s2.top();
    s2.pop();
    if (s2.empty()) {
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
    }
    return num;
}

int MyQueue::peek() {
    return s2.top();
}

bool MyQueue::empty() {
    return s2.empty();
}

}  // namespace leetcode::implement_queue_using_stacks
