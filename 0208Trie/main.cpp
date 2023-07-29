#include <iostream>
#include "string"
#include "unordered_map"
#include "vector"

using namespace std;

class Trie {
public:
    unordered_map<string, bool> hashTable;
    vector<string> wordSet;

    Trie() {

    }

    void insert(string word) {
        if (hashTable[word]) return;

        hashTable[word] = true;
        wordSet.push_back(word);
    }

    bool search(string word) {
        return hashTable[word];
    }

    bool startsWith(string prefix) {
        for (string word : wordSet) {
            int flag = prefix.size();
            for (int i = 0; i < prefix.size(); i++) {
                if (word[i] != prefix[i]) break;
                else flag--;
            }
            if (flag) continue;
            else return true;
        }
        return false;
    }
};

int main() {
    Trie t;
    t.insert("jfldsjf");
    t.insert("apple");

    cout << t.startsWith("jfdsjf");

    return 0;
}
