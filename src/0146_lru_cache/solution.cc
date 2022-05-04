#include "0146_lru_cache.h"

#include <unordered_map>

namespace leetcode::lru_cache {

namespace {
class Node {
public:
    Node(int value) : prev(nullptr), next(nullptr), val(value) {
    }

    Node* prev;
    Node* next;
    int val;
};

class DoubleLinkedList {
public:
    DoubleLinkedList(int size_)
        : head(std::make_unique<Node>(0)),
          tail(std::make_unique<Node>(0)),
          dummy_head(head.get()),
          dummy_tail(tail.get()),
          size(size_) {
        dummy_head->next = dummy_tail;
        dummy_tail->prev = dummy_head;
    }

    void release_node(Node* node) {
        node->prev->next = node->next;
        node->next->prev = node->prev;
        --size;
    }

    void push_front(Node* node) {
        node->prev = dummy_head;
        node->next = dummy_head->next;
        dummy_head->next->prev = node;
        dummy_head->next = node;
        ++size;
    }

    std::unique_ptr<Node> head;
    std::unique_ptr<Node> tail;
    Node* dummy_head;
    Node* dummy_tail;
    int size;
};
}  // namespace

class LRUCache::Impl {
public:
    Impl(int capacity_) : cache{0}, key_node_map{}, node_key_map{}, capacity(capacity_) {
    }

    int get(int key) {
        if (key_node_map.find(key) == key_node_map.end()) {
            return -1;
        }
        cache.release_node(key_node_map[key].get());
        cache.push_front(key_node_map[key].get());
        return key_node_map[key]->val;
    }

    void put(int key, int value) {
        if (key_node_map.find(key) != key_node_map.end()) {
            key_node_map[key]->val = value;
            cache.release_node(key_node_map[key].get());
            cache.push_front(key_node_map[key].get());
            return;
        }
        if (cache.size == capacity) {
            int release_key = node_key_map[cache.dummy_tail->prev];
            node_key_map.erase(cache.dummy_tail->prev);
            cache.release_node(cache.dummy_tail->prev);
            key_node_map.erase(release_key);
        }
        key_node_map.insert({key, std::make_unique<Node>(value)});
        node_key_map.insert({key_node_map[key].get(), key});
        cache.push_front(key_node_map[key].get());
    }

private:
    DoubleLinkedList cache;
    std::unordered_map<int, std::unique_ptr<Node>> key_node_map;
    std::unordered_map<Node*, int> node_key_map;
    const int capacity;
};

LRUCache::LRUCache(int capacity) : impl(std::make_unique<Impl>(capacity)) {
}

LRUCache::~LRUCache() = default;

int LRUCache::get(int key) {
    return impl->get(key);
}

void LRUCache::put(int key, int value) {
    return impl->put(key, value);
}

}  // namespace leetcode::lru_cache