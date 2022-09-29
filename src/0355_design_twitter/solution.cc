#include "0355_design_twitter.h"

#include <forward_list>
#include <queue>
#include <tuple>
#include <unordered_map>
#include <unordered_set>

namespace leetcode::design_twitter {

class Twitter::Impl {
public:
    using listIt = std::forward_list<std::pair<int, int>>::iterator;

    Impl() : followMap{}, tweetMap{}, timestamp{0} {
    }

    void postTweet(int userId, int tweetId) {
        if (tweetMap.find(userId) == tweetMap.end()) {
            tweetMap.insert({userId, {}});
        }
        tweetMap[userId].push_front({timestamp++, tweetId});
    }

    std::vector<int> getNewsFeed(int userId) {
        follow(userId, userId);

        // {userId, {tweetList begin, tweetList end}}
        std::unordered_map<int, std::pair<listIt, listIt>> listItMap;
        for (auto followee : followMap[userId]) {
            if (tweetMap.find(followee) != tweetMap.end()) {
                listItMap.insert({followee, {tweetMap[followee].begin(), tweetMap[followee].end()}});
            }
        }

        auto cmp = [](const std::tuple<int, int, int>& t1, const std::tuple<int, int, int>& t2) {
            return std::get<1>(t1) < std::get<1>(t2);
        };
        // {userId, timestamp, tweetId}
        std::priority_queue<std::tuple<int, int, int>, std::vector<std::tuple<int, int, int>>, decltype(cmp)> maxHeap(
            cmp);
        for (auto it = listItMap.begin(), it_end = listItMap.end(); it != it_end; ++it) {
            maxHeap.push({it->first, it->second.first->first, it->second.first->second});
            ++(it->second.first);
        }

        std::vector<int> result;
        int count = 0;
        while (count++ < 10 && !maxHeap.empty()) {
            auto top = std::move(maxHeap.top());
            maxHeap.pop();
            result.push_back(std::get<2>(top));
            int userId = std::get<0>(top);
            if (listItMap[userId].first == listItMap[userId].second) {
                listItMap.erase(userId);
            } else {
                maxHeap.push({userId, listItMap[userId].first->first, listItMap[userId].first->second});
                ++(listItMap[userId].first);
            }
        }

        return result;
    }

    void follow(int followerId, int followeeId) {
        if (followMap.find(followerId) == followMap.end()) {
            followMap.insert({followerId, {}});
        }
        followMap[followerId].insert(followeeId);
    }

    void unfollow(int followerId, int followeeId) {
        if (followMap.find(followerId) != followMap.end()) {
            followMap[followerId].erase(followeeId);
        }
    }

private:
    std::unordered_map<int, std::unordered_set<int>> followMap;
    std::unordered_map<int, std::forward_list<std::pair<int, int>>> tweetMap;
    int timestamp;
};

Twitter::Twitter() : impl(std::make_unique<Impl>()) {
}

Twitter::~Twitter() = default;

void Twitter::postTweet(int userId, int tweetId) {
    impl->postTweet(userId, tweetId);
}

std::vector<int> Twitter::getNewsFeed(int userId) {
    return impl->getNewsFeed(userId);
}

void Twitter::follow(int followerId, int followeeId) {
    impl->follow(followerId, followeeId);
}

void Twitter::unfollow(int followerId, int followeeId) {
    impl->unfollow(followerId, followeeId);
}

}  // namespace leetcode::design_twitter
