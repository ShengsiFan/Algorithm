#include <iostream>
#include <queue>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    struct cmp {
        bool operator()(ListNode *a, ListNode *b) {
            return a->val > b->val;
        }
    };

    ListNode *mergeKLists(vector<ListNode *> &lists) {
        priority_queue<ListNode *, vector<ListNode *>, cmp> que;
        for (ListNode *l: lists) if (l) que.push(l);

        ListNode *dummyHead = new ListNode(0);
        ListNode *cur = dummyHead;
        while (!que.empty()) {
            ListNode *temp = que.top();
            que.pop();
            cur->next = temp;
            cur = cur->next;
            if (temp->next) que.push(temp->next);
        }
        return dummyHead->next;
    }
};

int main() {
    return 0;
}
