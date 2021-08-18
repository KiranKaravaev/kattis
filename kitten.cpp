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

vector < vector <int> > g(111);
bool used[111];

void dfs(int start) {
    cout << start << " ";
    used[start] = true;
    for(int i = 0; i < g[start].size(); ++i) {
        int to = g[start][i];
        if(!used[to]) {
            dfs(to);
        }
    }
}

int main() {
    int s;
    cin >> s;
    int a;
    while(cin >> a) {
        if(a == -1) {
            break;
        }
        int b;
        char c;
        while(scanf("%d%c", &b, &c)) {
            //g[a].push_back(b);
            g[b].push_back(a);
            if(c == '\n') {
                break;
            }
        }
    }
    dfs(s);
    return 0;
}