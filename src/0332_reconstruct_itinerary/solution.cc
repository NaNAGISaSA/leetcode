#include "0332_reconstruct_itinerary.h"

#include <functional>
#include <queue>
#include <unordered_map>

namespace leetcode::reconstruct_itinerary {

namespace {
using min_heap_type = std::priority_queue<std::string, std::vector<std::string>, std::greater<std::string>>;

/*
 * 这里的dfs算法的思想很有意思，首先找到字典序最小的序列，直到卡住，然后向前回溯，
 * 如果前面的节点还有其它路径，就给它们按照剩下的字典序merge过来并组成最终的路径。
 */
void dfs(std::unordered_map<std::string, min_heap_type>& graph,
         std::vector<std::string>& result,
         const std::string& curr_node) {
    if (graph.find(curr_node) != graph.end()) {
        auto& min_heap = graph.at(curr_node);
        while (!min_heap.empty()) {
            std::string node = std::move(min_heap.top());
            min_heap.pop();
            dfs(graph, result, node);
        }
    }
    result.insert(result.begin(), curr_node);
}
}  // namespace

std::vector<std::string> Solution::find_itinerary(const std::vector<std::vector<std::string>>& tickets) {
    std::unordered_map<std::string, min_heap_type> graph;
    for (const auto& node : tickets) {
        if (graph.find(node[0]) == graph.end()) {
            min_heap_type min_heap;
            min_heap.push(node[1]);
            graph.insert({node[0], std::move(min_heap)});
        } else {
            graph.at(node[0]).push(node[1]);
        }
    }
    std::vector<std::string> result;
    result.reserve(2 * tickets.size());
    dfs(graph, result, "JFK");
    return result;
}

}  // namespace leetcode::reconstruct_itinerary
