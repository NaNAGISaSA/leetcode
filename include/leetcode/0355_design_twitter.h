#ifndef LEETCODE_DESIGN_TWITTER_H_
#define LEETCODE_DESIGN_TWITTER_H_

#include <memory>
#include <vector>

namespace leetcode::design_twitter {

class Twitter {
public:
    Twitter();
    ~Twitter();

    void postTweet(int userId, int tweetId);
    std::vector<int> getNewsFeed(int userId);
    void follow(int followerId, int followeeId);
    void unfollow(int followerId, int followeeId);

private:
    class Impl;
    std::unique_ptr<Impl> impl;
};

}  // namespace leetcode::design_twitter

#endif