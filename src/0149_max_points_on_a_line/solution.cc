#include "0149_max_points_on_a_line.h"

#include <algorithm>
#include <string>
#include <unordered_map>

namespace leetcode::max_points_on_a_line {

namespace {
int get_gcd(int a, int b) {
    return b == 0 ? a : get_gcd(b, a % b);
}
}  // namespace

int Solution::max_points(const std::vector<std::vector<int>>& points) {
    if (points.size() < 3) {
        return static_cast<int>(points.size());
    }
    std::unordered_map<std::string, int> map;
    int result = 2;
    for (size_t i = 0; i < points.size(); ++i) {
        map.clear();
        for (size_t j = i + 1; j < points.size(); ++j) {
            int x = points[i][0] - points[j][0];
            int y = points[i][1] - points[j][1];
            int gcd = get_gcd(x, y);
            x /= gcd;
            y /= gcd;
            std::string tmp = std::to_string(x) + "_" + std::to_string(y);
            if (map.find(tmp) != map.end()) {
                ++map[tmp];
                result = std::max(result, map[tmp]);
            } else {
                map.insert({std::move(tmp), 2});
            }
        }
    }
    return result;
}

}  // namespace leetcode::max_points_on_a_line
