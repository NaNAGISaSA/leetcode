#include "0028_implement_strstr.h"

namespace leetcode::implement_strstr {

// TODO: use KMP algorithm to rewrite this solution
int Solution::find_str(const std::string& haystack, const std::string& needle) {
    if (needle.empty()) {
        return 0;
    }
    auto result = haystack.find(needle);
    return result == std::string::npos ? -1 : static_cast<int>(result);
}

}  // namespace leetcode::implement_strstr