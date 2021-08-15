#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <deque>
#include <climits>

using namespace std;

int main() {
    int n;
    while(cin >> n) {
        if(n == -1) {
            break;
        }
        int g[n][n];
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> g[i][j];
            }
        }
        for (int i = 0; i < n; ++i) {
            vector<int> v;
            for (int j = 0; j < n; ++j) {
                if (g[i][j]) {
                    v.push_back(j);
                }
            }
            bool ok = false;
            if(!v.empty()) {
                for (int j = 0; j < v.size() - 1; ++j) {
                    for (int k = j + 1; k < v.size(); ++k) {
                        if (g[v[j]][v[k]]) {
                            ok = true;
                            break;
                        }
                    }
                }
            }
            if (!ok) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}