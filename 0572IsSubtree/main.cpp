/*
 * 递归法实现
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
    bool myCompare(TreeNode *node1, TreeNode *node2) {
        if (node1 == nullptr && node2 == nullptr) return true;
        else if (node1 == nullptr && node2 != nullptr) return false;
        else if (node1 != nullptr && node2 == nullptr) return false;
        else if (node1->val != node2->val) return false;

        bool compare1 = myCompare(node1->left, node2->left);
        bool compare2 = myCompare(node1->right, node2->right);

        return (compare1 && compare2);
    }

    bool isSubtree(TreeNode *root, TreeNode *subRoot) {
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
            if (myCompare(temp, subRoot)) return true;  // 当前遍历节点跟subRoot比，一样就返回true
            // 如果没有就继续遍历

            if (temp->left != nullptr) q.push(temp->left);
            if (temp->right != nullptr) q.push(temp->right);
        }
        return false;
    }
};

int main() {
    TreeNode* ancestor = new TreeNode(1000);
    TreeNode* node1 = new TreeNode(1);
    TreeNode* node2 = new TreeNode(2);
    TreeNode* node3 = new TreeNode(3);
    TreeNode* node4 = new TreeNode(4);
    TreeNode* node5 = new TreeNode(5);
    TreeNode* node6 = new TreeNode(6);
    TreeNode* node7 = new TreeNode(7);

    node1->left = node2;
    node1->right = node3;
    node2->left = node4;
    node2->right = node5;
    node3->left = node6;
    node3->right = node7;
    ancestor->right = node1;

    Solution s;

    cout << s.isSubtree(ancestor, node2);

    return 0;
}
