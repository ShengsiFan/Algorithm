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
    TreeNode *deleteNode(TreeNode *root, int key) {
        if (!root) return root;
        if (root->val == key) {
            if (!root->left && !root->right) {
                delete root;
                return nullptr;
            } else if (root->left && !root->right) {
                TreeNode *temp = root->left;
                delete root;
                return temp;
            } else if (root->right && !root->right) {
                TreeNode *temp = root->right;
                delete root;
                return temp;
            } else {
                TreeNode *cur = root->right;
                while (cur->left) cur = cur->left;

                cur->left = root->left;
                TreeNode *temp = root;
                root = root->right;
                delete temp;
                return root;
            }
        }
        if (root->val > key) root->left = deleteNode(root->left, key);
        if (root->val < key) root->right = deleteNode(root->right, key);

        return root;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
