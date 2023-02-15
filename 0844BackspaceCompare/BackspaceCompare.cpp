/*
给定 s 和 t 两个字符串，当它们分别被输入到空白的文本编辑器后，如果两者相等，返回 true 。# 代表退格字符。

注意：如果对空文本输入退格字符，文本继续为空。
 */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int slow_s = 0;
        for (int fast = 0; fast < s.size(); ++fast) {
            if (s[fast] != '#') {
                s[slow_s++] = s[fast];

            } else {
                if (slow_s == 0) {
                    slow_s = 0;
                } else {
                    slow_s--;
                }
            }
        }
        if (slow_s != s.size()) {
            int temp = s.size();
            for (int i = slow_s; i < temp; i++) {
                s.pop_back();
            }
        }

        int slow_t = 0;
        for (int fast = 0; fast < t.size(); ++fast) {
            if (t[fast] != '#') {
                t[slow_t++] = t[fast];

            } else {
                if (slow_t == 0) {
                    slow_t = 0;
                } else {
                    slow_t--;
                }
            }
        }
        if (slow_t != t.size()) {
            int temp = t.size();
            for (int i = slow_t; i < temp; i++) {
                t.pop_back();
            }
        }

        if (s.compare(t) == 0) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    string s = "abx##d";
    string t = "abd##d";

    Solution sol;

    cout << sol.backspaceCompare(s, t);

    return 0;
}