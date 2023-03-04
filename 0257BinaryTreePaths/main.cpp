#include <iostream>
#include "vector"
#include "string"

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
    void search(TreeNode *node, vector<int> &path, vector<string> &res) {
        path.push_back(node->val);
        if (node->left == nullptr && node->right == nullptr) {
            string temp;
            for (int i = 0; i < path.size(); i++) {
                if (i == 0) temp += to_string(path[i]);
                else temp += ("->" + to_string(path[i]));
            }
            res.push_back(temp);
        }

        if (node->left != nullptr) {
            search(node->left, path, res);
            path.pop_back();
        }
        if (node->right != nullptr) {
            search(node->right, path, res);
            path.pop_back();
        }
    }

    vector<string> binaryTreePaths(TreeNode *root) {
        vector<int> path;
        vector<string> res;

        if (root != nullptr) search(root, path, res);

        return res;
    }
};

int main() {
    TreeNode *node1 = new TreeNode(1);
    TreeNode *node2 = new TreeNode(2);
    TreeNode *node3 = new TreeNode(3);
    TreeNode *node4 = new TreeNode(4);
    TreeNode *node5 = new TreeNode(5);

    node1->left = node2;
    node1->right = node3;
    node2->left = node4;
    node2->right = node5;

    Solution s;

    vector<string> res = s.binaryTreePaths(node1);

    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << endl;
    }
    return 0;
}
