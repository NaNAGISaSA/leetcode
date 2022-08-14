#include "0313_super_ugly_number.h"

#include <queue>

namespace leetcode::super_ugly_number::heap {

/*
 * 再次提醒一个很重要的思想：如果有循环进行比较大小的问题，如O(NK)，
 *   就可以构造一个K个元素的堆将时间复杂度减小至O(NlogK)
 */
int Solution::nth_super_ugly_number(int n, const std::vector<int>& primes) {
    std::vector<int> result(n, 1);

    auto cmp = [&result](const std::pair<int, long>& p1, const std::pair<int, long>& p2) {
        return result[p1.first] * p1.second > result[p2.first] * p2.second;
    };
    std::priority_queue<std::pair<int, long>, std::vector<std::pair<int, long>>, decltype(cmp)> min_heap(cmp);
    for (auto& prime : primes) {
        min_heap.push({0, prime});
    }

    int idx = 1;
    while (idx < n) {
        std::pair<int, int> top = std::move(min_heap.top());
        min_heap.pop();
        if (result[top.first] * top.second > result[idx - 1]) {
            result[idx++] = result[top.first] * top.second;
        }
        min_heap.push({top.first + 1, top.second});
    }
    return result.back();
}

}  // namespace leetcode::super_ugly_number::heap
