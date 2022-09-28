#include "0354_russian_doll_envelopes.h"

#include <algorithm>

namespace leetcode::russian_doll_envelopes {

/*
 * 将输入按照width升序，height降序的顺序排列之后，可将问题转化为一维的问题
 * 对于height，可以使用寻找最长递增子序列的方法，将整体的时间复杂度降低到O(NlogN)
 * 例子：(1,3), (3,5), (6,8), (6,7), (8,4), (9,5)
 */
int Solution::max_envelopes(std::vector<std::vector<int>>& envelopes) {
    std::sort(envelopes.begin(), envelopes.end(), [](const std::vector<int>& e1, const std::vector<int>& e2) {
        return e1[0] == e2[0] ? e1[1] > e2[1] : e1[0] < e2[0];
    });

    std::vector<int> lis{envelopes[0][1]};
    int lis_size = 1;

    auto binary_search = [&lis](int target, int end) {
        int begin = 0, middle = 0;
        while (begin <= end) {
            middle = begin + (end - begin) / 2;
            if (lis[middle] == target) {
                return middle;
            } else if (lis[middle] < target) {
                begin = middle + 1;
            } else {
                end = middle - 1;
            }
        }
        return begin;
    };

    for (size_t i = 1, end = envelopes.size(); i < end; ++i) {
        int idx = binary_search(envelopes[i][1], lis_size - 1);
        if (idx == lis_size) {
            lis.push_back(envelopes[i][1]);
            ++lis_size;
        } else {
            lis[idx] = envelopes[i][1];
        }
    }

    return static_cast<int>(lis.size());
}

}  // namespace leetcode::russian_doll_envelopes
