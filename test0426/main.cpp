#include <iostream>
#include <string>
#include "vector"
#include <iomanip>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : next(nullptr), val(0) {}

    ListNode(int val) : next(nullptr), val(val) {}
};

int main() {
    int begin = 0, end = 0;
    cin >> begin >> end;    // 输入资源池起始和终止
    ListNode *dummyHead = new ListNode; // 链表头
    ListNode *cur = dummyHead;
    vector<bool> hash(end, false);

    // 创建资源池
    for (int i = begin; i <= end; i++) {
        ListNode *newNode = new ListNode(i);
        cur->next = newNode;
        cur = cur->next;
        hash[i] = true;
    }

    // 输入命令个数
    int orderNum = 0;
    cin >> orderNum;

    // 进行操作
    while (orderNum--) {
        int operate = 0, orderID = 0;   // 输入操作名称、操作数
        cin >> operate >> orderID;

        if (operate == 1) {
            while (orderID--) {
                if (dummyHead->next) {
                    ListNode *temp = dummyHead->next;
                    dummyHead->next = temp->next;
                    hash[temp->val] = false;
                    delete temp;
                }
            }
        } else if (operate == 2) {
            if (!hash[orderID]) continue;
            ListNode *node = dummyHead;
            while (node->next && node->next->val != orderID) {
                node = node->next;
            }
            ListNode *temp = node->next;
            node->next = temp->next;
            delete temp;
        } else if (operate == 3) {
            if (hash[orderID] || (orderID > end && orderID < begin)) continue;
            ListNode *node = dummyHead;
            while (node->next) {
                node = node->next;
            }
            ListNode *newNode = new ListNode(orderID);
            node->next = newNode;
        }
    }
    cout << dummyHead->next->val;
    return 0;
}