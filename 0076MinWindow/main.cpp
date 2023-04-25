#include <iostream>
#include <string>
#include "unordered_map"
#include "climits"

using namespace std;

class Solution {
public:
    bool isAllIn(const unordered_map<char, int> &need) {
        for (const auto &i: need) if (i.second > 0) return false;
        return true;
    }

    string minWindow(string s, string t) {
        unordered_map<char, int> need;
        for (char c: t) need[c]++;
        int left = 0, right = 0;
        int min = INT_MAX;
        int ansL = -1;
        for (; right < s.size(); right++) {
            need[s[right]]--;
            while (isAllIn(need) && left <= right) {
                if (right - left + 1 < min) {
                    min = right - left + 1;
                    ansL = left;
                }
                need[s[left]]++;
                left++;
            }
        }
        return ansL == -1 ? string() : s.substr(ansL, min);
    }
};

int main() {
    string s = "a", t = "aa";
    Solution so;
    string res = so.minWindow(s, t);
    cout << res;
    return 0;
}
