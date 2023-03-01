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
    bool myCompare(TreeNode *node1, TreeNode *node2){
        if (node1 == nullptr && node2 == nullptr) return true;
        else if (node1 != nullptr && node2 == nullptr) return false;
        else if (node1 == nullptr && node2 != nullptr) return false;
        else if (node1->val != node2->val) return false;

        bool compare1 = myCompare(node1->left, node2->left);
        bool compare2 = myCompare(node1->right, node2->right);

        return (compare1 && compare2);
    }
    bool isSameTree(TreeNode *p, TreeNode *q) {
        return myCompare(p,q);
    }
};

int main() {
    TreeNode* node1 = new TreeNode(1);
    TreeNode* node2 = new TreeNode(2);
    TreeNode* node3 = new TreeNode(1);
    TreeNode* node4 = nullptr;
    TreeNode* node5 = new TreeNode(2);

    node1->left = node2;
    node3->left = node5;
    // node3->right = node5;
    Solution s;

    cout << s.isSameTree(node1, node3) <<endl;
    return 0;
}
