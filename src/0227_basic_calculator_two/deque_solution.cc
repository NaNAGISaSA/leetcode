#include "0227_basic_calculator_two.h"

#include <deque>
#include <unordered_map>

namespace leetcode::basic_calculator_two::deque {

int Solution::calculate(const std::string& s) {
    static std::unordered_map<char, int> op_map{{'+', 0}, {'-', 1}, {'*', 2}, {'/', 3}};
    std::deque<int> container;

    auto add_num_to_container = [&container](int num) {
        if (!container.empty() && container.back() > 1) {
            int op = container.back();
            container.pop_back();
            int num2 = container.back();
            container.pop_back();
            num = op == 2 ? num2 * num : num2 / num;
        }
        container.push_back(num);
    };

    size_t idx = 0, s_size = s.size();
    int num = 0;
    while (idx < s_size) {
        if (s[idx] >= '0' && s[idx] <= '9') {
            num = 10 * num + (s[idx] - '0');
        } else if (s[idx] != ' ') {
            add_num_to_container(num);
            container.push_back(op_map[s[idx]]);
            num = 0;
        }
        ++idx;
    }
    add_num_to_container(num);

    int result = container.front();
    container.pop_front();
    while (!container.empty()) {
        int op = container.front();
        container.pop_front();
        num = container.front();
        container.pop_front();
        result = op == 0 ? result + num : result - num;
    }
    return result;
}

}  // namespace leetcode::basic_calculator_two::deque
