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
    void traversal(TreeNode *node, int &preSum) {
        if (!node) return;

        traversal(node->right, preSum);
        node->val += preSum;
        preSum = node->val;
        traversal(node->left, preSum);
    }

    TreeNode *convertBST(TreeNode *root) {
        int preSum = 0;
        traversal(root, preSum);
        return root;
    }
};

int main() {
    TreeNode *node1 = new TreeNode(4);
    TreeNode *node2 = new TreeNode(1);
    TreeNode *node3 = new TreeNode(6);
    TreeNode *node4 = new TreeNode(0);
    TreeNode *node5 = new TreeNode(2);
    TreeNode *node6 = new TreeNode(5);
    TreeNode *node7 = new TreeNode(7);
    TreeNode *node8 = new TreeNode(3);
    TreeNode *node9 = new TreeNode(8);

    node1->left = node2;
    node1->right = node3;
    node2->left = node4;
    node2->right = node5;
    node5->right = node8;
    node3->left = node6;
    node3->right = node7;
    node7->right = node9;

    Solution s;

    TreeNode *root = s.convertBST(node1);

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size();
        while (size--) {
            TreeNode *temp = q.front();
            q.pop();

            if (temp) cout << temp->val << " ";
            else cout << "n";

            if (temp->left) q.push(temp->left);
            if (temp->right) q.push(temp->right);
        }
        cout << endl;
    }

    return 0;
}
