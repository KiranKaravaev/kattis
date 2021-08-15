#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <climits>

using namespace std;

const int N = 2 * 1e5 + 1;

vector < vector <int> > g(N);
bool used[N];

void dfs(int start) {
    used[start] = true;
    for(int i = 0; i < g[start].size(); ++i) {
        if(!used[g[start][i]]) {
            dfs(g[start][i]);
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    while(m--) {
        int a, b;
        cin >> a >> b;
        --a, --b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    dfs(0);
    bool connected = true;
    for(int i = 0; i < n; ++i) {
        if(!used[i]) {
            connected = false;
            cout << i + 1 << endl;
        }
    }
    if(connected) {
        cout << "Connected" << endl;
    }
    return 0;
}