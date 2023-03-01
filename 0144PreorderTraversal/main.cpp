/*
 * 递归法实现二叉树的前序遍历
 */
#include <iostream>
#include "vector"

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
    void myTraversal(TreeNode *root, vector<int> &result) {
        if (root == nullptr) return;
        result.push_back(root->val);
        myTraversal(root->left, result);
        myTraversal(root->right, result);
    }

    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> result;
        myTraversal(root, result);
        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
