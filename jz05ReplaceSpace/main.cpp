#include <iostream>
#include "string"

using namespace std;

class Solution {
public:
    string replaceSpace(string s) {
        string res;
        for (char str : s) {
            if (str == ' ') {
                res.push_back('%');
                res.push_back('2');
                res.push_back('0');
            } else {
                res.push_back(str);
            }
        }
        return res;
    }
};

int main() {
    string s = "we are happy";

    Solution a;

    cout << a.replaceSpace(s) << endl;

    return 0;
}
