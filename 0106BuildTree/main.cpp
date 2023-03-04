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
    TreeNode *traversal(vector<int> inorder, vector<int> postorder) {
        if (postorder.size()==0) return nullptr;
        int rootVal = postorder[postorder.size() - 1];
        TreeNode* root = new TreeNode(rootVal);

        if (postorder.size()==1) return root;
        int rootIndex = 0;
        for (; rootIndex < inorder.size(); rootIndex++) {  // 根节点在前序中的位置
            if (inorder[rootIndex] == rootVal) break;
        }

        vector<int> leftInorder,rightInorder;
        for (int i = 0; i<inorder.size();i++){
            if (i<rootIndex) leftInorder.push_back(inorder[i]);
            else if (i > rootIndex) rightInorder.push_back(inorder[i]);
        }
        vector<int> leftPostorder, rightPostorder;
        for (int i = 0; i<postorder.size()-1;i++){
            if (i<rootIndex) leftPostorder.push_back(postorder[i]);
            else rightPostorder.push_back(postorder[i]);
        }
        TreeNode* leftRoot = traversal(leftInorder,leftPostorder);
        TreeNode* rightRoot = traversal(rightInorder,rightPostorder);
        root->left = leftRoot;
        root->right = rightRoot;
        return root;
    }

    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder) {
        return traversal(inorder,postorder);
    }
};

int main() {
    vector<int> inorder({9,3,15,20,7}), postorder({9,15,7,20,3});
    Solution s;
    TreeNode* root = s.buildTree(inorder,postorder);

    while (root)

    return 0;
}
