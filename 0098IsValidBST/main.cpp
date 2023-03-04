#include <iostream>
#include "climits"

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
    long long maxVal = LONG_LONG_MIN;   // 为什么这里是long long？因为如果用INT_MIN，假如最左下角元素恰好是INT_MIN，就要出问题
    bool isValidBST(TreeNode *root) {
        if (!root) return true;

        bool left =  isValidBST(root->left);
        if (root->val > maxVal){
            maxVal = root->val;
        } else return false;

        bool right =  isValidBST(root->right);
        return left && right;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
