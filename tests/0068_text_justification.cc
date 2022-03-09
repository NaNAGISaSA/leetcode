#include <gmock/gmock.h>

#include "0068_text_justification.h"

using namespace leetcode::text_justification;

TEST(TEXT_JUSTIFICATION, EXAMPLE_TEST) {
    std::vector<std::string> words1{"This", "is", "an", "example", "of", "text", "justification."},
        words2{"What", "must", "be", "acknowledgment", "shall", "be"};
    auto res1 = Solution::full_justify(words1, 16);
    ASSERT_EQ(res1.size(), 3);
    ASSERT_EQ(res1[0], "This    is    an");
    ASSERT_EQ(res1[1], "example  of text");
    ASSERT_EQ(res1[2], "justification.  ");
    auto res2 = Solution::full_justify(words2, 16);
    ASSERT_EQ(res2.size(), 3);
    ASSERT_EQ(res2[0], "What   must   be");
    ASSERT_EQ(res2[1], "acknowledgment  ");
    ASSERT_EQ(res2[2], "shall be        ");
    // clang-format off
    std::vector<std::string> words3{"Science", "is", "what", "we", "understand", "well", "enough", "to",
        "explain", "to", "a", "computer.", "Art", "is", "everything", "else", "we", "do"};
    // clang-format on
    auto res3 = Solution::full_justify(words3, 20);
    ASSERT_EQ(res3.size(), 6);
    ASSERT_EQ(res3[0], "Science  is  what we");
    ASSERT_EQ(res3[1], "understand      well");
    ASSERT_EQ(res3[2], "enough to explain to");
    ASSERT_EQ(res3[3], "a  computer.  Art is");
    ASSERT_EQ(res3[4], "everything  else  we");
    ASSERT_EQ(res3[5], "do                  ");
}
