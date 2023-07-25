#include <iostream>
#include "stack"

using namespace std;

class MinStack {
public:
    stack<int> data;
    stack<int> minStack;

    MinStack() {

    }

    void push(int val) {
        data.push(val);
        if (minStack.empty() || minStack.top() >= val) minStack.push(val);
    }

    void pop() {
        if (data.top() == minStack.top()) {
            data.pop();
            minStack.pop();
        } else data.pop();
    }

    int top() {
        return data.top();
    }

    int getMin() {
        return minStack.top();
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
