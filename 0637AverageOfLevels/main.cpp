#include <iostream>
#include "queue"
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
    vector<double> averageOfLevels(TreeNode *root) {
        vector<double> res;
        queue<TreeNode *> q;
        if (root != nullptr) q.push(root);
        else return res;

        while (!q.empty()) {
            int size = q.size(), n = q.size();
            double levelAverage = 0;
            while (size--) {
                TreeNode *temp = q.front();
                q.pop();
                if (temp->left != nullptr) q.push(temp->left);
                if (temp->right != nullptr) q.push(temp->right);
                levelAverage += temp->val;
            }
            res.push_back(levelAverage / n);
        }
        return res;
    }
};

int main() {
    TreeNode *node1 = new TreeNode(1);
    TreeNode *node2 = new TreeNode(2);
    TreeNode *node3 = new TreeNode(3);
    TreeNode *node4 = new TreeNode(4);
    TreeNode *node5 = new TreeNode(5);
    TreeNode *node6 = new TreeNode(6);
    TreeNode *node7 = new TreeNode(7);

    node1->left = node2;
    node1->right = node3;
    node2->left = node4;
    node2->right = node5;
    node3->left = node6;
    node3->right = node7;

    Solution s;

    vector<double> res = s.averageOfLevels(node1);


    for (vector<double>::iterator it2 = res.begin(); it2 != res.end(); it2++) {
        cout << *it2 << " ";
    }
    cout << endl;

    return 0;
}
