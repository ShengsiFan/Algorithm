#include <iostream>
#include "vector"
#include "string"

using namespace std;

class Solution {
public:
    vector<string> letterTable = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    void traversal(string digits, vector<string> &res, int index, string &s) {
        if (s.size() == digits.size()) {
            res.push_back(s);
            return;
        }

        for (int i = 0; i < letterTable[int(digits[index] - '0')].size(); i++) {
            s.push_back(letterTable[int(digits[index] - '0')][i]);
            traversal(digits, res, index + 1, s);
            s.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if (digits.empty()) return res;
        string s;
        traversal(digits, res, 0, s);
        return res;
    }
};

int main() {
    string digits = "23";

    Solution s;
    vector<string> a = s.letterCombinations(digits);

    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << endl;
    }


    return 0;
}