/*
 * 迭代法(非递归)实现二叉树的前序遍历
 */
#include <iostream>
#include "vector"
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
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> result;
        if (root == nullptr) return result;
        stack<TreeNode*> st;

        st.push(root);

        while (!st.empty()) {
            TreeNode* temp = st.top();
            st.pop();
            result.push_back(temp->val);
            if (temp->right != nullptr) st.push(temp->right);
            if (temp->left != nullptr) st.push(temp->left);
        }
        return result;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
