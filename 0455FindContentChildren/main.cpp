#include <iostream>
#include "vector"
#include "algorithm"

using namespace std;

class Solution {
public:
    int findContentChildren(vector<int> &g, vector<int> &s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int count = 0;
        int kidIndex = g.size() - 1;

        for (int i = s.size() - 1; i >= 0; i--) {
            while (kidIndex >= 0 && g[kidIndex] > s[i]) {
                kidIndex--;
            }
            if (kidIndex == -1) break;
            count++;
            kidIndex--;
        }
        return count;
    }
};

int main() {
    vector<int> g = {1, 2};
    vector<int> s = {1, 2, 3};

    Solution a;

    cout << a.findContentChildren(g, s);

    return 0;
}
