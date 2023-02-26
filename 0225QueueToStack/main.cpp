#include <iostream>
#include "queue"

using namespace std;

class MyStack {
public:
    MyStack() {
        size = 0;
    }

    void push(int x) {
        q.push(x);
        size++;
    }

    int pop() {
        int n = size - 1;
        while (n--) {
            int temp = q.front();
            q.pop();
            q.push(temp);
        }
        int res = q.front();
        q.pop();
        size--;
        return res;
    }

    int top() {
        int temp = this->pop();
        this->push(temp);
        return temp;
    }

    bool empty() {
        if (q.empty()) return true;
        else return false;
    }

private:
    queue<int> q;
    int size;
};

int main() {
    MyStack s;
    s.push(1);
    cout << s.top() << endl;
    s.push(2);
    cout << s.top() << endl;
    s.push(3);
    cout << s.top() << endl;
    s.push(4);
    cout << s.top() << endl;
    return 0;
}
