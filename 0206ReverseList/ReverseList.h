//
// Created by ShengsiFan on 2023/2/19.
//

#ifndef INC_0206REVERSELIST_REVERSELIST_H
#define INC_0206REVERSELIST_REVERSELIST_H

#include <iostream>

using namespace std;

class MyLinkedList;
class MyNode;

void PrintList(MyLinkedList &l);

class MyNode {
public:
    MyNode(int val) : value(val), next(nullptr) {}
    int value;
    MyNode *next;
    friend class MyLinkedList;
};

class MyLinkedList {
public:
    struct MyNode {
        int value;
        MyNode *next;

        MyNode(int val) : value(val), next(nullptr) {}
    };

    MyLinkedList() {
        dummyHead = new MyNode(0);
        size = 0;
    }

    int get(int index) {

        MyNode *current = dummyHead->next;

        if (index < 0 || index >= size) {
            return -1;
        }
        while (index--) {
            current = current->next;
        }
        return current->value;
    }

    void addAtHead(int val) {
        auto *temp = new MyNode(val);
        temp->next = dummyHead->next;
        dummyHead->next = temp;
        size++;
    }

    void addAtTail(int val) {
        auto *temp = new MyNode(val);
        MyNode *current = dummyHead;
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

        auto *temp = new MyNode(val);
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
        auto *temp = new MyNode(0);
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
    MyNode *dummyHead;
};

void PrintList(MyLinkedList &l) {
    for (int i = 0; i < l.size; ++i) {
        cout << l.get(i) << endl;
    }
}

#endif //INC_0206REVERSELIST_REVERSELIST_H
