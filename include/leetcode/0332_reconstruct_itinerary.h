#ifndef LEETCODE_RECONSTRUCT_ITINERARY_H_
#define LEETCODE_RECONSTRUCT_ITINERARY_H_

#include <string>
#include <vector>

namespace leetcode::reconstruct_itinerary {

class Solution {
public:
    static std::vector<std::string> find_itinerary(const std::vector<std::vector<std::string>>& tickets);
};

}  // namespace leetcode::reconstruct_itinerary

#endif