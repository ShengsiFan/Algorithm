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
    void traversal(TreeNode *node, vector<int> &res, TreeNode *&pre, int &count, int &max) {
        if (!node) return;

        traversal(node->left, res, pre, count, max);

        if (!pre || node->val != pre->val) count = 1;
        else if (node->val == pre->val) count++;

        pre = node;

        if (count == max) res.push_back(node->val);
        if (count > max) {
            res.clear();
            res.push_back(node->val);
            max = count;
        }

        traversal(node->right, res, pre, count, max);
    }

    vector<int> findMode(TreeNode *root) {
        vector<int> res;
        TreeNode *pre = nullptr;
        int count = 0;
        int max = 0;

        traversal(root, res, pre, count, max);
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
