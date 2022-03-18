#include <vector>

#include "0071_simplify_path.h"

namespace leetcode::simplify_path::first {

std::string Solution::simplify_path(const std::string& path) {
    // the path starts with a slash '/', and is a valid absolute Unix path.
    size_t start = 0, end = 0, path_size = path.size();
    std::vector<std::string> result;
    while (end < path_size) {
        while (start < path_size && path[start] == '/') {
            ++start;
        }
        if (start == path_size) {
            break;
        }
        end = start;
        while (end < path_size && path[end] != '/') {
            ++end;
        }
        std::string ele = path.substr(start, end - start);
        if (ele == ".." && !result.empty()) {
            result.pop_back();
        } else if (ele != "." && ele != "..") {
            result.push_back(std::move(ele));
        }
        start = end;
    }
    if (result.size() == 0) {
        return "/";
    }
    std::string res;
    for (auto& str : result) {
        res += "/";
        res += std::move(str);
    }
    return res;
}

}  // namespace leetcode::simplify_path::first
