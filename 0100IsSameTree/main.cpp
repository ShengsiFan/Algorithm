/*
 * 迭代法实现
 */
#include <iostream>
#include "queue"

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool isSameTree(TreeNode *p, TreeNode *q) {
        queue<TreeNode *> qQue, pQue;
        if (p == nullptr && q == nullptr) return true;
        else if (p == nullptr && q != nullptr) return false;
        else if (p != nullptr && q == nullptr) return false;
        else if (p->val != q->val) return false;
        qQue.push(q);
        pQue.push(p);

        while (!qQue.empty() && !pQue.empty()) {
            TreeNode *qTemp = qQue.front();
            TreeNode *pTemp = pQue.front();
            if (qTemp == nullptr && pTemp == nullptr) continue;
            else if (pTemp != nullptr && qTemp == nullptr) return false;
            else if (qTemp != nullptr && pTemp == nullptr) return false;
            if (qTemp->val != pTemp->val) return false;

            qQue.pop();
            pQue.pop();

            if (qTemp->left != nullptr && pTemp->left == nullptr) return false;
            else if (qTemp->left == nullptr && pTemp->left != nullptr) return false;
            else if (qTemp->left != nullptr && pTemp->left != nullptr) {
                qQue.push(qTemp->left);
                pQue.push(pTemp->left);
            }
            if (qTemp->right != nullptr && pTemp->right == nullptr) return false;
            else if (qTemp->right == nullptr && pTemp->right != nullptr) return false;
            else if (qTemp->right != nullptr && pTemp->right != nullptr) {
                qQue.push(qTemp->right);
                pQue.push(pTemp->right);
            }

        }
        return true;
    }
};

int main() {
    TreeNode* node1 = new TreeNode(1);
    TreeNode* node2 = new TreeNode(2);
    TreeNode* node3 = new TreeNode(1);
    TreeNode* node4 = nullptr;
    TreeNode* node5 = new TreeNode(2);

    node1->left = node2;
    node3->left = node4;
    node3->right = node5;

    Solution s;

    cout << s.isSameTree(node1, node3) <<endl;
    return 0;
}
