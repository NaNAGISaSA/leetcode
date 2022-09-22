#include "0347_top_k_frequent_elements.h"

#include <queue>
#include <unordered_map>

namespace leetcode::top_k_frequent_elements::heap {

std::vector<int> Solution::top_k_frequent(const std::vector<int>& nums, int k) {
    std::unordered_map<int, int> count_map;
    for (const auto& num : nums) {
        ++count_map[num];
    }

    auto cmp = [&count_map](int a, int b) { return count_map[a] > count_map[b]; };
    std::priority_queue<int, std::vector<int>, decltype(cmp)> min_heap(cmp);

    auto it_begin = count_map.begin();
    while (k-- != 0) {
        min_heap.push(it_begin->first);
        ++it_begin;
    }
    for (auto it_end = count_map.end(); it_begin != it_end; ++it_begin) {
        if (count_map[it_begin->first] > count_map[min_heap.top()]) {
            min_heap.pop();
            min_heap.push(it_begin->first);
        }
    }

    std::vector<int> result;
    result.reserve(min_heap.size());
    while (!min_heap.empty()) {
        result.push_back(min_heap.top());
        min_heap.pop();
    }
    return result;
}

}  // namespace leetcode::top_k_frequent_elements::heap
