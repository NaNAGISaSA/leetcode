#ifndef _LEETCODE_CLONE_GRAPH_H_
#define _LEETCODE_CLONE_GRAPH_H_

#include <vector>

namespace leetcode::clone_graph {

struct Node {
    Node();
    Node(int _val);
    Node(int _val, std::vector<Node*> _neighbors);

    int val;
    std::vector<Node*> neighbors;
};

class Solution {
public:
    static Node* clone_graph(Node* node);
};

}  // namespace leetcode::clone_graph

#endif