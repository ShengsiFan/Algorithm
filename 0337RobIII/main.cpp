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
    // 第一个元素代表打劫，第二个代表不打劫
    vector<int> traversal(TreeNode *node) {
        if (!node) return {0, 0};

        vector<int> left = traversal(node->left);
        vector<int> right = traversal(node->right);

        int val1 = node->val + left[1] + right[1];  // 打劫现在这家
        int val2 = max(left[0], left[1]) + max(right[0], right[1]);  // 不打劫现在这家
        return {val1, val2};
    }

    int rob(TreeNode *root) {
        vector<int> res = traversal(root);
        return max(res[0], res[1]);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
