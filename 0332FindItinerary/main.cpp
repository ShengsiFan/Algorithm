#include <iostream>
#include "vector"
#include "unordered_map"
#include "map"
#include "string"

using namespace std;

class Solution {
public:
    unordered_map<string, map<string, int>> mapTickets; // 记录机票信息，出发地、目的地、目的地到达次数
    bool traversal(vector<string> &res, int num) {
        if (res.size() == num + 1) return true;

        for (pair<const string, int> &target : mapTickets[res[res.size() - 1]]) {
            // res的最后一个元素就是本次的起点。mapTickets[res[res.size()-1]]就是找起点为这个地方的机票
            if (target.second > 0) {
                res.push_back(target.first);
                target.second--;
                if (traversal(res, num)) return true;
                target.second++;
                res.pop_back();
            }
        }
        return false;
    }

    vector<string> findItinerary(vector<vector<string>> &tickets) {
        vector<string> res;
        mapTickets.clear();
        for (const vector<string> &t : tickets) {
            mapTickets[t[0]][t[1]]++;
        }
        res.push_back("JFK");
        traversal(res, tickets.size());

        return res;
    }
};

int main() {

    unordered_map<string, map<string, map<string, int>>> test;

    test["aaa"]["bbb"]["ccc"] = 1;

    return 0;
}
