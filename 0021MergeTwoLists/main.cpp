/*
 * 创建新链表
 */
#include <iostream>
#include "vector"

using namespace std;

struct ListNode {
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
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {
        ListNode *res = new ListNode(0);
        ListNode *cur1 = list1;
        ListNode *cur2 = list2;
        ListNode *curRes = res;
        while (cur1 || cur2) {
            ListNode *newNode = new ListNode(0);
            if (cur1 && cur2) {
                if (cur1->val > cur2->val) {
                    newNode->val = cur2->val;
                    cur2 = cur2->next;
                } else {
                    newNode->val = cur1->val;
                    cur1 = cur1->next;
                }
            } else if (!cur1) {
                newNode->val = cur2->val;
                cur2 = cur2->next;
            } else {
                newNode->val = cur1->val;
                cur1 = cur1->next;
            }
            curRes->next = newNode;
            curRes = curRes->next;
        }
        return res->next;
    }
};

int main() {
    vector<int> nums1 = {1,3,5}, nums2 = {1,2,5};
    ListNode *a = new ListNode(nums1), *b = new ListNode(nums2);
    Solution s;
    ListNode *res = s.mergeTwoLists(a,b);
    while (res) {
        cout << res->val << " ";
        res = res->next;
    }
    return 0;
}
