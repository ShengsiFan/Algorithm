#include <iostream>
#include "vector"

using namespace std;

class Solution {
public:
    int lenth = 0;

    bool traversal(const vector<int> &match, vector<int> &sum, int index) {
        if (index == match.size()) {
            for (int i : sum) {
                if (i != lenth) return false;
            }
            return true;
        }

        for (int i = 0; i < 4; i++) {
            if (sum[i] + match[index] > lenth) continue;

            sum[i] += match[index];
            if (traversal(match, sum, index + 1)) return true;
            else sum[i] -= match[index];

            if (sum[i] == 0) break;
        }
        return false;
    }

    bool makesquare(vector<int> &matchsticks) {
        vector<int> sum(4, 0);
        for (int i:matchsticks) lenth += i;

        if (lenth % 4)return false;
        lenth /= 4;
        return traversal(matchsticks, sum, 0);
    }
};

int main() {
    vector<int> a = {1, 1, 2, 2, 2};
    Solution s;
    cout << s.makesquare(a);
    return 0;
}
