#include "0391_perfect_rectangle.h"

#include <limits>
#include <string>
#include <unordered_map>

namespace leetcode::perfect_rectangle {

bool Solution::is_rectangle_cover(const std::vector<std::vector<int>>& rectangles) {
    int left_most = std::numeric_limits<int>::max(), bottom_most = left_most;
    int right_most = std::numeric_limits<int>::min(), top_most = right_most;
    long area = 0;

    auto make_key = [](int lr, int tb) { return std::to_string(lr) + "_" + std::to_string(tb); };

    std::unordered_map<std::string, int> count_map;
    for (const auto& rectangle : rectangles) {
        int left = rectangle[0], bottom = rectangle[1], right = rectangle[2], top = rectangle[3];
        left_most = std::min(left, left_most);
        bottom_most = std::min(bottom, bottom_most);
        right_most = std::max(right, right_most);
        top_most = std::max(top, top_most);
        area += static_cast<long>(right - left) * (top - bottom);
        ++count_map[make_key(left, top)];
        ++count_map[make_key(left, bottom)];
        ++count_map[make_key(right, top)];
        ++count_map[make_key(right, bottom)];
    }

    area -= static_cast<long>(right_most - left_most) * (top_most - bottom_most);
    if (area != 0) {
        return false;
    }

    if (count_map[make_key(left_most, top_most)] != 1 || count_map[make_key(left_most, bottom_most)] != 1 ||
        count_map[make_key(right_most, top_most)] != 1 || count_map[make_key(right_most, bottom_most)] != 1) {
        return false;
    }
    count_map.erase(make_key(left_most, top_most));
    count_map.erase(make_key(left_most, bottom_most));
    count_map.erase(make_key(right_most, top_most));
    count_map.erase(make_key(right_most, bottom_most));

    for (auto i = count_map.begin(), e = count_map.end(); i != e; ++i) {
        if (i->second % 2 != 0) {
            return false;
        }
    }

    return true;
}

}  // namespace leetcode::perfect_rectangle
