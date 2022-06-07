#include "0207_course_schedule.h"

#include <queue>
#include <unordered_map>

namespace leetcode::course_schedule::kahn {

bool Solution::can_finish(int num_courses, const std::vector<std::vector<int>>& prerequisites) {
    std::unordered_map<int, std::vector<int>> graph;
    std::vector<int> in_degree(num_courses, 0);
    for (auto& pair : prerequisites) {
        graph[pair[1]].push_back(pair[0]);
        ++in_degree[pair[0]];
    }
    std::queue<int> queue;
    for (int i = 0; i < num_courses; ++i) {
        if (in_degree[i] == 0) {
            queue.push(i);
        }
    }
    num_courses -= static_cast<int>(queue.size());
    while (!queue.empty()) {
        int vertex = queue.front();
        queue.pop();
        for (auto& v : graph[vertex]) {
            if (--in_degree[v] == 0) {
                queue.push(v);
                --num_courses;
            }
        }
    }
    return num_courses == 0;
}

}  // namespace leetcode::course_schedule::kahn
