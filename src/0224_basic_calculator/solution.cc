#include "0224_basic_calculator.h"

#include <deque>

namespace leetcode::basic_calculator {

namespace {
void add_num_to_queue(std::deque<std::string>& queue, int num) {
    if (!queue.empty()) {
        std::string back = queue.back();
        if (back == "*" || back == "/") {
            queue.pop_back();
            int num2 = std::stoi(queue.back());
            queue.pop_back();
            num = back == "*" ? num2 * num : num2 / num;
        }
    }
    queue.push_back(std::to_string(num));
}

int calculate_result(std::deque<std::string>& queue) {
    int result = std::stoi(queue.front());
    queue.pop_front();
    while (!queue.empty()) {
        std::string op = queue.front();
        queue.pop_front();
        int num = std::stoi(queue.front());
        queue.pop_front();
        result = op == "+" ? result + num : result - num;
    }
    return result;
}

std::pair<int, size_t> recurse_calculate(const std::string& s, size_t idx, size_t str_size) {
    std::deque<std::string> queue;
    int curr_num = 0;
    while (idx < str_size && s[idx] != ')') {
        if (s[idx] == ' ') {
            ++idx;
        } else if (s[idx] >= '0' && s[idx] <= '9') {
            curr_num = 10 * curr_num + (s[idx++] - '0');
        } else if (s[idx] != '(') {
            add_num_to_queue(queue, curr_num);
            queue.push_back(std::string(1, s[idx++]));
            curr_num = 0;
        } else {
            auto result = recurse_calculate(s, idx + 1, str_size);
            curr_num = result.first;
            idx = result.second;
        }
    }
    add_num_to_queue(queue, curr_num);
    return std::make_pair(calculate_result(queue), idx + 1);
}
}  // namespace

int Solution::calculate(const std::string& s) {
    return recurse_calculate(s, 0, s.size()).first;
}

}  // namespace leetcode::basic_calculator
