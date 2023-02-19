#include "ReverseList.h"

class Solution {
public:
    MyNode* SingleReverse(MyNode *cur, MyNode *pre){
        if (cur == nullptr){
            return pre;
        }
        MyNode *fast = cur->next;
        cur->next = pre;
        return SingleReverse(fast, cur);
    }

    MyNode* reverseList(MyNode* head) {
        return SingleReverse(head, nullptr);
    }
};

int main() {
    MyLinkedList l;
    l.addAtTail(100);
    PrintList(l);

    return 0;
}

