#ifndef SERIALIZE_AND_DESERIALIZE_BINARY_TREE_SERIALIZE_AND_DESERIALIZE_UTILS_H_
#define SERIALIZE_AND_DESERIALIZE_BINARY_TREE_SERIALIZE_AND_DESERIALIZE_UTILS_H_

#include <string>
#include <vector>

namespace leetcode::serialize_and_deserialize_binary_tree {

static const char SPLITER = '#';
static const char NULLPTR_MARK = '.';
static const std::string SPLITER_STR = "#";
static const std::string NULLPTR_MARK_STR = ".";

static std::vector<std::string> split(const std::string& str) {
    std::vector<std::string> result;
    size_t begin = 0, end = 0, str_size = str.size();
    while (end < str_size) {
        while (end < str_size && str[end] != SPLITER) {
            ++end;
        }
        result.push_back(str.substr(begin, end - begin));
        begin = ++end;
    }
    return result;
}

}  // namespace leetcode::serialize_and_deserialize_binary_tree

#endif