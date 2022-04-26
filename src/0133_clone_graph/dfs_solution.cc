#include <unordered_map>

#include "0133_clone_graph.h"

namespace leetcode::clone_graph::dfs {

namespace {
Node* dfs(Node* node, std::unordered_map<Node*, Node*>& node_map) {
    if (node_map.find(node) != node_map.end()) {
        return node_map[node];
    }
    node_map.insert(std::pair(node, new Node(node->val)));
    for (Node* neighbor : node->neighbors) {
        node_map[node]->neighbors.push_back(dfs(neighbor, node_map));
    }
    return node_map[node];
}
}  // namespace

Node* Solution::clone_graph(Node* node) {
    if (node == nullptr) {
        return node;
    }
    std::unordered_map<Node*, Node*> node_map;
    return dfs(node, node_map);
}

}  // namespace leetcode::clone_graph::dfs
