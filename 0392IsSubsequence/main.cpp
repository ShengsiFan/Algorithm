/*
 * 双指针法
 */
#include <iostream>
#include "string"

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int startIndex = 0;
        for (char c: s) {
            int temp = startIndex;
            for (int i = startIndex; i < t.size(); i++) {
                if (t[i] == c) {
                    startIndex = i + 1;
                    break;
                }
            }
            if (temp == startIndex) return false;
        }
        return true;
    }
};

int main() {
    string s = "acb", t = "adbc";
    Solution so;
    cout << so.isSubsequence(s, t);
    return 0;
}
