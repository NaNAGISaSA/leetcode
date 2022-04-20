#include <queue>
#include <unordered_set>

#include "0127_word_ladder.h"

namespace leetcode::word_ladder {

int Solution::ladder_length(std::string begin_word, std::string end_word, std::vector<std::string>& word_list) {
    // beginWord != endWord
    // beginWord, endWord, and wordList[i] consist of lowercase English letters.
    std::unordered_set<std::string> word_set(word_list.begin(), word_list.end());
    std::unordered_set<std::string> visited;
    std::queue<std::string> queue;
    queue.push(begin_word);
    int distance = 1;
    while (!queue.empty()) {
        int node_num = static_cast<int>(queue.size());
        while (node_num-- != 0) {
            std::string curr = queue.front();
            queue.pop();
            if (curr == end_word) {
                return distance;
            }
            // 下面的判断能够减少巨量的运行时间，是BFS没有Time Limit Exceeded的关键
            if (visited.find(curr) != visited.end()) {
                continue;
            }
            visited.insert(curr);
            for (size_t i = 0; i < curr.size(); ++i) {
                char tmp = curr[i];
                for (char chr = 'a'; chr <= 'z'; ++chr) {
                    curr[i] = chr;
                    if (visited.find(curr) == visited.end() && word_set.find(curr) != word_set.end()) {
                        queue.push(curr);
                    }
                }
                curr[i] = tmp;
            }
        }
        ++distance;
    }
    return 0;
}

}  // namespace leetcode::word_ladder
