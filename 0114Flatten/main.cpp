#include <iostream>
#include "vector"
#include "queue"

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
    void traversal(TreeNode *node, vector<TreeNode*> &v) {
        if (!node) return;
        v.push_back(node);
        traversal(node->left,v);
        traversal(node->right,v);
    }

    void flatten(TreeNode *root) {
        vector<TreeNode*> v;
        traversal(root,v);
        for (int i = 1; i < v.size(); i++) {
           // TreeNode *preNode = v[i-1],*curNode = v[i];
            v[i-1]->left = nullptr;
            v[i-1]->right = v[i];
        }
    }
};

int main() {

    return 0;
}
