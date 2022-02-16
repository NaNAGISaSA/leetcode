#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "0049_group_anagrams.h"

using namespace leetcode::group_anagrams;

namespace {
void assert_result(const std::vector<std::string>& vec) {
    if (vec.size() == 1) {
        ASSERT_THAT(vec, testing::ElementsAre("bat"));
    } else if (vec.size() == 2) {
        ASSERT_THAT(vec, testing::ElementsAre("tan", "nat"));
    } else {
        ASSERT_THAT(vec, testing::ElementsAre("eat", "tea", "ate"));
    }
}
}  // namespace

TEST(GROUP_ANAGRAMS, SORT_SOLUTION_TEST) {
    std::vector<std::string> strs1{"eat", "tea", "tan", "ate", "nat", "bat"}, strs2{""};
    auto result1 = sort::Solution::group_anagrams(strs1);
    ASSERT_EQ(result1.size(), 3);
    assert_result(result1[0]);
    assert_result(result1[1]);
    assert_result(result1[2]);
    auto result2 = sort::Solution::group_anagrams(strs2);
    ASSERT_EQ(result2.size(), 1);
    ASSERT_THAT(result2[0], testing::ElementsAre(""));
}

TEST(GROUP_ANAGRAMS, ENCODE_SOLUTION_TEST) {
    std::vector<std::string> strs1{"eat", "tea", "tan", "ate", "nat", "bat"}, strs2{""};
    auto result1 = encode::Solution::group_anagrams(strs1);
    ASSERT_EQ(result1.size(), 3);
    assert_result(result1[0]);
    assert_result(result1[1]);
    assert_result(result1[2]);
    auto result2 = encode::Solution::group_anagrams(strs2);
    ASSERT_EQ(result2.size(), 1);
    ASSERT_THAT(result2[0], testing::ElementsAre(""));
}
