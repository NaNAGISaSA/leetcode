#include "0354_russian_doll_envelopes.h"

#include <gtest/gtest.h>

using namespace leetcode::russian_doll_envelopes;

TEST(RUSSIAN_DOLL_ENVELOPES, EXAMPLE_TEST) {
    std::vector<std::vector<int>> envelopes1{{5, 5}, {6, 4}, {6, 7}, {2, 3}, {3, 4}},
        envelopes2{{1, 1}, {1, 1}, {1, 1}};
    ASSERT_EQ(Solution::max_envelopes(envelopes1), 4);
    ASSERT_EQ(Solution::max_envelopes(envelopes2), 1);
}
