#include "0133_clone_graph.h"

namespace leetcode::clone_graph {

Node::Node() : val(0), neighbors({}) {
}

Node::Node(int _val) : val(_val), neighbors({}) {
}

Node::Node(int _val, std::vector<Node*> _neighbors) : val(_val), neighbors(_neighbors) {
}

}  // namespace leetcode::clone_graph
