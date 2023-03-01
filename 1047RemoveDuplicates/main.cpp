#include <iostream>
#include "stack"
#include "string"

using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        int count = 0;
        for (int i = 0; i < s.size(); i++) {
            if (st.empty() || s[i] != st.top()) {
                st.push(s[i]);
            }
            else {
                st.pop();
                count++;
            }
        }
        s.resize(s.size() - 2 * count);
        int i = s.size()-1;
        while (!st.empty()) {
            s[i--] = st.top();
            st.pop();
        }
        return s;
    }
};

int main() {
    string s = "abbaca";
    Solution a;
    cout << a.removeDuplicates(s) << endl;
    return 0;
}
