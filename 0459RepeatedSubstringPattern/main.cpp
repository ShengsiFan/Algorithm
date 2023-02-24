#include <iostream>
#include "string"

using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string doubleS = s + s;
        doubleS.erase(doubleS.begin());
        doubleS.erase(doubleS.end() - 1);
        if (doubleS.find(s) != string::npos) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    Solution s;
    string str = "abab";
    cout << s.repeatedSubstringPattern(str);
    return 0;
}
