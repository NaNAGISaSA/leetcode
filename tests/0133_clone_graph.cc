#include <gtest/gtest.h>

#include "0133_clone_graph.h"

using namespace leetcode::clone_graph;

TEST(CLONE_GRAPH, BFS_METHOD_TEST) {
    Node node1(1), node2(2), node3(3), node4(4);
    node1.neighbors.push_back(&node2);
    node1.neighbors.push_back(&node4);
    node3.neighbors.push_back(&node2);
    node3.neighbors.push_back(&node4);
    node2.neighbors.push_back(&node1);
    node2.neighbors.push_back(&node3);
    node4.neighbors.push_back(&node1);
    node4.neighbors.push_back(&node3);
    auto new_graph = bfs::Solution::clone_graph(&node1);
    ASSERT_EQ(new_graph->val, 1);
    ASSERT_EQ(new_graph->neighbors[0]->val, 2);
    ASSERT_EQ(new_graph->neighbors[1]->val, 4);
    ASSERT_EQ(new_graph->neighbors[0]->neighbors[0], new_graph);
    ASSERT_EQ(new_graph->neighbors[1]->neighbors[0], new_graph);
    ASSERT_EQ(new_graph->neighbors[0]->neighbors[1]->val, 3);
    ASSERT_EQ(new_graph->neighbors[1]->neighbors[1]->val, 3);
}

TEST(CLONE_GRAPH, DFS_METHOD_TEST) {
    Node node1(1), node2(2), node3(3), node4(4);
    node1.neighbors.push_back(&node2);
    node1.neighbors.push_back(&node4);
    node3.neighbors.push_back(&node2);
    node3.neighbors.push_back(&node4);
    node2.neighbors.push_back(&node1);
    node2.neighbors.push_back(&node3);
    node4.neighbors.push_back(&node1);
    node4.neighbors.push_back(&node3);
    auto new_graph = dfs::Solution::clone_graph(&node1);
    ASSERT_EQ(new_graph->val, 1);
    ASSERT_EQ(new_graph->neighbors[0]->val, 2);
    ASSERT_EQ(new_graph->neighbors[1]->val, 4);
    ASSERT_EQ(new_graph->neighbors[0]->neighbors[0], new_graph);
    ASSERT_EQ(new_graph->neighbors[1]->neighbors[0], new_graph);
    ASSERT_EQ(new_graph->neighbors[0]->neighbors[1]->val, 3);
    ASSERT_EQ(new_graph->neighbors[1]->neighbors[1]->val, 3);
}
