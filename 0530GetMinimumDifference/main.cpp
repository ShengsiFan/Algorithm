#include <iostream>
#include "climits"

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
    void traversal(TreeNode *node, int &min, TreeNode **pre) {
        if (!node) return;

        traversal(node->left, min, pre);
        if (*pre) min = min > (node->val - (*pre)->val) ? (node->val - (*pre)->val) : min;
        (*pre) = node;
        traversal(node->right, min, pre);
    }

    int getMinimumDifference(TreeNode *root) {
        TreeNode *pre = nullptr;

        int min = INT_MAX;
        traversal(root, min, &pre);
        return min;
    }
};

int main() {
    TreeNode *node1 = new TreeNode(5);
    TreeNode *node2 = new TreeNode(4);
    TreeNode *node3 = new TreeNode(7);
    TreeNode *node4 = new TreeNode(227);
    TreeNode *node5 = new TreeNode(911);

    node1->left = node2;
    node1->right = node3;
//    node2->right = node4;
//    node3->right = node5;

    Solution s;

    cout << s.getMinimumDifference(node1);
    return 0;
}
