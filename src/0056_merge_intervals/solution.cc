#include <algorithm>

#include "0056_merge_intervals.h"

namespace leetcode::merge_intervals {

std::vector<std::vector<int>> Solution::merge(std::vector<std::vector<int>>& intervals) {
    std::sort(intervals.begin(), intervals.end(), [](const std::vector<int>& vec0, const std::vector<int>& vec1) {
        return vec0[0] < vec1[0];
    });
    std::vector<std::vector<int>> result;
    result.reserve(intervals.size());
    result.push_back(std::move(intervals[0]));
    for (int i = 1; i < static_cast<int>(intervals.size()); ++i) {
        if (result.back()[1] >= intervals[i][0]) {
            result.back()[1] = std::max(result.back()[1], intervals[i][1]);
        } else {
            result.push_back(std::move(intervals[i]));
        }
    }
    return result;
}

}  // namespace leetcode::merge_intervals
