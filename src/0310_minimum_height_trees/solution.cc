#include "0310_minimum_height_trees.h"

#include <unordered_set>

namespace leetcode::minimum_height_trees {

std::vector<int> Solution::find_min_height_trees(int n, const std::vector<std::vector<int>>& edges) {
    std::vector<std::unordered_set<int>> graph(n, std::unordered_set<int>{});
    for (const auto& pair : edges) {
        graph[pair[0]].insert(pair[1]);
        graph[pair[1]].insert(pair[0]);
    }
    std::vector<int> leafs;
    for (int i = 0; i < n; ++i) {
        if (graph[i].size() <= 1) {
            leafs.push_back(i);
        }
    }
    while (n > 2) {
        n -= static_cast<int>(leafs.size());
        std::vector<int> next_leafs;
        for (const auto& num : leafs) {
            int connect_node_num = *graph[num].begin();
            graph[connect_node_num].erase(num);
            if (graph[connect_node_num].size() == 1) {
                next_leafs.push_back(connect_node_num);
            }
        }
        leafs = std::move(next_leafs);
    }
    return leafs;
}

}  // namespace leetcode::minimum_height_trees
