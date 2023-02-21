#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int hash[26]={0};
        for (int i = 0; i < ransomNote.size(); i++){
            hash[ransomNote[i]-'a']++;
        }
        for (int i = 0; i < magazine.size(); i++){
            hash[magazine[i]-'a']--;
        }
        for (int i = 0; i < 26; i++){
            if (hash[i]>0){
                return false;
            }
        }
        return true;
    }
};

int main() {
    string s = "aads", t = "aabsdfds";
    Solution ss;

    cout << ss.canConstruct(s,t);

    return 0;
}
