#include <iostream>
#include "vector"

using namespace std;

class Solution {
public:
    void reverseString(vector<char> &s) {
        int left = 0, right = s.size() - 1;
        char temp;

        while (left <= right) {
            temp = s[left];
            s[left++] = s[right];
            s[right--] = temp;
        }
    }
};

int main() {
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};

    Solution a;
    a.reverseString(s);

    for (vector<char>::iterator it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
