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
    int min = 100000;
    int curDepth = 0;

    void getHeight(TreeNode *node) {
        curDepth++; // 下一层就要加一层深度
        if (node == nullptr) {
            curDepth--; // 空节点就往回走，当前深度减一
            return;
        }

        // 左右孩子都为空，就是到头了，更新最小值
        //if (node->left == nullptr && node->right == nullptr) min = min > curDepth ? curDepth : min;
        getHeight(node->left);
        getHeight(node->right);
        // 左右孩子都为空，就是到头了，更新最小值
        if (node->left == nullptr && node->right == nullptr) min = min > curDepth ? curDepth : min;
        curDepth--;
    }

    int minDepth(TreeNode *root) {
        if (root == nullptr) return 0;
        getHeight(root);
        return min;
    }
};

int main() {
    TreeNode *node1 = new TreeNode(1);
    TreeNode *node2 = new TreeNode(2);
    TreeNode *node3 = new TreeNode(3);
    TreeNode *node4 = new TreeNode(4);
    TreeNode *node5 = new TreeNode(5);

    node1->left = nullptr;
    node1->right = node2;
    node2->left = nullptr;
    node2->right = node3;

    Solution s;

    cout << s.minDepth(node1) << endl;
    return 0;
}
