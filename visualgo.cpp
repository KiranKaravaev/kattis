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

const int N = 1e4 + 1;

int dist[N];
vector < vector < pair <int, int> > > g(N);
int mult[N];

void go(int start) {
    for(int i = 0; i < N; ++i) {
        dist[i] = INT_MAX;
    }
    mult[start] = 1;
    dist[start] = 0;
    set < pair <int, int> > prior;
    prior.insert({dist[start], start});
    while(!prior.empty()) {
        auto front = *prior.begin();
        prior.erase(prior.begin());
        int from = front.second;
        int len = front.first;
        for(int i = 0; i < g[from].size(); ++i) {
            int to = g[from][i].first;
            int cost = g[from][i].second;
            if(dist[to] == len + cost) {
                mult[to] += mult[from];
            } else if(dist[to] > len + cost){
                mult[to] = mult[from];
                dist[to] = len + cost;
                prior.insert({dist[to], to});
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    while(m--) {
        int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
    }
    int s, t;
    cin >> s >> t;
    go(s);
    cout << (dist[t] != INT_MAX ? mult[t] : 0) << endl;
    return 0;
}