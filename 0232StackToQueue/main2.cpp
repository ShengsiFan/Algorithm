#include <iostream>
#include "stack"

using namespace std;

class MyQueue {
public:
    MyQueue() {

    }

    void push(int x) {
        inStack.push(x);
    }

    int pop() {
        if (outStack.empty()){
            while (!inStack.empty()) {
                outStack.push(inStack.top());
                inStack.pop();
            }
        }
        int res = outStack.top();
        outStack.pop();
        return res;
    }

    int peek() {
        int res = this->pop();
        outStack.push(res);
        return res;
    }

    bool empty() {
        if (inStack.empty() && outStack.empty()) return true;
        else return false;
    }

protected:
    stack<int> inStack;
    stack<int> outStack;
};

int main() {
    MyQueue q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    q.pop();

    while (!q.empty()){
        cout << q.pop() << endl;
    }

    return 0;
}
