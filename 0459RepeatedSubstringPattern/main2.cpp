#include <iostream>
#include "string"

using namespace std;

class Solution {
public:
    void getNext(int *nextArr, string s) {
        int j = 0;
        for (int i = 1; i < s.size(); i++) {
            while (j > 0 && s[i] != s[j]) {
                j = nextArr[j - 1];
            }
            if (s[j] == s[i]) j++;
            nextArr[i] = j;
        }
    }

    bool repeatedSubstringPattern(string s) {
        if (s.size() == 0) return false;
        int next[s.size()];
        getNext(next, s);

        if (next[s.size() - 1] != 0 && !(s.size() % (s.size() - next[s.size() - 1]))) return true;
        return false;
    }
};

int main() {
    Solution s;
    string str = "abab";
    cout << s.repeatedSubstringPattern(str);
    return 0;
}
