/*
 * 递归实现
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
    Solution(){
        count = 0;
    }
    void search(TreeNode *node){
        if (node == nullptr) return;

        search(node->left);

        search(node->right);
        count++;
    }
    int countNodes(TreeNode *root) {
        search(root);
        return count;
    }
protected:
    int count;
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
