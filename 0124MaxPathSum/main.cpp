#include <iostream>
#include "climits"

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
    int res = INT_MIN;
    int traversal(TreeNode *root) {
        if (!root) return 0;
        int left = max(traversal(root->left), 0);
        int right = max(traversal(root->right), 0);
        int leftMidRight = left + right + root->val;
        int returnVal = max(left, right) + root->val;
        res = max(res, max(returnVal, leftMidRight));
        return returnVal;
    }
    int maxPathSum(TreeNode *root) {
        traversal(root);
        return res;
    }
};

int main() {
    TreeNode *node1 = new TreeNode(1);
    node1->left = new TreeNode(2);
    node1->right = new TreeNode(3);
    Solution s;
    cout << s.maxPathSum(node1);
    return 0;
}
