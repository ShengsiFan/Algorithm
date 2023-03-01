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
    bool myCompare(TreeNode* left, TreeNode* right){
        if (left == nullptr && right != nullptr) return false;
        else if (left != nullptr && right == nullptr) return false;
        else if (left == nullptr && right == nullptr) return true;
        else if (left->val != right->val) return false;
        bool leftCompare  = myCompare(left->left, right->right);
        bool rightCompare = myCompare(left->right, right->left);
        return (leftCompare && rightCompare);
    }
    bool isSymmetric(TreeNode *root) {
        if (root == nullptr) return true;
        return myCompare(root->left,root->right);
    }
};

int main() {

    return 0;
}
