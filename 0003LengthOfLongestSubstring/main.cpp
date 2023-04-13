#include <iostream>
#include "vector"
#include "string"
#include "unordered_map"

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.empty()) return 0;
        if (s.size() == 1) return 1;
        unordered_map<int, int> hash;   // 字母 - 位置
        int left = 0;
        int res = 0;
        hash[s[0] - 'a'] = 0;
        int right = 1;
        for (; right < s.size(); right++) {
            if (!hash[s[right] - 'a'] && s[right] != s[0]) hash[s[right] - 'a'] = right;
            else {
                res = max(res, right - left);   // 收集一个结果
                for (; left <= hash[s[right] - 'a']; left++) hash[s[left] - 'a'] = 0;
                hash[s[right] - 'a'] = right;
            }
        }
        res = max(res, right - left);
        return res;
    }
};

int main() {
    string s = "aab";
    Solution so;
    cout << so.lengthOfLongestSubstring(s);
    return 0;
}
