#include <algorithm>

#include "0057_insert_interval.h"

namespace leetcode::insert_intervals {

std::vector<std::vector<int>> Solution::insert(std::vector<std::vector<int>>& intervals,
                                               std::vector<int>& new_interval) {
    std::vector<std::vector<int>> result;
    for (size_t idx = 0; idx < intervals.size(); ++idx) {
        if (new_interval[0] > intervals[idx][1]) {
            result.push_back(std::move(intervals[idx]));
            continue;
        }
        if (new_interval[1] < intervals[idx][0]) {
            result.push_back(std::move(new_interval));
            while (idx < intervals.size()) {
                result.push_back(std::move(intervals[idx++]));
            }
            return result;
        }
        new_interval[0] = std::min(new_interval[0], intervals[idx][0]);
        new_interval[1] = std::max(new_interval[1], intervals[idx][1]);
    }
    result.push_back(std::move(new_interval));
    return result;
}

}  // namespace leetcode::insert_intervals
