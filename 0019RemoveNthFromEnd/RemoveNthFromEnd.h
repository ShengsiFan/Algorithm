#ifndef INC_0019REMOVENTHFROMEND_REMOVENTHFROMEND_H
#define INC_0019REMOVENTHFROMEND_REMOVENTHFROMEND_H

#include <iostream>
using namespace std;

class MyLinkedList;

void PrintList(MyLinkedList &l);
class ListNode {
public:
    int value;
    ListNode *next;

    ListNode(): value(0), next(nullptr){}
    ListNode(int val) : value(val), next(nullptr) {}
    ListNode(int val, ListNode *_next) : value(val), next(_next) {}
};
class MyLinkedList {
public:
    MyLinkedList() {
        dummyHead = new ListNode(0);
        size = 0;
    }

    int get(int index) {

        ListNode *current = dummyHead->next;

        if (index < 0 || index >= size) {
            return -1;
        }
        while (index--) {
            current = current->next;
        }
        return current->value;
    }

    void addAtHead(int val) {
        auto *temp = new ListNode(val);
        temp->next = dummyHead->next;
        dummyHead->next = temp;
        size++;
    }

    void addAtTail(int val) {
        auto *temp = new ListNode(val);
        ListNode *current = dummyHead;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = temp;
        size++;
    }

    void addAtIndex(int index, int val) {
        if (index <= 0) {
            addAtTail(val);
        }
        if (index > size) {
            return;
        }

        auto *temp = new ListNode(val);
        auto *current = dummyHead;

        while (index--) {
            current = current->next;
        }
        temp->next = current->next;
        current->next = temp;
        size++;

    }

    void deleteAtIndex(int index) {
        if (index >= size || index < 0) {
            return;
        }
        auto *temp = new ListNode(0);
        auto *current = dummyHead;
        while (index--) {
            current = current->next;
        }
        temp = current->next;
        current->next = current->next->next;
        delete temp;
        size--;
    }

    int size;
    ListNode *dummyHead;
};

void PrintList(MyLinkedList &l) {
    for (int i = 0; i < l.size; ++i) {
        cout << l.get(i) << endl;
    }
}

#endif