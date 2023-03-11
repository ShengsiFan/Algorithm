#include <iostream>
#include "vector"
#include "string"

using namespace std;

class Solution {
public:
    bool isPalindromic(string s) {
        for (int i = 0; i < s.size() / 2; i++) {
            if (s[i] != s[s.size() - i - 1]) return false;
        }
        return true;
    }

    void traversal(const string &s, vector<string> &path, int startIndex, vector<vector<string>> &res) {
        if (startIndex >= s.size()) {
            res.push_back(path);
            return;
        }

        for (int i = startIndex; i < s.size(); i++) {
            string temp(s.begin() + startIndex, s.begin() + i + 1);
            if (isPalindromic(temp)) path.push_back(temp);
            else continue;

            traversal(s, path, i + 1, res);
            path.pop_back();
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> path;
        traversal(s, path, 0, res);
        return res;
    }
};

int main() {
    string s = "aab";
    Solution so;
    vector<vector<string>> res = so.partition(s);

    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++) {
            cout << res[i][j] << "-";
        }
        cout << endl;
    }

    return 0;
}
