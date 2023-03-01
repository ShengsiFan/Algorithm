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
    bool isSymmetric(TreeNode *root) {
        queue<TreeNode *> qLeft, qRight;
        if (root == nullptr) return true;
        else {
            qLeft.push(root->left);
            qRight.push(root->right);
        }
        while (!qLeft.empty() && !qRight.empty()) {
            if (qRight.size() != qLeft.size()) return false;


            TreeNode *tempLeft = qLeft.front(), tempRight = qRight.front();
            qLeft.pop();
            qRight.pop();
            if (tempLeft != nullptr && tempRight == nullptr) return false;
            else if (tempLeft == nullptr && tempRight != nullptr) return false;
            else if (tempRight == nullptr && tempLeft == nullptr) continue;
            else if (tempLeft->val != tempRight.val) return false;

            qLeft.push(tempLeft->left);
            qLeft.push(tempLeft->right);
            qRight.push(tempRight.right);
            qRight.push(tempRight.left);
        }

        return true;
    }
};

int main() {

    return 0;
}
