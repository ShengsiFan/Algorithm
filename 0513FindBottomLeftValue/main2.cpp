/*
 * 递归法实现
 */
#include <iostream>

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
    void traversal(TreeNode *node, int &currentDepth, int &maxDepth, int &res) {
        if (node->left == nullptr && node->right == nullptr) {
            if (maxDepth < currentDepth) {
                maxDepth = currentDepth;
                res = node->val;
            }
            return;
        }

        if (node->left) {
            currentDepth++;
            traversal(node->left, currentDepth, maxDepth, res);
            currentDepth--;
        }
        if (node->right) {
            currentDepth++;
            traversal(node->right, currentDepth, maxDepth, res);
            currentDepth--;
        }
    }

    int findBottomLeftValue(TreeNode *root) {
        int currentDepth = 1, res = root->val, maxDepth = 1;
        traversal(root, currentDepth, maxDepth, res);
        return res;
    }
};

int main() {
    TreeNode *node1 = new TreeNode(1);
    TreeNode *node2 = new TreeNode(2);
    TreeNode *node3 = new TreeNode(3);
    TreeNode *node4 = new TreeNode(4);
    TreeNode *node5 = new TreeNode(5);
    TreeNode *node6 = new TreeNode(6);
    TreeNode *node7 = new TreeNode(7);

    node1->left = node2;
    node1->right = node3;
    node2->left = node4;
    node3->left = node5;
    node3->right = node6;
    node5->left = node7;
    Solution s;
    cout << s.findBottomLeftValue(node1) << endl;
    return 0;
}
