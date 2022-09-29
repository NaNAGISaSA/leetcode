#include "0355_design_twitter.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

using namespace leetcode::design_twitter;

TEST(DESIGN_TWITTER, EXAMPLE_TEST) {
    Twitter twitter;
    twitter.postTweet(1, 5);
    ASSERT_THAT(twitter.getNewsFeed(1), testing::ElementsAre(5));
    twitter.follow(1, 2);
    twitter.postTweet(2, 6);
    twitter.postTweet(2, 4);
    ASSERT_THAT(twitter.getNewsFeed(1), testing::ElementsAre(4, 6, 5));
    twitter.unfollow(1, 2);
    ASSERT_THAT(twitter.getNewsFeed(1), testing::ElementsAre(5));
    twitter.getNewsFeed(1);
}
