#include "0406_queue_reconstruction_by_height.h"

#include <algorithm>

namespace leetcode::queue_reconstruction_by_height {

std::vector<std::vector<int>> Solution::reconstruct_queue(std::vector<std::vector<int>>& people) {
    std::sort(people.begin(), people.end(), [](const std::vector<int>& vec1, const std::vector<int>& vec2) {
        return vec1[0] > vec2[0] || (vec1[0] == vec2[0] && vec1[1] < vec2[1]);
    });
    std::vector<std::vector<int>> result;
    result.reserve(people.size());
    for (auto& ele : people) {
        result.insert(result.begin() + ele[1], std::move(ele));
    }
    return result;
}

}  // namespace leetcode::queue_reconstruction_by_height
