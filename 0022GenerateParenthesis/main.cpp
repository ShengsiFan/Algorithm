#include <iostream>
#include "vector"
#include "string"

using namespace std;

class Solution {
public:
    int left = 0, right = 0;
    vector<string> res;

    void traversal(string &path) {

        if (left == 0 && right == 0) {
            path.push_back(')');
            res.push_back(path);
            path.pop_back();
            return;
        }
        else if (left - right > 1) return;
        if (left > 0) {
            left--;
            path.push_back('(');
            traversal(path);
            path.pop_back();
            left++;
        }
        if (right > 0) {
            right--;
            path.push_back(')');
            traversal(path);
            path.pop_back();
            right++;
        }
    }

    vector<string> generateParenthesis(int n) {
        left = n - 1;
        right = n - 1;
        string path = "(";
        traversal(path);
        return res;
    }
};

int main() {
    Solution s;
    vector<string> res = s.generateParenthesis(3);
//    for (string str: res) {
//        cout << str << " ";
//    }
    return 0;
}
