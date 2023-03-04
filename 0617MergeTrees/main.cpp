/*
 * 层序遍历实现
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
    TreeNode *mergeTrees(TreeNode *root1, TreeNode *root2) {
        if (!root1) return root2;
        if (!root2) return root1;

        queue<TreeNode*> q1, q2;
        q1.push(root1);
        q2.push(root2);
        while (!q1.empty() || !q2.empty()) {
            TreeNode* temp1 = q1.front();
            TreeNode* temp2 = q2.front();

            q1.pop();
            q2.pop();
            temp1->val += temp2->val;

            if (temp1->left && temp2->left) {
                q1.push(temp1->left);
                q2.push(temp2->left);
            }
            if (temp1->right && temp2->right) {
                q1.push(temp1->right);
                q2.push(temp2->right);
            }
            if (!temp1->left && temp2->left) temp1->left = temp2->left;
            if (!temp1->right && temp2->right) temp1->right = temp2->right;
        }
        return root1;
    }
};

int main() {

    return 0;
}
