#include "RemoveNthFromEnd.h"

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *dummyHead = new ListNode(0);
        dummyHead->next = head;
        ListNode *fast = dummyHead->next;
        ListNode *slow = dummyHead;
        ListNode *temp;
        while (n--){
            fast=fast->next;
        }
        while (fast != nullptr){
            fast = fast->next;
            slow=slow->next;
        }

        temp = slow->next;
        slow->next = temp->next;
        delete temp;
        return dummyHead->next;
    }
};

int main() {
    MyLinkedList l;



    return 0;
}