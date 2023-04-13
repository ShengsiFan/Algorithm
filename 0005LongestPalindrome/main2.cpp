/*
 * 两边扩展法
 */
#include <iostream>
#include "string"

using namespace std;

class Solution {
public:
    string extend(const string &s, int begin, int end) {
        while (begin >= 0 && end < s.size()) {
            if (s[begin] == s[end]) {
                begin--;
                end++;
            } else return s.substr(begin + 1, end - begin - 1);
        }
        return s.substr(begin + 1, end - begin - 1);
    }

    string longestPalindrome(string s) {
        string res;
        for (int i = 0; i < s.size(); i++) {
            string temp = extend(s, i, i);
            if (temp.size() > res.size()) res = temp;
        }
        for (int i = 0; i < s.size() - 1; i++) {
            string temp = extend(s, i, i + 1);
            if (temp.size() > res.size()) res = temp;
        }
        return res;
    }
};


int main() {
    string str = "abbc";
    Solution s;
    cout << s.longestPalindrome(str);

    return 0;
}