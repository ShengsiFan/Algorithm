#include <iostream>
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
    int getHeight(Node *n) {
        if (n == nullptr) return 0;
        int max = 0;
        for (int i = 0; i < n->children.size(); i++) {
            int temp = getHeight(n->children[i]);
            max = temp < max ? max : temp;
        }
        return 1 + max;
    }

    int maxDepth(Node *root) {
        return getHeight(root);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
