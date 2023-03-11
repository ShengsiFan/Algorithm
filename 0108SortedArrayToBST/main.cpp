#include <iostream>
#include <vector>
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
    TreeNode *sortedArrayToBST(vector<int> &nums) {
        if (nums.empty()) return nullptr;

        TreeNode *root = new TreeNode(nums[nums.size() / 2]); // 构造本节点
        vector<int> leftArr(nums.begin(), nums.begin() + nums.size() / 2);
        vector<int> rightArr(nums.begin() + nums.size() / 2 + 1, nums.end());

        root->left = sortedArrayToBST(leftArr);
        root->right = sortedArrayToBST(rightArr);
        return root;
    }
};

int main() {
    vector<int> test = {1,3};

    Solution s;

    TreeNode *root = s.sortedArrayToBST(test);

    queue<TreeNode *> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size();
        while (size--) {
            TreeNode *temp = q.front();
            q.pop();
            if (temp) cout << temp->val << " ";
            else cout << "n ";
            if (temp->left) q.push(temp->left);
            if (temp->right) q.push(temp->right);
        }
        cout << endl;
    }

    return 0;
}
