#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <climits>

using namespace std;

int main() {
    int n, m, q, s;
    while(cin >> n >> m >> q >> s) {
        if(n == 0 && m == 0 && q == 0 && s == 0) {
            break;
        }
        vector < vector < pair <int, int> > > g(n);
        for(int i = 0; i < m; ++i) {
            int a, b, w;
            cin >> a >> b >> w;
            g[a].push_back({b, w});
           // g[b].push_back({a, w});
        }
        int dist[n];
        for(int i = 0; i < n; ++i) {
            dist[i] = INT_MAX;
        }
        set < pair <int, int> > prior;
        dist[s] = 0;
        prior.insert({dist[s], s});
        while(!prior.empty()) {
            auto front = *prior.begin();
            prior.erase(prior.begin());
            int from = front.second;
            int len = front.first;
            for(int i = 0; i < g[from].size(); ++i) {
                int to = g[from][i].first;
                int cost = g[from][i].second;
                if(dist[to] > len + cost) {
                    dist[to] = len + cost;
                    prior.insert({dist[to], to});
                }
            }
        }
        while(q--) {
            int w;
            cin >> w;
            if(dist[w] == INT_MAX) {
                cout << "Impossible" << endl;
            } else {
                cout << dist[w] << endl;
            }
        }
        cout << endl;
    }
    return 0;
}