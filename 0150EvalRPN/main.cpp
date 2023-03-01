#include <iostream>
#include "stack"
#include "string"
#include "vector"

using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int front = 0, back = 1;
        for (const string& to : tokens){
            if (to != "+" && to != "-" && to != "*" && to != "/") {
                st.push(stoi(to));
            } else if (to == "+"){
                back = st.top();
                st.pop();
                front = st.top();
                st.pop();
                st.push(front + back);
            } else if (to == "-"){
                back = st.top();
                st.pop();
                front = st.top();
                st.pop();
                st.push(front - back);
            } else if (to == "*"){
                back = st.top();
                st.pop();
                front = st.top();
                st.pop();
                st.push(front * back);
            } else if (to == "/"){
                back = st.top();
                st.pop();
                front = st.top();
                st.pop();
                st.push(front / back);
            }
        }

        return st.top();
    }
};

int main() {
    vector<string> v = {"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"};
    Solution s;
    cout << s.evalRPN(v) << endl;
    return 0;
}