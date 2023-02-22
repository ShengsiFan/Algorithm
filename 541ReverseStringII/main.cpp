#include <iostream>
#include "string"

using namespace std;

class Solution {
public:
    string reverseStr(string s, int k) {
        int times = s.size() / 2 / k;
        int left = 0, right = 0;
        for (int i = 0; i < times; i++) {
            left = i * 2 * k;
            right = i * 2 * k + k - 1;
            while (left <= right) {
                swap(s[left++], s[right--]);
            }
        }
        if (s.size() / k % 2) {
            left = times * 2 * k;
            right = times * 2 * k + k - 1;
            while (left <= right) {
                swap(s[left++], s[right--]);
            }
        } else {
            left = times * 2 * k;
            right = s.size() - 1;
            while (left <= right) {
                swap(s[left++], s[right--]);
            }
        }

        return s;
    }
};

int main() {
    string s = "abcd";

    Solution a;
    string b = a.reverseStr(s, 2);

    cout << b << endl;
    return 0;
}
