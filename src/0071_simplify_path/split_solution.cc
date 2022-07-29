#include <vector>

#include "0071_simplify_path.h"

namespace leetcode::simplify_path::split {

std::string Solution::simplify_path(const std::string& path) {
    auto split = [&path]() {
        size_t start = 0, end = 0;
        std::vector<std::string> vec;
        while ((end = path.find("/", start)) != std::string::npos) {
            vec.push_back(path.substr(start, end - start));
            start = end + 1;
        }
        vec.push_back(path.substr(start));
        return vec;
    };

    auto vec = split();
    std::vector<std::string> res;
    for (auto& str : vec) {
        if (str == ".." && !res.empty()) {
            res.pop_back();
        } else if (str != ".." && str != "." && !str.empty()) {
            res.push_back(std::move(str));
        }
    }

    if (res.size() == 0) {
        return "/";
    }

    std::string ret;
    for (auto& str : res) {
        ret.append(1, '/').append(std::move(str));
    }
    return ret;
}

}  // namespace leetcode::simplify_path::split