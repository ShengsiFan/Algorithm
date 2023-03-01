#include <iostream>
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
    int minDepth(TreeNode *root) {
        queue<TreeNode *> q;
        int count = 0;
        if (root== nullptr) return count;
        else q.push(root);
        while (!q.empty()){
            count++;
            int size = q.size();
            while (size--){
                TreeNode* temp = q.front();
                q.pop();
                if (temp->left == nullptr && temp->right== nullptr) return count;
                if (temp->left!= nullptr) q.push(temp->left);
                if (temp->right!= nullptr) q.push(temp->right);
            }
        }
        return count;
    }
};

int main() {
    TreeNode* node1 = new TreeNode(1);
    TreeNode* node2 = new TreeNode(2);
    TreeNode* node3 = new TreeNode(3);
    TreeNode* node4 = new TreeNode(4);
    TreeNode* node5 = new TreeNode(5);

    node1->left = node2;
    node1->right = node3;
    node2->left = node4;
    node2->right = node5;

    Solution s;

    cout << s.minDepth(node1) << endl;
    return 0;
}
