#include <iostream>
#include "queue"
#include "vector"

using namespace std;

class Node {
public:
    int val;
    vector<Node *> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node *> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
public:
    vector<vector<int>> levelOrder(Node *root) {
        vector<vector<int>> res;
        queue<Node *> q;
        if (root != nullptr) q.push(root);
        else return res;

        while (!q.empty()) {
            int size = q.size();
            vector<int> levelArr;
            while (size--) {
                Node *temp = q.front();
                q.pop();
                levelArr.push_back(temp->val);
                for (int i = 0; i < temp->children.size(); i++) {
                    if (temp->children[i] != nullptr) q.push(temp->children[i]);

                }
            }
            res.push_back(levelArr);
        }
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
