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

const int N = 1111;

int n, m;
char a[N][N];
int dist[N][N], dist_fire[N][N];
int X[4] = {-1, 1, 0, 0};
int Y[4] = {0, 0, -1, 1};

bool is_good(int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m;
}

void bfs(queue < pair <int, int> > q, int dist[][N]) {
    while(!q.empty()) {
        auto front = q.front();
        q.pop();
        int from_x = front.second;
        int from_y = front.first;
        for(int i = 0; i < 4; ++i) {
            int to_x = from_x + X[i];
            int to_y = from_y + Y[i];
            if(is_good(to_y, to_x) && a[to_y][to_x] == '.' && dist[to_y][to_x] > dist[from_y][from_x] + 1) {
                dist[to_y][to_x] = dist[from_y][from_x] + 1;
                q.push({to_y, to_x});
            }
        }
    }
}

void bfs1(int x, int y, int dist[][N]) {
    dist[y][x] = 0;
    queue < pair <int, int> > q;
    q.push({y, x});
    while(!q.empty()) {
        auto front = q.front();
        q.pop();
        int from_x = front.second;
        int from_y = front.first;
        for(int i = 0; i < 4; ++i) {
            int to_x = from_x + X[i];
            int to_y = from_y + Y[i];
            if(is_good(to_y, to_x) && a[to_y][to_x] == '.' && dist[to_y][to_x] > dist[from_y][from_x] + 1 && dist[from_y][from_x] + 1 < dist_fire[to_y][to_x]) {
                dist[to_y][to_x] = dist[from_y][from_x] + 1;
                q.push({to_y, to_x});
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> m >> n;
        int start_x, start_y;
        queue < pair <int, int> > fire_q;
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < m; ++j) {
                dist[i][j] = INT_MAX;
                dist_fire[i][j] = INT_MAX;
                cin >> a[i][j];
                if(a[i][j] == '@') {
                    start_x = j;
                    start_y = i;
                    a[i][j] = '.';
                }
                if(a[i][j] == '*') {
                    dist_fire[i][j] = 0;
                    fire_q.push({i, j});
                    a[i][j] = '.';
                }
            }
        }
        bfs(fire_q, dist_fire);
        bfs1(start_x, start_y, dist);
        int res = INT_MAX;
        for(int i = 0; i < n; ++i) {
            res = min(res, dist[i][0]);
            res = min(res, dist[i][m - 1]);
        }
        for(int j = 0; j < m; ++j) {
            res = min(res, dist[0][j]);
            res = min(res, dist[n - 1][j]);
        }
        if(res == INT_MAX) {
            cout << "IMPOSSIBLE" << endl;
        } else {
            cout << res + 1 << endl;
        }
        /*for(int i = 0; i < n; ++i) {
            for(int j = 0; j < m; ++j) {
                cout << dist[i][j] << " ";
            }
            cout << endl;
        }*/
    }
    return 0;
}