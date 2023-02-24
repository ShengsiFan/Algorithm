#include <iostream>
#include "string"

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (haystack.size() < needle.size()) return -1;
        if (haystack.size() == needle.size()) {
            for (int i = 0; i < haystack.size(); i++) {
                if (haystack[i] != needle[i]) return -1;
            }
            return 0;
        }
        for (int i = 0; i <= haystack.size() - needle.size(); i++) {
            cout << "dsf" << endl;
            if (haystack[i] == needle[0]) {
                int count = 0;

                for (int j = 0; j < needle.size(); j++) {
                    if (haystack[i + j] == needle[j]) count++;

                }
                if (count == needle.size()) return i;
            }
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
