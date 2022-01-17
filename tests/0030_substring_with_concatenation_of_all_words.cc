#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "0030_substring_with_concatenation_of_all_words.h"

using namespace leetcode::substring_with_concatenation_of_all_words;

TEST(SUBSTRING_WITH_CONCATENATION_OF_ALL_WORDS, EXAMPLE_TEST) {
    ASSERT_THAT(Solution::find_substring("barfoothefoobarman", {"foo", "bar"}), testing::ElementsAre(0, 9));
    ASSERT_THAT(Solution::find_substring("barfoofoobarthefoobarman", {"foo", "bar", "the"}),
                testing::ElementsAre(6, 9, 12));
    ASSERT_THAT(Solution::find_substring("lingmindraboofooowingdingbarrwingmonkeypoundcake",
                                         {"fooo", "barr", "wing", "ding", "wing"}),
                testing::ElementsAre(13));
    ASSERT_EQ(Solution::find_substring("wordgoodgoodgoodbestword", {"word", "good", "best", "word"}).size(), 0);
}
