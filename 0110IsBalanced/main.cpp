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
    int getHeight(TreeNode *node) {
        if (node == nullptr) return 0;

        int leftDepth = getHeight(node->left);
        if (leftDepth == -1) return -1;
        int rightDepth = getHeight(node->right);
        if (rightDepth == -1) return -1;

        if (abs(leftDepth - rightDepth) > 1) return -1;
        else return max(leftDepth, rightDepth) + 1;
    }

    bool isBalanced(TreeNode *root) {
        int height = getHeight(root);

        if (height == -1) return false;
        else return true;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
