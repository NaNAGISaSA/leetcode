#include "0279_perfect_squares.h"

#include <queue>
#include <vector>

namespace leetcode::perfect_squares::bfs {

int Solution::num_squares(int n) {
    std::vector<int> add_ons;
    std::vector<bool> visited(n + 1, false);
    for (int i = 1; i * i <= n; ++i) {
        add_ons.push_back(i * i);
        visited[i * i] = true;
    }
    if (visited[n]) {
        return 1;
    }
    std::queue<int> queue;
    for (auto& num : add_ons) {
        queue.push(num);
    }
    size_t node_num = queue.size();
    int result = 1;
    while (!queue.empty()) {
        int front = queue.front();
        queue.pop();
        for (auto& num : add_ons) {
            int curr = num + front;
            if (curr <= n && !visited[curr]) {
                queue.push(curr);
                visited[curr] = true;
            }
        }
        if (--node_num == 0) {
            ++result;
            node_num = queue.size();
            if (visited[n]) {
                break;
            }
        }
    }
    return result;
}

}  // namespace leetcode::perfect_squares::bfs
