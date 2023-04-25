// 哈希表存数据，队列维护访问记录——超时
#include <iostream>
#include "unordered_map"
#include "queue"

using namespace std;

class LRUCache {
public:
    queue<int> q;   // 用于查看哪个最久没使用
    unordered_map<int,int> data;
    int cap = 0;
    void updateQ(int key) {
        queue<int> temp;
        while (q.front() != key) {
            temp.push(q.front());
            q.pop();
        }
        q.pop();
        while (!q.empty()) {
            temp.push(q.front());
            q.pop();
        }
        q = temp;
        q.push(key);
    }
    LRUCache(int capacity) {
        cap = capacity;
    }

    int get(int key) {
        if (data.find(key) == data.end()) return -1;
        else {
            updateQ(key);
            return data[key];
        }
    }

    void put(int key, int value) {
        if (data.find(key) != data.end()) {
            updateQ(key);
            data[key] = value;
            return;
        }
        if (q.size() != cap) {
            data[key] = value;
            q.push(key);
        }
        else {
            data.erase(q.front());
            q.pop();
            q.push(key);
            data[key] = value;
        }
    }
};

int main() {
    LRUCache res(2);
    res.put(1,1);
    res.put(2,2);
    cout << res.get(1) << endl;
    res.put(3,3);
    cout << res.get(2) << endl;
    res.put(4,4);
    cout << res.get(1) << endl;
    cout << res.get(3) << endl;
    cout << res.get(4) << endl;
    return 0;
}
