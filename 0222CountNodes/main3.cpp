/*
 * 利用完全二叉树条件
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
    int getNumber(TreeNode *node) {
        // 终止条件有两种，一种是遇到空节点，表示到头了；一种是发现满二叉树了
        // 开始判断终止条件
        if (node == nullptr) return 0;
        int leftNum = 0, rightNum = 0;
        TreeNode *leftTree = node->left;
        TreeNode *rightTree = node->right;
        while (leftTree) {
            leftNum++;
            leftTree = leftTree->left;
        }
        while (rightTree) {
            rightNum++;
            rightTree = rightTree->right;
        }
        if (leftNum == rightNum) return (2 << leftNum) - 1;
        // 终止条件结束

        leftNum = getNumber(node->left);
        rightNum = getNumber(node->right);
        return leftNum + rightNum + 1;
    }

    int countNodes(TreeNode *root) {
        if (root == nullptr) return 0;
        else return getNumber(root);
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
    node2->left = node4;
    node2->right = node5;
    node3->left = node6;

    Solution s;

    cout << s.countNodes(node1) << endl;

    return 0;
}
