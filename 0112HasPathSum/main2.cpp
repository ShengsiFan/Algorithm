#include <iostream>
#include "stack"
#include "utility"

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
    bool hasPathSum(TreeNode *root, int targetSum) {
        stack<pair<TreeNode *, int>> st;
        if (root == nullptr) return false;

        st.push(pair<TreeNode *, int>(root, root->val));

        while (!st.empty()){
            pair<TreeNode*,int> temp = st.top();
            st.pop();
            if (!temp.first->left && !temp.first->right && temp.second == targetSum) return true;

            if (temp.first->left) st.push(pair<TreeNode*,int>(temp.first->left,temp.second+temp.first->left->val));

            if (temp.first->right) st.push(pair<TreeNode*,int>(temp.first->right, temp.second+temp.first->right->val));
        }
        return false;

    }
};

int main() {
    TreeNode *node1 = new TreeNode(5);
    TreeNode *node2 = new TreeNode(4);
    TreeNode *node3 = new TreeNode(8);
    TreeNode *node4 = new TreeNode(11);
    TreeNode *node5 = new TreeNode(13);
    TreeNode *node6 = new TreeNode(4);
    TreeNode *node7 = new TreeNode(7);
    TreeNode *node8 = new TreeNode(2);
    TreeNode *node9 = new TreeNode(1);

    node1->left = node2;
    node1->right = node3;
    node2->left = node4;
    node3->left = node5;
    node3->right = node6;
    node4->left = node7;
    node4->right = node8;
    node6->right = node9;

    Solution s;

    cout << s.hasPathSum(node1, 18);

    return 0;
}
