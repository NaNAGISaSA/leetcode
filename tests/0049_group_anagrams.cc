#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "0049_group_anagrams.h"

using namespace leetcode::group_anagrams;

TEST(GROUP_ANAGRAMS, EXAMPLE_TEST) {
    std::vector<std::string> strs1{"eat", "tea", "tan", "ate", "nat", "bat"}, strs2{""};
    auto result1 = Solution::group_anagrams(strs1);
    ASSERT_EQ(result1.size(), 3);
    ASSERT_THAT(result1[0], testing::ElementsAre("bat"));
    ASSERT_THAT(result1[1], testing::ElementsAre("tan", "nat"));
    ASSERT_THAT(result1[2], testing::ElementsAre("eat", "tea", "ate"));
    auto result2 = Solution::group_anagrams(strs2);
    ASSERT_EQ(result2.size(), 1);
    ASSERT_THAT(result2[0], testing::ElementsAre(""));
}
