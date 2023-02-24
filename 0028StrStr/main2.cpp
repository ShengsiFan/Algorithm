#include <iostream>
#include "string"

using namespace std;

class Solution {
public:
    void nextCal(int *next, const string str) {
        int j = 0;
        next[0] = 0;

        for (int i = 1; i < str.size(); i++) {
            while (j > 0 && str[i] != str[j]) {
                j = next[j - 1];
            }
            if (str[i] == str[j]) j++;
            next[i] = j;
        }
    }

    int strStr(string haystack, string needle) {
        if (needle.size() == 0) return 0;
        int next[needle.size()];
        nextCal(next, needle);
        int j = 0;
        for (int i = 0; i < haystack.size(); i++) {
            while (j > 0 && haystack[i] != needle[j]) {
                j = next[j - 1];
            }
            if (haystack[i] == needle[j]) j++;
            if (j == needle.size()) return i - needle.size() + 1;
        }
        return -1;
    }
};

int main() {
    string h = "abc", n = "c";
    Solution s;
    cout << s.strStr(h, n) << endl;

    return 0;
}
