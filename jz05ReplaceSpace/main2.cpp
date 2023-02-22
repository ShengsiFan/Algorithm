#include <iostream>
#include "string"

using namespace std;

class Solution {
public:
    string replaceSpace(string s) {
        int count = 0;
        for (char str : s) {
            if (str == ' ') count++;
        }
        cout << "old size is " << s.size() << endl;
        int temp = s.size() - 1;
        s.resize(s.size() + 2 * count);
        cout << "new size is " << s.size() << endl;

        for (int i = s.size() - 1; i > temp; i--, temp--) {
            if (s[temp] == ' ') {
                s[i] = '0';
                s[i - 1] = '2';
                s[i - 2] = '%';
                i -= 2;
            } else {
                s[i] = s[temp];
            }
        }
        return s;
    }
};

int main() {
    string s = "we are happy";

    Solution a;

    cout << a.replaceSpace(s) << endl;

    return 0;
}
