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
    bool traversal(TreeNode *node, int &sum) {
        if (node->left == nullptr && node->right == nullptr) return true;

        bool isLeaf = false;    // 判别左孩子是不是叶子节点
        if (node->left != nullptr) isLeaf = traversal(node->left, sum);  // 左
        if (isLeaf) sum += node->left->val; // 中，如果左孩子是叶子就加进和里面
        if (node->right != nullptr) isLeaf = traversal(node->right, sum);
        return false;
    }

    int sumOfLeftLeaves(TreeNode *root) {
        int sum = 0;
        if (root != nullptr) bool a = traversal(root, sum);
        return sum;
    }
};

int main() {
    TreeNode *node1 = new TreeNode(3);
    TreeNode *node2 = new TreeNode(9);
    TreeNode *node3 = new TreeNode(20);
    TreeNode *node4 = new TreeNode(15);
    TreeNode *node5 = new TreeNode(7);

    node1->left = node2;
    node1->right = node3;
    node3->left = node4;
    node3->right = node5;

    Solution s;

    cout << s.sumOfLeftLeaves(node1) << endl;
    return 0;
}
