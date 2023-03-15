#include <iostream>

using namespace std;

class Solution {
public:
    int fib(int n) {
        if (n < 2) return n;
        int a = 0, b = 1;
        int cur = 0;
        for (int i = 1; i < n; i++) {
            cur = a + b;
            a = b;
            b = cur;
        }
        return cur;
    }
};

int main() {
    Solution s;
    cout << s.fib(4);
    return 0;
}
