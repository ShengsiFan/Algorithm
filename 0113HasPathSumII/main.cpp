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
    void traversal(TreeNode* node, int targetSum, vector<int> &path, int &sum, vector<vector<int>> &res){
        if (node->left== nullptr && node->right == nullptr){    // 递归结束：到叶子节点。如果和为target，加进结果数组
            if (sum == targetSum){
                res.push_back(path);
                return;
            }
            return;
        }

        if (node->left) {
            sum+=node->left->val;
            path.push_back(node->left->val);
            traversal(node->left, targetSum, path, sum,res);
            sum-=node->left->val;
            path.pop_back();
        }
        if (node->right){
            sum+=node->right->val;
            path.push_back(node->right->val);
            traversal(node->right,targetSum,path,sum,res);
            sum-=node->right->val;
            path.pop_back();
        }
    }
    vector <vector<int>> pathSum(TreeNode *root, int targetSum) {
        vector<vector<int>> res;
        vector<int> path;
        int sum = 0;
        if (root) {
            path.push_back(root->val);
            sum+=root->val;
            traversal(root,targetSum,path,sum,res);
        }
        return res;
    }
};

int main() {
    TreeNode *node1 = new TreeNode(5);
    TreeNode *node2 = new TreeNode(4);
    TreeNode *node3 = new TreeNode(8);
    TreeNode *node4 = new TreeNode(11);
    TreeNode *node5 = new TreeNode(13);
    TreeNode *node6 = new TreeNode(4);
    TreeNode *node7 = new TreeNode(7);
    TreeNode *node8 = new TreeNode(2);
    TreeNode *node9 = new TreeNode(5);
    TreeNode *node10 = new TreeNode(1);

    node1->left = node2;
    node1->right = node3;
    node2->left = node4;
    node3->left = node5;
    node3->right = node6;
    node4->left = node7;
    node4->right = node8;
    node6->left = node9;
    node6->right = node10;

    Solution s;

    vector<vector<int>> res = s.pathSum(node1,22);

    for (vector<vector<int>>::iterator it1 = res.begin(); it1 !=res.end();it1++){
        for (vector<int>::iterator it2 = it1->begin(); it2!=it1->end();it2++){
            cout << *it2 << " ";
        }
        cout << endl;
    }

    return 0;
}
