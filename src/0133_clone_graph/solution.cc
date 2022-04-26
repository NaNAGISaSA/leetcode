#include <queue>
#include <unordered_map>

#include "0133_clone_graph.h"

namespace leetcode::clone_graph {

Node::Node() : val(0), neighbors({}) {
}

Node::Node(int _val) : val(_val), neighbors({}) {
}

Node::Node(int _val, std::vector<Node*> _neighbors) : val(_val), neighbors(_neighbors) {
}

Node* Solution::clone_graph(Node* node) {
    if (node == nullptr) {
        return node;
    }
    std::unordered_map<int, Node*> node_map;
    node_map.insert({node->val, new Node(node->val)});
    std::queue<Node*> to_visit;
    to_visit.push(node);
    while (!to_visit.empty()) {
        Node* curr = to_visit.front();
        to_visit.pop();
        for (Node* neighbor : curr->neighbors) {
            if (node_map.find(neighbor->val) == node_map.end()) {
                node_map.insert({neighbor->val, new Node(neighbor->val)});
                to_visit.push(neighbor);
            }
            node_map.at(neighbor->val)->neighbors.push_back(node_map.at(curr->val));
        }
    }
    return node_map[node->val];
}

}  // namespace leetcode::clone_graph
