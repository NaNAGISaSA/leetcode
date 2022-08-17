#include "0316_remove_duplicate_letters.h"

#include <deque>
#include <vector>

namespace leetcode::remove_duplicate_letters::deque {

std::string Solution::remove_duplicate_letters(std::string s) {
    std::vector<int> count_vec(26, 0);
    for (const auto& chr : s) {
        ++count_vec[chr - 'a'];
    }

    std::vector<bool> has_contain(26, false);
    std::deque<char> queue;
    for (const auto& chr : s) {
        int idx = chr - 'a';
        --count_vec[idx];
        if (has_contain[idx]) {
            continue;
        }
        while (!queue.empty() && chr < queue.back() && count_vec[queue.back() - 'a'] > 0) {
            has_contain[queue.back() - 'a'] = false;
            queue.pop_back();
        }
        queue.push_back(chr);
        has_contain[idx] = true;
    }

    std::string result;
    result.reserve(queue.size());
    while (!queue.empty()) {
        result.push_back(queue.front());
        queue.pop_front();
    }
    return result;
}

}  // namespace leetcode::remove_duplicate_letters::deque
