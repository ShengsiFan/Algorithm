#include <iostream>
#include "vector"
#include "string"

using namespace std;

void PrintVector(vector<int> vec) {
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
        cout << *it << endl;
    }
    cout << endl;
}

class Solution {
public:
    bool isAnagrams(int *a, int *b) {
        for (int i = 0; i < 26; ++i) {
            if (a[i] != b[i]) {
                return false;
            }
        }
        return true;
    }
    vector<int> findAnagrams(const string &s, string p) {
        vector<int> res;
        if (s.size()<p.size()){
            return res;
        }
        int hashP[26] = {0};
        int hashS[26] = {0};
        for (int i = 0; i < p.size(); ++i) {
            hashP[p[i] - 'a']++;
        }
        for (int left = 0, right = 0; right < s.size(); ++right) {
            hashS[s[right] - 'a']++;
            if (right - left + 1 > p.size()) {
                hashS[s[left++] - 'a']--;
            }
            if (isAnagrams(hashS, hashP)) {
                res.push_back(left);
            }
        }

        return res;
    }
};

int main() {
    string a = "aaaa", b = "a";
    Solution s;
    PrintVector(s.findAnagrams(a, b));

    return 0;
}

