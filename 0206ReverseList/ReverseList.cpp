#include "ReverseList.h"

class Solution {
public:
    MyNode* reverseList(MyNode* head) {
        MyNode *pre = nullptr;
        MyNode *current = head;
        MyNode *fast;

        while (current){
            fast = current->next;
            current->next = pre;
            pre = current;
            current = fast;
        }
        return pre;
    }
};

int main() {
    MyLinkedList l;
    l.addAtTail(100);
    PrintList(l);

    return 0;
}

