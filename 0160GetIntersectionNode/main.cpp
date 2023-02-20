#include <iostream>

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA = 0, lenB = 0;
        ListNode *currentA = headA, *currentB = headB;

        while (currentA != nullptr) {
            lenA++;
            currentA = currentA->next;
        }
        while (currentB != nullptr) {
            lenB++;
            currentB = currentB->next;
        }

        currentA = headA, currentB = headB;
        if (lenA > lenB) {
            int sub = lenA - lenB;
            while (sub--) {
                currentA = currentA->next;
            }
        } else {
            int sub = lenB - lenA;
            while (sub--) {
                currentB = currentB->next;
            }
        }

        while (currentA != currentB) {
            currentA = currentA->next;
            currentB = currentB->next;
        }
        return currentB;
    }
};

int main() {

    return 0;
}
