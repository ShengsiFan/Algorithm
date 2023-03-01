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
    vector<int> largestValues(TreeNode *root) {
        vector<int> res;
        queue<TreeNode *> q;
        if (root != nullptr) q.push(root);
        else return res;


        while (!q.empty()) {
            int size = q.size();
            int max = q.front()->val;
            while (size--) {
                TreeNode *temp = q.front();
                q.pop();
                if (temp->val > max) max = temp->val;
                if (temp->left != nullptr) q.push(temp->left);
                if (temp->right != nullptr) q.push(temp->right);
            }
            res.push_back(max);
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

    vector<int> res = s.largestValues(node1);


    for (vector<int>::iterator it2 = res.begin(); it2 != res.end(); it2++) {
        cout << *it2 << " ";
    }
    cout << endl;


    return 0;
}
