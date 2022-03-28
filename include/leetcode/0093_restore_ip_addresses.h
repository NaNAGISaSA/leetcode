#ifndef _LEETCODE_RESTORE_IP_ADDRESSES_H_
#define _LEETCODE_RESTORE_IP_ADDRESSES_H_

#include <string>
#include <vector>

namespace leetcode::restore_ip_addresses {

#define SOLUTION_CLASS_DECLARATION                                                  \
    class Solution {                                                                \
    public:                                                                         \
        static std::vector<std::string> restore_ip_addresses(const std::string& s); \
    }

namespace backtrace {
SOLUTION_CLASS_DECLARATION;
}

namespace direct {
SOLUTION_CLASS_DECLARATION;
}

}  // namespace leetcode::restore_ip_addresses

#endif