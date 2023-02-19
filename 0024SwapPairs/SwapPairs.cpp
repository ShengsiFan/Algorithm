#include "SwapPairs.h"

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        auto *dummyHead = new ListNode(0);
        dummyHead->next = head;
        ListNode *current = dummyHead;

        while (current->next != nullptr && current->next->next != nullptr){
            auto *temp1 = current->next;
            auto *temp2 = current->next->next->next;

            current->next = current->next->next;
            current->next->next = temp1;
            current->next->next->next = temp2;
            current = current->next->next;
        }
        return dummyHead->next;
    }
};

using namespace std;
int main() {
    MyLinkedList l;
    l.addAtTail(1);
    l.addAtTail(2);

    Solution s;
    ListNode *a = s.swapPairs(l.dummyHead->next);
    PrintList(a);

    return 0;
}
