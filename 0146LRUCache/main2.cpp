#include <iostream>
#include "unordered_set"

using namespace std;

class LRUCache {
public:
    struct DoubleLinkedList {
        int val;
        int key;
        DoubleLinkedList *next;
        DoubleLinkedList *pre;

        DoubleLinkedList() : next(nullptr), pre(nullptr), val(-1), key(-1) {}

        DoubleLinkedList(int key, int val) : next(nullptr), pre(nullptr), val(val), key(key) {}
    };

    int count = 0;
    int cap = 0;
    DoubleLinkedList *dummyHead = new DoubleLinkedList;
    DoubleLinkedList *dummyTail = new DoubleLinkedList;
    unordered_set<int> isIn;

    LRUCache(int capacity) {
        cap = capacity;
        dummyHead->next = dummyTail;
        dummyTail->pre = dummyHead;
    }

    int get(int key) {
        if (!isIn.count(key)) return -1;
        DoubleLinkedList *cur = dummyHead;
        while (cur->key != key) cur = cur->next;
        int returnValue = cur->val;
        deleteNode(cur);
        addNewNode(key, returnValue);
        return returnValue;
    }

    void put(int key, int value) {
        if (!isIn.count(key)) {
            if (count < cap) {
                addNewNode(key, value);
                count++;
            } else {
                isIn.erase(dummyHead->next->key);
                deleteNode(dummyHead->next);
                addNewNode(key, value);
            }
            isIn.insert(key);
        } else {
            DoubleLinkedList *cur = dummyHead;
            while (cur->key != key) cur = cur->next;
            deleteNode(cur);
            addNewNode(key, value);
        }
    }

    void addNewNode(int key, int value) {
        DoubleLinkedList *newNode = new DoubleLinkedList(key, value);
        DoubleLinkedList *temp = dummyTail->pre;
        temp->next = newNode;
        newNode->next = dummyTail;
        dummyTail->pre = newNode;
        newNode->pre = temp;
    }

    void deleteNode(DoubleLinkedList *node) {
        DoubleLinkedList *preNode = node->pre, *nextNode = node->next;
        preNode->next = nextNode;
        nextNode->pre = preNode;
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