// 迭代法实现
#include <iostream>
#include "stack"

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
    TreeNode *invertTree(TreeNode *root) {
        stack<TreeNode*> st;
        if (root== nullptr) return root;
        else st.push(root);
        while (!st.empty()){
            TreeNode* temp = st.top();
            st.pop();
            swap(temp->left,temp->right);
            if (temp->left!= nullptr) st.push(temp->left);
            if (temp->right!= nullptr) st.push(temp->right);
        }
        return root;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
