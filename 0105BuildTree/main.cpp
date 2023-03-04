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
    TreeNode *traversal(vector<int> preorder, vector<int> inorder) {
        if (preorder.size() == 0) return nullptr;

        int rootVal = preorder[0];
        TreeNode *root = new TreeNode(rootVal);
        if (preorder.size() == 1) return root;

        int rootIndex = 0;
        for (; rootIndex < inorder.size(); rootIndex++) {
            if (inorder[rootIndex] == rootVal) break;
        }

        vector<int> leftPre(preorder.begin() + 1, preorder.begin() + rootIndex + 1);
        vector<int> rightPre(preorder.begin() + rootIndex + 1, preorder.end());
        vector<int> leftInorder(inorder.begin(), inorder.begin() + rootIndex);
        vector<int> rightInorder(inorder.begin() + rootIndex + 1, inorder.end());

        TreeNode *leftRoot = traversal(leftPre, leftInorder);
        TreeNode *rightRoot = traversal(rightPre, rightInorder);
        root->left = leftRoot;
        root->right = rightRoot;
        return root;
    }

    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
        return traversal(preorder, inorder);
    }
};

int main() {

    return 0;
}
