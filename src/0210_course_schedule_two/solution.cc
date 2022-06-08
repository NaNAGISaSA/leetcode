#include "0210_course_schedule_two.h"

#include <queue>
#include <unordered_map>

namespace leetcode::course_schedule_two {

std::vector<int> Solution::find_order(int num_courses, const std::vector<std::vector<int>>& prerequisites) {
    std::unordered_map<int, std::vector<int>> graph;
    std::vector<int> in_degrees(num_courses, 0);
    for (auto& pair : prerequisites) {
        graph[pair[1]].push_back(pair[0]);
        ++in_degrees[pair[0]];
    }
    std::vector<int> result;
    result.reserve(num_courses);
    std::queue<int> queue;
    for (int i = 0; i < num_courses; ++i) {
        if (in_degrees[i] == 0) {
            result.push_back(i);
            queue.push(i);
        }
    }
    while (!queue.empty()) {
        int vertex = queue.front();
        queue.pop();
        for (auto& v : graph[vertex]) {
            if (--in_degrees[v] == 0) {
                result.push_back(v);
                queue.push(v);
            }
        }
    }
    return static_cast<int>(result.size()) == num_courses ? result : std::vector<int>{};
}

}  // namespace leetcode::course_schedule_two
