#include <iostream>

using namespace std;

template<class T>
class Node {
public:
    Node(T val) : value(val), next(nullptr) {}

private:
    T value;
    Node *next;
};

template<class T>
class list {
public:

private:
    int len;
    Node<T> *header;
};

int main() {
    cout << "Hello, World!" << std::endl;
    return 0;
}
