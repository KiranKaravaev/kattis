#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <climits>
#include <cstring>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector < vector <int> > g(n);
        while(m--) {
            int u, v;
            cin >> u >> v;
            --u, --v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        bool used[n];
        memset(used, false, sizeof(used));
        queue <int> q;
        used[0] = true;
        q.push(0);
        int res = 0;
        while(!q.empty()) {
            int front = q.front();
            q.pop();
            for(int i = 0; i < g[front].size(); ++i) {
                int to = g[front][i];
                if(!used[to]) {
                    used[to] = true;
                    ++res;
                    q.push(to);
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}