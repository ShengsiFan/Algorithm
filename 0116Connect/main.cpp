#include <iostream>
#include "queue"

using namespace std;

class Node {
public:
    int val;
    Node *left;
    Node *right;
    Node *next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node *_left, Node *_right, Node *_next)
            : val(_val), left(_left), right(_right), next(_next) {}
};

class Solution {
public:
    Node *connect(Node *root) {
        queue<Node *> q;
        if (root == nullptr) return root;
        else q.push(root);

        while (!q.empty()) {
            int size = q.size();
            while (size--) {
                Node *temp(q.front());
                q.pop();
                if (size == 1) {
                    temp->next = nullptr;
                } else {
                    temp->next = q.front();
                }
                if (temp->left != nullptr) q.push(temp->left);
                if (temp->right != nullptr) q.push(temp->right);
            }
        }
        return root;
    }
};

int main() {

    return 0;
}
