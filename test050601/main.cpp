#include <iostream>
#include "vector"
#include "unordered_map"
using namespace std;
int main() {
    int holeNum = 14;
    int prin = 0xE77F;
    int Xnum = 1;
    vector<int> state(16*Xnum,0);
    int i  = 16*Xnum-1;
    while (prin!=0) {
        state[i] = prin %2;
        prin/=2;
        i--;
    }
    unordered_map<int,int> m;
    int minErrorHole = holeNum;
    int maxErrorHole = -1;
    vector<int> errorHole;
    for (int j = 0; j <holeNum;j++) {
        if (state[j]==0){
            m[j] = 0;
            errorHole.push_back(j);
            minErrorHole = min(minErrorHole,j);
            maxErrorHole = max(maxErrorHole,j);
        } else m[j] = 1;
    }
    int maxRight = minErrorHole;
    int maxLeft = holeNum - maxRight;

    bool valL = false, valR = false;
    int left = 0;
    int right = 0;
    for (int k = 1; k < minErrorHole;k++) {
        valR = true;
        for (auto error:errorHole) {
            if (m[error-k]==0){
                valR = false;
                break;
            }
        }
        if (valR) {
            right = k;
            break;
        }
    }
    for (int k = 1; k < maxLeft;k++) {
        valR = true;
        for (auto error:errorHole) {
            if (m[error-k]==0){
                valR = false;
                break;
            }
        }
        if (valR) {
            right = k;
            break;
        }
    }
    return 0;
}
