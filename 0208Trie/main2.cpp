//
// Created by 94925 on 2023/7/27.
//
#include <iostream>
#include "string"
#include "unordered_map"
#include "vector"

using namespace std;

class Trie {
public:
    vector<Trie*> children;
    bool isEnd;

    Trie() {
        children = vector<Trie*>(26, nullptr);
        isEnd = false;
    }

    void insert(string word) {
        Trie *cur = this;
        for (char c : word) {
            c -= 'a';
            if (!cur->children[c]) {
                cur->children[c] = new Trie;
            }
            cur = cur->children[c];
        }
        cur->isEnd = true;
    }

    bool search(string word) {
        Trie *cur = this;
        for (char c : word) {
            c -= 'a';
            if (!cur->children[c]) return false;
            cur = cur->children[c];
        }
        return cur->isEnd;
    }

    bool startsWith(string prefix) {
        Trie *cur = this;
        for (char c : prefix) {
            c -= 'a';
            if (!cur->children[c]) return false;
            cur = cur->children[c];
        }
        return true;
    }
};

int main() {
    Trie t;
    t.insert("jfldsjf");
    t.insert("apple");

    cout << t.startsWith("jfldsj");

    return 0;
}
