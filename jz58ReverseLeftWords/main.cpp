#include <iostream>
#include "string"

using namespace std;

class Solution {
public:
    void MyReverse(string &s, int begin, int end) {
        while (begin <= end) {
            swap(s[begin++], s[end--]);
        }
    }

    void MyReverse(string &s) {
        int begin = 0, end = s.size() - 1;
        while (begin <= end) {
            swap(s[begin++], s[end--]);
        }
    }

    string reverseLeftWords(string s, int n) {
        MyReverse(s, 0, n - 1);
        MyReverse(s, n, s.size() - 1);
        MyReverse(s);
        return s;
    }
};

int main() {

    Solution a;

    cout << a.reverseLeftWords("abcdefg", 2) << endl;

    return 0;
}
