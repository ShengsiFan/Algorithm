#include <iostream>
#include <vector>
#include "queue"

using namespace std;

int main() {
    int num_lines = 0;
    cin >> num_lines;
    vector<vector<int>> graph(num_lines, vector<int>(num_lines, 0));
    vector<int> in_degrees(num_lines, 0);
    for (int i = 0; i < num_lines; i++) {
        int num_dependencies = 0;
        cin >> num_dependencies;
        for (int j = 0; j < num_dependencies; j++) {
            int dep = 0;
            graph[dep - 1][i] = 1;
            in_degrees[i]++;
        }
    }
    int init = 0;
    int pop = 0;
    for (; init < num_lines; init++) {
        int v = -1;
        for (int i = 0; i < num_lines; i++) {
            if (in_degrees[i] != 0) continue;
            v = i;
            in_degrees[i] = -1;
            pop++;
            for (int k = 0; k < num_lines; k++) {
                auto adj = graph[v][k];
                if (adj) in_degrees[k]--;
            }
        }
        if (v == -1) {
            cout << (pop == num_lines ? init : -1);
        }
    }
    cout << init;
    return 0;
}
