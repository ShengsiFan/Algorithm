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
    TreeNode *constructMaximumBinaryTree(vector<int> &nums) {
        if (nums.size() == 0) return nullptr;

        // 遍历数组找最大值及其下标
        int rootVal = nums[0], rootIndex = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (rootVal < nums[i]) {
                rootVal = nums[i];
                rootIndex = i;
            }
        }

        TreeNode *root = new TreeNode(rootVal); // 构造根节点

        // 切分左右数组
        vector<int> left(nums.begin(), nums.begin() + rootIndex);
        vector<int> right(nums.begin() + rootIndex + 1, nums.end());

        TreeNode *leftChild = constructMaximumBinaryTree(left);    // 左
        TreeNode *rightChild = constructMaximumBinaryTree(right);   // 右

        root->left = leftChild;
        root->right = rightChild;

        return root;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
