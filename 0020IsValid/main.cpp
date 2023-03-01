#include <iostream>
#include "stack"

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> ss;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ')' && s[i] != ']' && s[i] != '}') {
                ss.push(s[i]);
            } else {
                int flag = 0;
                switch (s[i]) {
                    case ')':
                        while (!ss.empty()) {
                            if (ss.top() == '(') {
                                ss.pop();
                                flag = 1;
                                break;
                            } else if (ss.top() == '{' || ss.top() == '[') {
                                return false;
                            } else {
                                ss.pop();
                            }
                        }
                        if (flag == 0){
                            return false;
                        }else{
                            break;
                        }
                    case ']':
                        while (!ss.empty()) {
                            if (ss.top() == '[') {
                                ss.pop();
                                flag = 1;
                                break;
                            } else if (ss.top() == '{' || ss.top() == '(') {

                                return false;
                            } else {
                                ss.pop();
                            }
                        }
                        if (flag == 0){
                            return false;
                        }else{
                            break;
                        }
                    case '}':
                        while (!ss.empty()) {
                            if (ss.top() == '{') {
                                ss.pop();
                                flag = 1;
                                break;
                            } else if (ss.top() == '[' || ss.top() == '(') {
                                return false;
                            } else {
                                ss.pop();
                            }
                        }
                        if (flag == 0){
                            return false;
                        }else{
                            break;
                        }
                }
            }
        }
        while (!ss.empty()) {
            if (ss.top() == '{' || ss.top() == '[' || ss.top() == '(') {
                return false;
            } else {
                ss.pop();
            }
        }
        return true;
    }
};

int main() {
    Solution s;

    string r = "()";

    cout << s.isValid(r) << endl;

    return 0;
}
