// 哈希表+双向链表实现
#include <iostream>
#include "unordered_map"

using namespace std;

class LRUCache {
public:
    struct DoubleLinkedList {
        int val, key;
        DoubleLinkedList *next;
        DoubleLinkedList *pre;

        DoubleLinkedList() : next(nullptr), pre(nullptr), val(-1), key(-1) {}

        DoubleLinkedList(int val) : next(nullptr), pre(nullptr), val(val) {}
    };

    int count = 0;
    int cap = 0;
    DoubleLinkedList *dummyHead = new DoubleLinkedList;
    DoubleLinkedList *dummyTail = new DoubleLinkedList;
    unordered_map<int, DoubleLinkedList *> hash;

    LRUCache(int capacity) {
        cap = capacity;
        dummyHead->next = dummyTail;
        dummyTail->pre = dummyHead;
    }

    int get(int key) {
        if (!hash.count(key)) return -1;
        else {
            int res = hash[key]->val;
            deleteNode(hash[key],key);
            addNewNode(key,res);
            return res;
        }
    }

    void put(int key, int value) {
        if (!hash.count(key)) {
            if (count == cap) {
                deleteNode(dummyTail->next, )
            }
        }
    }

    void addNewNode(int key, int value) {
        DoubleLinkedList *newNode = new DoubleLinkedList(value);
        DoubleLinkedList *temp = dummyTail->pre;
        temp->next = newNode;
        dummyTail->pre = newNode;
        newNode->pre = temp;
        newNode->next = dummyTail;
        hash[key] = newNode;
    }

    void deleteNode(DoubleLinkedList *node, int key) {
        DoubleLinkedList *pre = node->pre;
        DoubleLinkedList *next = node->next;
        pre->next = next;
        next->pre = pre;
        hash.erase(key);
        delete node;
    }
};

int main() {
    LRUCache res(2);
    res.put(1, 1);
    res.put(2, 2);
    cout << res.get(1) << endl;
    res.put(3, 3);
    cout << res.get(2) << endl;
    res.put(4, 4);
    cout << res.get(1) << endl;
    cout << res.get(3) << endl;
    cout << res.get(4) << endl;


    return 0;
}