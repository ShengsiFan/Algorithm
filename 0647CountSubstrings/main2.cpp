/*
 * 双指针法实现
 */
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int extend(int begin, int end, const string &s) {
        int res = 0;
        while (begin >= 0 && end < s.size()) {
            if (s[begin] == s[end]) {
                res++;
                begin--;
                end++;
            } else return res;
        }
        return res;
    }

    int countSubstrings(string s) {
        int res = 0;
        for (int i = 0; i < s.size()-1; i++) {
            res += this->extend(i,i,s);
            res += this->extend(i,i+1,s);
        }
        return res + 1;
    }
};


int main() {
    string str = "abc";
    Solution s;
    cout << s.countSubstrings(str);
    return 0;
}