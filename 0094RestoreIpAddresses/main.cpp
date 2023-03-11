#include <iostream>
#include "string"
#include "vector"

using namespace std;

class Solution {
public:
    vector<string> res;

    bool isValid(const string &s, int start, int end) {
        if (start > end) return false;
        if (s[start] == '0' && start != end) return false;
        int num = 0;
        for (int i = start; i < end + 1; i++) {
            if (s[i] > '9' || s[i] < '0') return false;
            num = num * 10 + (s[i] - '0');
            if (num > 255) return false;
        }
        return true;
    }

    void traversal(int startIndex, int num, string &s) {
        if (num == 4 && isValid(s, startIndex, s.size() - 1)) {
            res.push_back(s);
            return;
        }
        for (int i = startIndex; i < s.size(); i++) {
            if (isValid(s, startIndex, i)) {
                num++;
                s.insert(s.begin() + i + 1, '.');
                traversal(i + 2, num, s);
                num--;
                s.erase(s.begin() + i + 1);
            } else break;
        }
    }

    vector<string> restoreIpAddresses(string s) {
        if (s.size() < 4 || s.size() > 12) return res;
        traversal(0, 1, s);
        return res;
    }
};

int main() {

    return 0;
}
