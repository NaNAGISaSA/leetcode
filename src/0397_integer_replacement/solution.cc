#include "0397_integer_replacement.h"

#include <algorithm>
#include <limits>
#include <unordered_map>

namespace leetcode::integer_replacement {

namespace {
int recurse_count(std::unordered_map<int, int>& map, int num) {
    if (map.find(num) != map.end()) {
        return map[num];
    }
    int count = 0, cp_num = num;
    while (num != 1 && num % 2 == 0) {
        num /= 2;
        ++count;
    }
    map[cp_num] = num == 1 ? count : count + 1 + std::min(recurse_count(map, num - 1), recurse_count(map, num + 1));
    return map[cp_num];
}
}  // namespace

int Solution::integer_replacement(int n) {
    std::unordered_map<int, int> map;
    map.insert({1, 0});
    map.insert({std::numeric_limits<int>::max(), 32});
    return recurse_count(map, n);
}

}  // namespace leetcode::integer_replacement
