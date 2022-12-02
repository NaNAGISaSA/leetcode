#include "0399_evaluate_division.h"

#include <queue>
#include <unordered_map>
#include <unordered_set>

namespace leetcode::evaluate_division {

namespace {
using graph_t = std::unordered_map<std::string, std::vector<std::pair<std::string, double>>>;
}

std::vector<double> Solution::calc_equation(const std::vector<std::vector<std::string>>& equations,
                                            const std::vector<double>& values,
                                            const std::vector<std::vector<std::string>>& queries) {
    graph_t graph;

    for (size_t i = 0, e = values.size(); i < e; ++i) {
        graph[equations[i][0]].push_back({equations[i][1], values[i]});
        graph[equations[i][1]].push_back({equations[i][0], 1.0 / values[i]});
    }

    std::vector<double> result;
    result.reserve(queries.size());

    auto bfs = [&graph](std::string start, std::string end) {
        std::unordered_map<std::string, std::pair<std::string, double>> parent_map;
        std::queue<std::string> nodes;
        std::unordered_set<std::string> visited;
        nodes.push(start);
        bool arrive_end = false;
        while (!nodes.empty()) {
            std::string front = std::move(nodes.front());
            nodes.pop();
            if (visited.find(front) != visited.end()) {
                continue;
            }
            visited.insert(front);
            auto& children = graph[front];
            for (const auto& child : children) {
                nodes.push(child.first);
                parent_map.insert({child.first, {front, child.second}});
            }
            if (parent_map.find(end) != parent_map.end()) {
                arrive_end = true;
                break;
            }
        }

        if (!arrive_end) {
            return -1.0;
        }

        double result = 1.0;
        while (end != start) {
            result *= parent_map[end].second;
            end = std::move(parent_map[end].first);
        }

        return result;
    };

    for (size_t i = 0, e = queries.size(); i < e; ++i) {
        if (graph.find(queries[i][0]) == graph.end() || graph.find(queries[i][1]) == graph.end()) {
            result.push_back(-1.0);
            continue;
        }
        result.push_back(queries[i][0] == queries[i][1] ? 1.0 : bfs(queries[i][0], queries[i][1]));
    }

    return result;
}

}  // namespace leetcode::evaluate_division
