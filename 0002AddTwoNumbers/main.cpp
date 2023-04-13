#include <iostream>
#include "vector"

using namespace std;

struct ListNode {
public:
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}

    ListNode(const vector<int> &nums) {
        val = nums[0];
        ListNode *cur = this;
        for (int i = 1; i < nums.size(); i++) {
            ListNode *newNode = new ListNode(nums[i]);
            cur->next = newNode;
            cur = cur->next;
        }
    }
};

class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode *curL1 = l1;
        ListNode *curL2 = l2;
        ListNode *head = new ListNode(0);
        ListNode *cur = head;
        int next = 0;   // 进位

        while (curL1 || curL2) {
            ListNode *newNode = new ListNode(0);
            if (curL1 && curL2) {   // 两个数在这一位都有数，就相加
                newNode->val = (curL2->val + curL1->val + next) % 10;   // 本位等于两数在这一位及进位
                if (curL2->val + curL1->val + next >= 10) next = 1;     // 看看本位需不需要向下一位进位
                else next = 0;
                curL2 = curL2->next;    // 后移
                curL1 = curL1->next;
            } else if (!curL2) {    // 某个加数在此位没有了
                newNode->val = (curL1->val + next) % 10;
                if (curL1->val + next >= 10) next = 1;
                else next = 0;
                curL1 = curL1->next;
            } else {
                newNode->val = (curL2->val + next) % 10;
                if (curL2->val + next >= 10) next = 1;
                else next = 0;
                curL2 = curL2->next;
            }
            cur->next = newNode;
            cur = cur->next;
        }
        if (next == 1) {    // 最后一位还进了一，就要加上
            ListNode *top = new ListNode(1);
            cur->next = top;
            cur = cur->next;
        }
        return head->next;
    }
};

int main() {
    vector<int> nums1 = {9,9,9,9,9,9,9}, nums2 = {9,9,9,9};
    ListNode *node1 = new ListNode(nums1);
    ListNode *node2 = new ListNode(nums2);
    Solution s;
    ListNode *res = s.addTwoNumbers(node1,node2);
    ListNode *cur = res;
    while (cur){
        cout << cur->val << " ";
        cur = cur->next;
    }
    return 0;
}
