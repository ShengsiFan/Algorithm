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
    vector<int> res;
    bool isAnagrams(const string &s, int *hashP) {
        int hashS[26] = {0};
        for (int i = 0; i < s.size(); ++i) {
            hashS[s[i] - 'a']++;
        }
        for (int i = 0; i < 26; ++i) {
            if (hashP[i] != hashS[i]) {
                return false;
            }
        }
        return true;
    }
    vector<int> findAnagrams(const string &s, string p) {
        int hashP[26] = {0};
        for (int i = 0; i < p.size(); ++i) {
            hashP[p[i] - 'a']++;
        }
        for (int i = 0; i <= s.size() - p.size(); ++i) {
            if (isAnagrams(s.substr(i, p.size()), hashP)) {
                res.push_back(i);
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

