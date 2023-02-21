#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        int hash[26]={0};
        if (s.size()!=t.size()){
            return false;
        }

        for (int i = 0; i < s.size(); ++i) {
            hash[s[i]-'a']++;
        }
        for (int i = 0; i < t.size(); ++i) {
            hash[t[i]-'a']--;
        }

        for (int i = 0; i < 26; ++i) {
            if (hash[i]!=0){
                return false;
            }
        }
        return true;
    }
};

int main() {
    string s = "dsfdsfsd", t = "dsfdsfsd";
    Solution ss;
    cout << ss.isAnagram(s,t)<<endl;

    return 0;
}
