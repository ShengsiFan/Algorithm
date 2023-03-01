#include <iostream>
#include "stack"

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> ss;
        for (int i = 0; i < s.size(); i++){
            if (s[i] == '(') ss.push(')');
            else if (s[i] == '[') ss.push(']');
            else if (s[i] == '{') ss.push('}');
            else if (ss.empty() || ss.top() != s[i]) return false;
            else ss.pop();
        }
        return ss.empty();
    }
};

int main() {
    Solution s;

    string r = "()";

    cout << s.isValid(r) << endl;

    return 0;
}
