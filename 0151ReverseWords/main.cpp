#include <iostream>
#include "string"
#include "vector"

using namespace std;

class Solution {
public:
    void MyReverse(string &s, int begin, int end) {
        while (begin <= end) {
            swap(s[begin++], s[end--]);
        }
    }

    string reverseWords(string s) {
        int slow = 0;
        for (int fast = 0; fast < s.size(); fast++) {
            if (s[fast] != ' ') {
                if (slow != 0) {
                    s[slow++] = ' ';
                }
                while (fast < s.size() && s[fast] != ' ') {
                    s[slow++] = s[fast++];
                }
            }
        }
        s.resize(slow);
        MyReverse(s, 0, s.size() - 1);

        int left = 0, right = 0;

        while (right < s.size()) {
            if (right == s.size() - 1) {
                MyReverse(s, left, right);
                break;
            }
            if (s[right] != ' ') {
                right++;
            } else {
                MyReverse(s, left, right - 1);
                right++;
                left = right;
            }
        }
        return s;
    }
};

int main() {
    string s = "abc bc   def    gh";

    Solution b;

    cout << b.reverseWords(s) << endl;


    return 0;
}
