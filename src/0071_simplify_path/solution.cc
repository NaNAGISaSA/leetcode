#include <vector>

#include "0071_simplify_path.h"

namespace leetcode::simplify_path {

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
        if (path[start] == '.') {
            while (end < path_size && path[end] == '.') {
                ++end;
            }
            if (end == path_size || path[end] == '/') {
                if (end - start == 2 && result.size() > 0) {
                    result.pop_back();
                } else if (end - start > 2) {
                    result.push_back(path.substr(start, end - start));
                }
            } else {
                while (end < path_size && path[end] != '/') {
                    ++end;
                }
                result.push_back(path.substr(start, end - start));
            }
        } else {
            while (end < path_size && path[end] != '/') {
                ++end;
            }
            result.push_back(path.substr(start, end - start));
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

}  // namespace leetcode::simplify_path
