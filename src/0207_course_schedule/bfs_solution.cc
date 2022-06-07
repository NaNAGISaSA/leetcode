#include "0207_course_schedule.h"

namespace leetcode::course_schedule::bfs {

/*
本题可以转化为：有向图是否成环。
如何理解下面的算法：
in_degree vector可以看做是每一个节点当前的依赖数量，在以下算法中，不断寻找
当前没有任何依赖的节点，并解除其它节点对其的依赖。
重复以上步骤N次（N为总节点数），如果能够成功，则说明有向图无环；如果不能够
成功，则说明当前剩余的M个节点存在相互依赖，有向图有环。
*/
bool Solution::can_finish(int num_courses, const std::vector<std::vector<int>>& prerequisites) {
    std::vector<std::vector<int>> graph(num_courses, std::vector<int>{});
    std::vector<int> in_degree(num_courses, 0);
    for (auto& vec : prerequisites) {
        graph[vec[1]].push_back(vec[0]);
        ++in_degree[vec[0]];
    }
    for (int i = 0; i < num_courses; ++i) {
        int idx = 0;
        for (; idx < num_courses; ++idx) {
            if (in_degree[idx] == 0) {
                --in_degree[idx];
                break;
            }
        }
        if (idx == num_courses) {
            return false;
        }
        for (auto& vertex_idx : graph[idx]) {
            --in_degree[vertex_idx];
        }
    }
    return true;
}

}  // namespace leetcode::course_schedule::bfs
