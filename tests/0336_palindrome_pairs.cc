#include "0336_palindrome_pairs.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <algorithm>

using namespace leetcode::palindrome_pairs;

namespace {
bool sort_cmp(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1[0] == v2[0] ? v1[1] < v2[1] : v1[0] < v2[0];
}
}  // namespace

TEST(PALINDROME_PAIRS, EXAMPLE_TEST) {
    auto result1 = Solution::palindrome_pairs({"abcd", "dcba", "lls", "s", "sssll"});
    std::sort(result1.begin(), result1.end(), sort_cmp);
    ASSERT_THAT(result1[0], testing::ElementsAre(0, 1));
    ASSERT_THAT(result1[1], testing::ElementsAre(1, 0));
    ASSERT_THAT(result1[2], testing::ElementsAre(2, 4));
    ASSERT_THAT(result1[3], testing::ElementsAre(3, 2));

    auto result2 = Solution::palindrome_pairs({"a", ""});
    std::sort(result2.begin(), result2.end(), sort_cmp);
    ASSERT_THAT(result2[0], testing::ElementsAre(0, 1));
    ASSERT_THAT(result2[1], testing::ElementsAre(1, 0));

    auto result3 = Solution::palindrome_pairs({"a", "abc", "aba", ""});
    std::sort(result3.begin(), result3.end(), sort_cmp);
    ASSERT_THAT(result3[0], testing::ElementsAre(0, 3));
    ASSERT_THAT(result3[1], testing::ElementsAre(2, 3));
    ASSERT_THAT(result3[2], testing::ElementsAre(3, 0));
    ASSERT_THAT(result3[3], testing::ElementsAre(3, 2));
}
