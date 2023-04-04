#include <iostream>
#include "array"
#include "string"

using namespace std;

int main() {
    string s, res;
    array<bool, 58> hash{false};   // 哈希表，看有没有字母有没有出现过
    cin >> s;
    for (char c : s) {
        if (hash[c - 'A']) continue;
        hash[c - 'A'] = true;
        res.push_back(c);
    }
    cout << res;
    return 0;
}
// 64 位输出请用 printf("%lld")