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
    int countNodes(TreeNode *root) {
        queue<TreeNode *> q;
        int count = 0;
        if (root != nullptr) q.push(root);
        while (!q.empty()) {
            count++;
            TreeNode *temp = q.front();
            q.pop();
            if (temp->left != nullptr) q.push(temp->left);
            if (temp->right != nullptr) q.push(temp->right);
        }
        return count;
    }
};

int main() {
    TreeNode *node1 = new TreeNode(1);
    TreeNode *node2 = new TreeNode(1);
    TreeNode *node3 = new TreeNode(1);
    TreeNode *node4 = new TreeNode(1);
    TreeNode *node5 = new TreeNode(1);
    TreeNode *node6 = new TreeNode(1);

    node1->left = node2;
    node1->right = node3;
    node2->left = nullptr;
    node2->right = node4;
    node3->left = node5;
    node3->right = nullptr;
    node5->left = nullptr;
    node5->right = node6;

    Solution s;
    cout << s.countNodes(node1) << endl;

    return 0;
}
